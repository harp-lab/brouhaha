#lang racket

(require "utils.rkt")
(require "slog-utils.rkt")
; (require print-debug/print-dbg)
(provide emit-cpp)
(define (emit-cpp proc_list filepath slog-flag ast-root desugarred_prog anf_prog alphatized_cps_prog)
  ; defining cpp header files
  ; replace the old cpp file, if exists
  (append-line filepath "#include<stdio.h>" 'replace)
  (append-line filepath "#include<string.h>")
  (append-line filepath "#include \"gmp_func.h\"")
  (append-line filepath (string-append "#include " "\"../../prelude.hpp\""))
  ; (append-line filepath "using namespace std;\n" )

  (define conflicting_c++_prims '#hash((abs . abs_brouhaha)
                                       (random . random_brouhaha)
                                       (remainder . remainder_brouhaha)
                                       (sqrt . sqrt_brouhaha)
                                       (for . for_brouhaha)
                                       ))

  (define proc-name-shadowed?
    (let loop ([env+ (hash)] [prog+ desugarred_prog])
      (match prog+
        [`((define (,name . ,_) ,_) ,_ ...)
         (loop
          (if (hash-has-key? env+ name)
              (hash-set env+ name `(shadowed ,@(cdr (hash-ref env+ name))))
              (hash-set env+ name `(not-shadowed dummyinfo)))
          (cdr prog+))]
        [`((define-prim ,f-name ,params ...) ,_ ...)
         (loop
          (if (hash-has-key? env+ f-name)
              (hash-set env+ f-name `(shadowed ,params))
              (hash-set env+ f-name `(not-shadowed-dp ,params)))
          (cdr prog+))]
        [`() env+])))

  (define find-global-constants
    (let loop ([env+ (hash)] [prog+ anf_prog])
      (match prog+
        [`((define (,_ . ,_) ,body) ,rest ...)
         (loop (find-global-constants-helper body env+) rest)]
        [`((define-prim ,_ ,_ ...) ,_ ...)
         (loop env+ (cdr prog+))]
        [`() env+])))

  (define global-symbols-set
    (let loop ([item-set (set)] [prog+ alphatized_cps_prog])
      (match prog+
        [`((define (,ptr . ,param) ,body) ,rest ...)
         (loop (set-add item-set ptr) rest)]
        [`((define-prim ,ptr ,params ...) ,_ ...)
         (loop (set-add item-set ptr) (cdr prog+))]
        [`() item-set]
        )))


  (append-line filepath "\n// declaring global constants at the top")
  (hash-map find-global-constants
            (lambda (key type)
              (cond
                [(equal? (car type) 'mpz)
                 (append-line filepath (format "mpz_t* ~a = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));" (cadr type)))]
                [(equal? (car type) 'mpf)
                 (append-line filepath (format "mpf_t* ~a = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));" (cadr type)))]
                [(equal? (car type) 'int)
                 (append-line filepath (format "void* ~a;" (cadr type)))]
                [(equal? (car type) 'float)
                 (append-line filepath (format "void* ~a;" (cadr type)))]
                [(or (equal? (car type) 'bool-true) (equal? (car type) 'bool-false))
                 (append-line filepath (format "void* ~a;" (cadr type)))]
                [else (error "Error occured find-global-constants!")]
                )
              ))
  (append-line filepath "\n")

  (append-line filepath "\n// declaring functions at the top")
  (define declare-top-level-funcs
    (let loop ([env+ (hash)] [prog+ proc_list])
      (match prog+

        [`((proc (,ptr ,env ,args ...) ,_) ,_ ...)
         (define args-str
           (foldl (lambda (arg acc) (string-append acc ", void* " (symbol->string (get-c-string arg))))
                  (string-append "void* " (symbol->string env))
                  args))

         (append-line filepath (format "void ~a_fptr(); // ~a" (get-c-string ptr) ptr))

         (define func_name (format "void ~a_spec(~a); // ~a" (get-c-string ptr) args-str ptr))
         (append-line filepath func_name)

         (if (hash-has-key? conflicting_c++_prims (get-c-string ptr))
             (append-line filepath
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (hash-ref conflicting_c++_prims (get-c-string ptr))
                                  (get-c-string ptr)
                                  0))

             (append-line filepath
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (get-c-string ptr)
                                  (get-c-string ptr)
                                  0)))

         ; (+ (length args) 1)) => +1, because we are including the env
         (loop (hash-set env+ ptr (+ (length args) 1)) (cdr prog+))]

        [`((proc (,ptr ,_ . ,_) ,_) ,_ ...)
         (define func_name (format "void ~a_fptr(); // ~a" (get-c-string ptr) ptr))
         (append-line filepath func_name)

         (append-line filepath
                      (if (hash-has-key? conflicting_c++_prims (get-c-string ptr))
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (hash-ref conflicting_c++_prims (get-c-string ptr))
                                  (get-c-string ptr)
                                  0)
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (get-c-string ptr)
                                  (get-c-string ptr)
                                  0)))

         (loop (hash-set env+ ptr 0) (cdr prog+))]

        [`((define-prim ,ptr ,params ...) ,_ ...)
         (define func_name (format "void ~a_fptr(); // ~a" (get-c-string ptr) ptr))
         (append-line filepath func_name)

         (append-line filepath
                      (if (hash-has-key? conflicting_c++_prims (get-c-string ptr))
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (hash-ref conflicting_c++_prims (get-c-string ptr))
                                  (get-c-string ptr)
                                  0)
                          (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n"
                                  (get-c-string ptr)
                                  (get-c-string ptr)
                                  0)))

         (loop (hash-set env+ ptr 0) (cdr prog+))]
        [`() env+]
        )))

  ; (pretty-print declare-top-level-funcs)
  ; (pretty-print global-symbols-set)
  (append-line filepath "\n")


  (define (get-arg-string arg_hash args)
    (foldl (lambda (arg acc)
             (string-append
              (if (hash-has-key? arg_hash (string->symbol acc))
                  (if (not (string-prefix? (hash-ref arg_hash (string->symbol acc)) "lam"))
                      (hash-ref arg_hash acc)
                      acc)
                  acc)
              ", "
              (if (hash-has-key? arg_hash arg)
                  (if (not (string-prefix? (hash-ref arg_hash arg) "lam"))
                      (hash-ref arg_hash arg)
                      (symbol->string (get-c-string arg)))
                  (symbol->string (get-c-string arg)))))

           (if (hash-has-key? arg_hash (car args))
               (if (not (string-prefix? (hash-ref arg_hash (car args)) "lam"))
                   (hash-ref arg_hash (car args))
                   (symbol->string (get-c-string (car args))))
               (symbol->string (get-c-string (car args))))

           (cdr args)))

  (define (get-hash-val-unless-lam-prefix arg_hash func)
    (cond
      [(hash-has-key? arg_hash func)
       (if (not (string-prefix? (hash-ref arg_hash func) "lam"))
           (hash-ref arg_hash func)
           (get-c-string func))]
      [else
       ;  (get-c-string func)
       (if (hash-has-key? conflicting_c++_prims (get-c-string func))
           (hash-ref conflicting_c++_prims (get-c-string func))
           (get-c-string func))
       ]))


  (define (convert-proc-body proc_name proc_env proc_arg body [arg_hash (hash)])
    ; (match (p-dbg body)
    (match body
      [`(let ([,lhs (make-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (length args))

       ; new-closure
       (append-line filepath "\n//creating new closure instance")
       (define cloName (gensym 'clo))

       (append-line filepath (format "void** ~a = alloc_clo(~a_fptr, ~a);" cloName ptr arglength))

       (when (> arglength 0)
         (append-line filepath "\n//setting env list"))

       (for ([i (in-range 1 (+ arglength 1))] [item args])
         (if (hash-has-key? arg_hash item)
             (if (not (string-prefix? (hash-ref arg_hash item) "lam"))
                 (append-line filepath (format "~a[~a] = ~a;" cloName i (hash-ref arg_hash item)))
                 (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item))))
             (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item)))))

       (append-line filepath (format "void* ~a = encode_clo(~a);" (get-c-string lhs) cloName))

       (append-line filepath "\n")
       (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs (symbol->string ptr)))]

      [`(let ([,lhs (make-kont ,ptr ,args ...)]) ,letbody)
       (define arglength (length args))

       (append-line filepath "\n//creating new make-kont closure")
       (define cloName (gensym 'clo))

       ;  (append-line filepath (format "void** ~a = alloc_kont(~a_fptr, ~a_spec, ~a);" cloName ptr ptr arglength))
       (append-line filepath (format "void** ~a = alloc_kont(~a_spec, ~a);" cloName ptr arglength))

       (when (> arglength 0)
         (append-line filepath "\n//setting env list"))

       (for ([i (in-range 1 (+ arglength 1))] [item args])
         (if (hash-has-key? arg_hash item)
             (if (not (string-prefix? (hash-ref arg_hash item) "lam"))
                 (append-line filepath (format "~a[~a] = ~a;" cloName i (hash-ref arg_hash item)))
                 (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item))))
             (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item)))))

       (append-line filepath (format "void* ~a = encode_clo(~a);" (get-c-string lhs) cloName))

       (append-line filepath "\n")
       (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs (symbol->string ptr)))]

      [`(let ([,lhs (prim kont-to-lam ,args ...)]) ,letbody)
       (define line
         (format "apply_prim_~a_~a(~a)"
                 (get-c-string 'kont-to-lam)
                 (length args)
                 (string-join (map (λ (item) (format "~a" (hash-ref arg_hash item (lambda () (get-c-string item))))) args) ", ")))

       (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line)) ]
      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       (define line
         (format "apply_prim_~a_~a(~a)"
                 (get-c-string op)
                 (length args)
                 (string-join (map (λ (item) (format "~a" (hash-ref arg_hash item (lambda () (get-c-string item))))) args) ", ")))

       (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line)) ]

      [`(let ([,lhs (env-ref ,env ,idx)]) ,letbody)
       (define line (format "decode_clo_array[~a]" idx))
       (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

      [`(let ([,lhs ,val]) ,letbody)
       (match val
         [`(quote ,(? flonum? val))
          (match-define `(,type ,varname) (hash-ref find-global-constants val))

          (cond
            [(equal? type 'float)
             (define line (format "~a" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]
            [(equal? type 'mpf)
             (define line (format "encode_mpf(~a)" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]
            [else
             (error "Error occured in emit-cpp -> proc_body case: (let ([,lhs ,val]) ,letbody)")])]

         [`(quote ,(? exact-integer? val))
          (match-define `(,type ,varname) (hash-ref find-global-constants val))

          (cond
            [(equal? type 'int)
             (define line (format "~a" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]
            [(equal? type 'mpz)
             (define line (format "encode_mpz(~a)" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]
            [else
             (error "Error occured in emit-cpp -> proc_body case: (let ([,lhs ,val]) ,letbody)")])]

         [`(quote ,(? boolean? val))
          (match-define `(,type ,varname) (hash-ref find-global-constants val))

          (cond
            [(equal? type 'bool-true)
             (define line (format "~a" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]
            [(equal? type 'bool-false)
             (define line (format "~a" varname))
             (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line)) ]
            [else
             (error "Error occured in emit-cpp -> proc_body case: (quote ,(? boolean? val)")])]

         [`(quote ,(? null? val))
          (define line (format "encode_null()"))
          (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

         [`(quote ,(? string? val))
          (define line (format "encode_str(new(GC) std::string(\"~a\"))" val))
          (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

         [`(quote ,(? symbol? val))
          (define line (format "encode_str(new(GC) std::string(\"~a\"))" (symbol->string val)))
          (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

         [(? symbol?) ; Not sure what this case does or supposed to do - SK
          (define line (format "encode_str(new string(\"~a\"))" val))
          (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

         ; to handle some arbitrary expression
         [`(quote ,val)
          (define line (format "encode_str(new(GC) std::string(\"~a\"))" val))
          (convert-proc-body proc_name proc_env proc_arg letbody (hash-set arg_hash lhs line))]

         [_ (raise (format "Unknown datatype in emit-cpp: ~a" val))])]

      [`(if ,grd ,texp ,fexp)
       (append-line filepath "\n//if-clause")

       (append-line filepath (format "if(is_true(~a))\n{" (hash-ref arg_hash grd (lambda () (get-c-string grd)))))
       (convert-proc-body proc_name proc_env proc_arg texp arg_hash)
       (append-line filepath "}\nelse\n{")
       (convert-proc-body proc_name proc_env proc_arg fexp arg_hash)
       (append-line filepath "}\n")]

      [`(clo-apply ,func ,args)
       (match-define `(,builtin-func ,res) (is-define-prim ast-root func))

       (cond
         [(and slog-flag res)
          ; (displayln (~a "func: " func "builtin-func: " builtin-func " res: " res))
          (append-line filepath "\n//clo-apply")

          (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string builtin-func)))
          (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
          (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))

          (append-line filepath (format "~a_fptr();" (get-c-string builtin-func)))]
         [else
          (append-line filepath "\n//clo-apply")

          (match-define `(,is_define_prim ,is_callable ,arg_count)
            (callable-define-prim? proc-name-shadowed? func 0))

          ; (set! is_define_prim #f)
          ; (set! is_callable #f)
          ; (set! arg_count 0)
          ; (displayln func)
          ; (displayln is_define_prim)
          ; (displayln is_callable)
          ; (displayln arg_count)
          ; (displayln "---------")

          (cond
            ; one of the define-prim so call that without unpacking closure
            [is_define_prim
             (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string func)))
             (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
             (append-line filepath (format "numArgs = ~a;" 2))

             (append-line filepath (format "~a_fptr();" (get-c-string func)))]
            [else
             (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string func)))
             (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
             (append-line filepath (format "numArgs = ~a;" 2))

             (append-line filepath (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (get-c-string func)))])])]

      [`(clo-app ,func ,args ...)
      ;  (displayln (~a "clo-app=func " func " args: " args))
       ; builtin-func will hold, either the called builtin define-prim
       ; or the aliased builtin define-prim by the "func" at the call-site
       ; is-define-prim, has bug now, slog-fact-layout changed, so update the code, nov5,24
       (match-define `(,builtin-func ,res1)
         (if slog-flag
             (is-define-prim ast-root func)
             `(,func #f)))

       (match-define `(,_ ,res2)
         (if slog-flag
             (check-define-prim-arg-count ast-root builtin-func (- (length args) 1))
             `(,func #f)))
       ;  (pretty-print arg_hash)
       (cond
         ; builtin define-prim with a specific argument count
         [(and slog-flag res1 res2)
          (append-line filepath "\n//clo-app")
          (define args-str
            (foldl (lambda (arg acc) (string-append acc ", " (symbol->string arg)))
                   (symbol->string (cadr args))
                   (cddr args)))

          (append-line filepath (format "arg_buffer[2] = apply_prim_~a_~a(~a);" (get-c-string builtin-func) (- (length args) 1) args-str))
          (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string (car args))))

          (append-line filepath "numArgs = 2;")
          (append-line filepath (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (get-c-string (car args))))]

         ; not specific argument count, but still one of the builtin define-prim so calling that directly
         ; instead of unpacking the closure
         [(and slog-flag res1)
          (append-line filepath "\n//clo-app")

          (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string builtin-func)))

          (for ([i (in-range 1 (+ (length args) 1))] [item args])
            (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-c-string item))))

          (append-line filepath (format "numArgs = ~a;" (+ (length args) 1)))

          (if (hash-has-key? conflicting_c++_prims (get-c-string func))
              (append-line filepath (format "~a_fptr();" (hash-ref conflicting_c++_prims (get-c-string builtin-func))))
              (append-line filepath (format "~a_fptr();" (get-c-string builtin-func))))]
         [else
          (match-define `(,is_define_prim ,is_callable ,arg_count)
            (callable-define-prim? proc-name-shadowed? func (- (length args) 1)))

          (set! is_define_prim #f)
          (set! is_callable #f)
          (set! arg_count 0)
          ; (displayln func)
          ; (displayln (- (length args) 1))
          ; (displayln is_define_prim)
          ; (displayln is_callable)
          ; (displayln arg_count)
          ; (displayln "---------")

          (cond
            ; this case won't be true anymore, since we are promoting
            ; all the callable define-prim in the right side of a let
            ; thus, define-prim shouldn't be a in a clo-app anymore!
            [(and is_define_prim is_callable)
             (append-line filepath "\n//clo-app")

             (define args-str
               (foldl (lambda (arg acc)
                        (string-append
                         (if (hash-has-key? arg_hash acc)
                             (if (not (string-prefix? (hash-ref arg_hash acc) "lam"))
                                 (hash-ref arg_hash acc)
                                 acc)
                             acc)
                         ", "
                         (if (hash-has-key? arg_hash arg)
                             (if (not (string-prefix? (hash-ref arg_hash arg) "lam"))
                                 (hash-ref arg_hash arg)
                                 arg)
                             (symbol->string arg))))

                      (if (hash-has-key? arg_hash (cadr args))
                          (if (not (string-prefix? (hash-ref arg_hash (cadr args)) "lam"))
                              (hash-ref arg_hash (cadr args))
                              (symbol->string (cadr args)))
                          (symbol->string (cadr args)))

                      (cddr args)))

             (append-line filepath (format "arg_buffer[2] = apply_prim_~a_~a(~a);"
                                           (get-hash-val-unless-lam-prefix arg_hash func)
                                           arg_count
                                           args-str))

             (append-line filepath (format "arg_buffer[1] = ~a;" (get-hash-val-unless-lam-prefix arg_hash (car args))))

             (append-line filepath "numArgs = 2;")

             (if (set-member? global-symbols-set (car args))
                 (begin
                   (append-line filepath (format "~a_fptr();" (get-c-string (car args)))))
                 (begin
                   (if (and (hash-has-key? arg_hash (car args))
                            (string-prefix? (symbol->string (car args)) "f_lam_")
                            (not (string-prefix? (hash-ref arg_hash (car args)) "decode_clo")))
                       (append-line filepath (format "~a_spec(~a, apply_prim_~a_~a(~a));"
                                                     (hash-ref arg_hash (car args))
                                                     (car args)
                                                     (get-hash-val-unless-lam-prefix arg_hash func)
                                                     arg_count
                                                     args-str))

                       (append-line filepath
                                    (if (hash-has-key? arg_hash (car args))
                                        (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (hash-ref arg_hash (car args)))
                                        (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (get-c-string (car args))))))
                   ))]

            ; not specific argument count, but still one of the builtin define-prim
            ; so calling that directly instead of unpacking the closure
            [is_define_prim
             (append-line filepath "\n//clo-app")

             (append-line filepath (format "arg_buffer[1] = ~a;" (get-hash-val-unless-lam-prefix arg_hash func)))

             (for ([i (in-range 1 (+ (length args) 1))] [item args])
               (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-hash-val-unless-lam-prefix arg_hash item))))

             (append-line filepath (format "numArgs = ~a;" (+ (length args) 1)))

             (append-line filepath (format "\n~a_fptr();" (get-c-string func)))]

            [else
            ;  (displayln (~a "inside else"))
             (append-line filepath "\n//clo-app")

             (if (hash-has-key? declare-top-level-funcs func)
                 (begin
                   (cond
                     [(= (hash-ref declare-top-level-funcs func) 0)
                      (begin
                        (append-line filepath (format "arg_buffer[1] = ~a;" (get-hash-val-unless-lam-prefix arg_hash func)))

                        (for ([i (in-range 1 (+ (length args) 1))] [item args])
                          (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-hash-val-unless-lam-prefix arg_hash item))))

                        (append-line filepath (format "numArgs = ~a;" (+ (length args) 1)))

                        (append-line filepath (format "~a_fptr();" (get-c-string func))))]
                     [else
                      (append-line filepath
                                   (format "~a_spec(~a);" (get-c-string func)
                                           (get-arg-string arg_hash (cons func args))))]))
                 (begin
                   (if (and (hash-has-key? arg_hash func)
                            (string-prefix? (symbol->string func) "f_lam_")
                            (not (string-prefix? (hash-ref arg_hash func) "decode_clo")))
                       (begin
                         ;  (displayln (~a "func: " func " " (hash-has-key? arg_hash func)))
                         (append-line filepath (format "~a_spec(~a);" (hash-ref arg_hash func)
                                                       (get-arg-string arg_hash (cons func args)))))
                       (begin
                         (append-line filepath (format "arg_buffer[1] = ~a;" (get-hash-val-unless-lam-prefix arg_hash func)))

                         (for ([i (in-range 1 (+ (length args) 1))] [item args])
                           (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-hash-val-unless-lam-prefix arg_hash item))))

                         (append-line filepath (format "numArgs = ~a;" (+ (length args) 1)))

                         ; will think about c++ conflict later
                         ;  (append-line filepath
                         ;               (if (hash-has-key? conflicting_c++_prims (get-c-string func))
                         ;                   (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (hash-ref conflicting_c++_prims (get-c-string func)))
                         ;                   (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (get-c-string func))))
                         (append-line filepath "// generic else-case")
                         (append-line filepath (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" (get-hash-val-unless-lam-prefix arg_hash func)))))))])])]

      [`(kont-clo-app ,func ,arg)
      ;  (displayln (~a "kont-clo-app=func " func " args: " arg))
       (append-line filepath "// kont-clo-app case")

       (if (hash-has-key? arg_hash func)
           (begin
             (cond
               [(string-prefix? (hash-ref arg_hash func) "decode_clo")
                (append-line filepath (format "reinterpret_cast<void (*)(void*, void*)>(decode_clo(~a)[0])(~a, ~a);"
                                              (hash-ref arg_hash func)
                                              (hash-ref arg_hash func)
                                              (hash-ref arg_hash arg (lambda () (get-c-string arg)))
                                              ))]
               [(or (string-prefix? (hash-ref arg_hash func) "f_lam") (string-prefix? (hash-ref arg_hash func) "lam"))
                ; (append-line filepath (format "reinterpret_cast<void (*)(void*, void*)>(decode_clo(~a)[0])(~a, ~a);"
                ;                               (get-c-string func)
                ;                               (get-c-string func)
                ;                               (hash-ref arg_hash arg (lambda () arg))
                ;                               ))
                (append-line filepath (format "~a_spec(~a, ~a);"
                                              (hash-ref arg_hash func)
                                              (get-c-string func)
                                              (hash-ref arg_hash arg (lambda () (get-c-string arg)))))]
               [else
                (append-line filepath (format "reinterpret_cast<void (*)(void*, void*)>(decode_clo(~a)[0])(~a, ~a);"
                                              (hash-ref arg_hash func (lambda () (get-c-string func)))
                                              (hash-ref arg_hash func (lambda () (get-c-string func)))
                                              (hash-ref arg_hash arg (lambda () (get-c-string arg)))))]))
           (append-line filepath (format "reinterpret_cast<void (*)(void*, void*)>(decode_clo(~a)[0])(~a, ~a);"
                                         (get-c-string func)
                                         (get-c-string func)
                                         (hash-ref arg_hash arg (lambda () (get-c-string arg))))))]))

  (define (convert-procs proc)
    (match proc
      [`(proc (,ptr ,env ,args ...) ,body)
       (append-line filepath (format "inline void ~a_fptr() // ~a -> generic version ~a" (get-c-string ptr) ptr "\n{"))

       ;  uncomment the line below for debugging!
      ;  (append-line filepath (format "std::cout<<\"In ~a_fptr: generic version\"<<std::endl;" (get-c-string ptr)))

       (when (not (string-prefix? (symbol->string env) "_"))
         (append-line filepath "//reading env")
         (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env))))

       (append-line filepath "//reading env and args")
       (for ([i (in-range 2 (+ (length args) 2))] [item args])
         (append-line filepath (format "void* const ~a = arg_buffer[~a];" (get-c-string item) i)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))
       (when (string-prefix? (symbol->string env) "env")
         (append-line filepath (format "decode_clo_array = decode_clo(~a);" (get-c-string env))))

       (convert-proc-body (get-c-string ptr) (get-c-string env) args body)

       (append-line filepath "}\n")


       (define args-str
         (foldl (lambda (arg acc) (string-append acc ", void* " (symbol->string (get-c-string arg))))
                (string-append "void* " (symbol->string env))
                args))

       (append-line filepath (format "inline void ~a_spec(~a) // ~a ~a" (get-c-string ptr) args-str ptr "\n{"))

       ; uncomment the line below for debugging!
      ;  (append-line filepath (format "std::cout<<\"In ~a_fptr: spec\"<<std::endl;" (get-c-string ptr)))

       (if (hash-has-key? declare-top-level-funcs ptr)
           (begin
             (when (= (hash-ref declare-top-level-funcs ptr) 0)
               (append-line filepath "//reading env")
               (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

               (append-line filepath "//reading env and args")
               (for ([i (in-range 2 (+ (length args) 2))] [item args])
                 (append-line filepath (format "void* const ~a = arg_buffer[~a];" (get-c-string item) i)))))
           (begin
             (append-line filepath "//reading env")
             (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

             (append-line filepath "//reading env and args")
             (for ([i (in-range 2 (+ (length args) 2))] [item args])
               (append-line filepath (format "void* const ~a = arg_buffer[~a];" (get-c-string item) i)))))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))
       (when (string-prefix? (symbol->string env) "env")
         (append-line filepath (format "decode_clo_array = decode_clo(~a);" (get-c-string env))))

       (convert-proc-body (get-c-string ptr) (get-c-string env) args body)

       (append-line filepath "}\n")]

      [`(proc (,ptr ,env . ,arg) ,body)
       (define func_name (format "void ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment the line below for debugging!
      ;  (append-line filepath (format "std::cout<<\"In ~a_fptr\"<<std::endl;" (get-c-string ptr)))

       (append-line filepath "//reading env")
       (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))
       (when (string-prefix? (symbol->string env) "env")
         (append-line filepath (format "decode_clo_array = decode_clo(~a);" (get-c-string env))))

       (append-line filepath (format "void* ~a = nullptr;" arg))

       (append-line filepath (format "if(is_cons(arg_buffer[2]))\n{"))
       (append-line filepath "//(apply e0 e0) case")
       (append-line filepath (format "~a = arg_buffer[2];" arg))
       (append-line filepath "}\nelse\n{")

       (append-line filepath "//building cons cell")
       (append-line filepath (format "~a = encode_null();" arg))
       (append-line filepath (format "for(int i = numArgs; i >= 2; i--)\n{"))
       (append-line filepath (format "~a = prim_cons(arg_buffer[i], ~a);" arg arg))
       (append-line filepath (format "\n}\n"))

       (append-line filepath "}\n")

       (convert-proc-body (get-c-string ptr) (get-c-string env) arg body)
       (append-line filepath "}\n")
       ]

      [`(define-prim ,ptr ,args ...)
       (define k (gensym 'kont))
       (define x (gensym 'x))
       (define arg 'lst)
       (define newarg (gensym arg))

       (define func_name (format "inline void ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ;  uncomment the line below for debugging!
      ;  (append-line filepath (format "std::cout<<\"In ~a_fptr\"<<std::endl;" (get-c-string ptr)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))

       (append-line filepath (format "if(is_cons(arg_buffer[2]))\n{"))
       (append-line filepath "//(apply e0 e0) case")
       (append-line filepath (format "void* const ~a = arg_buffer[2];" arg))
       (append-line filepath (format "void* const ~a = prim_car(lst);" k))
       (append-line filepath (format "void* const ~a = prim_cdr(lst);" newarg))
       (append-line filepath (format "void* const ~a = apply_prim_~a(~a);" x (get-c-string ptr) newarg))

       (append-line filepath (format "arg_buffer[1] = ~a;" k))
       (append-line filepath (format "arg_buffer[2] = ~a;" x))

       (append-line filepath  "numArgs = 2;")

       (append-line filepath (format "reinterpret_cast<void (*)()>((decode_clo(~a))[0])();" k))

       (append-line filepath "}\nelse\n{")

       (append-line filepath (format "void* const ~a = arg_buffer[2];" k))
       (append-line filepath (format "void* const ~a = apply_prim_~a(arg_buffer);" x (get-c-string ptr)))

       ;  (append-line filepath (format "arg_buffer[1] = ~a;" k))
       ;  (append-line filepath (format "arg_buffer[2] = ~a;" x))

       ;  (append-line filepath  "numArgs = 2;")

       (append-line filepath (format "reinterpret_cast<void (*)(void*, void*)>((decode_clo(~a))[0])(~a, ~a);" k k x))
       (append-line filepath "}\n")
       (append-line filepath "}\n")]
      ) ;end of match
    );end of function definitions.

  (map convert-procs proc_list)
  ; writing the main function.
  (append-line filepath "int main(int argc, char **argv)\n{")

  (append-line filepath
               "mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);")

  (append-line filepath "\n// initializing global constants in the main")
  (hash-map find-global-constants
            (lambda (key type)
              (cond
                [(equal? (car type) 'mpz)
                 (append-line filepath (format "mpz_init_set_str(*~a, \"~a\", 10);" (cadr type) key))]
                [(equal? (car type) 'mpf)
                 (append-line filepath (format "mpf_init_set_str(*~a, \"~a\", 10);" (cadr type) key))]
                [(equal? (car type) 'int)
                 (append-line filepath (format "~a = reinterpret_cast<void *>(encode_int(~a));" (cadr type) key))]
                ;  (append-line filepath (format "mpz_init_set_str(*~a, \"~a\", 10);" (cadr type) key))]
                [(equal? (car type) 'float)
                 (append-line filepath (format "~a = reinterpret_cast<void *>(encode_float(~a));" (cadr type) key))]
                ;  (append-line filepath (format "mpf_init_set_str(*~a, \"~a\", 10);" (cadr type) key))]
                [(equal? (car type) 'bool-true)
                 (append-line filepath (format "~a = encode_bool(true);" (cadr type)))]
                [(equal? (car type) 'bool-false)
                 (append-line filepath (format "~a = encode_bool(false);" (cadr type)))]
                [else (error "Error occured could not find value in -> find-global-constants!")]
                )))

  (append-line filepath "\n")

  (append-line filepath "\n//making a call to the brouhaha main function to kick off our C++ emission.")
  ; (append-line filepath "call_counter++;")
  ; (append-line filepath "void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));")

  ; (append-line filepath (format "void** f_halt_clo = alloc_kont(fhalt, reinterpret_cast<void*>(fhalt_spec), 0);"))
  (append-line filepath (format "void** f_halt_clo = alloc_kont(fhalt_spec, 0);"))
  (append-line filepath (format "void* fhalt_clo = encode_clo(f_halt_clo);"))

  ; (append-line filepath "arg_buffer[0] = 0;")
  (append-line filepath "arg_buffer[2] = fhalt_clo;")

  (append-line filepath "\n// calling next procedure using a function pointer")
  (append-line filepath "brouhaha_main_spec(nullptr, fhalt_clo);")

  (append-line filepath "}\n")
  ;end of main function.
  'cpp-emission-done!)