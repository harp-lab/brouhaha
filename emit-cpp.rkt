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
        [`((define (,name . ,param) ,body) ,rest ...)
         (loop (find-global-constants-helper body env+) rest)]
        [`((define-prim ,f-name ,params ...) ,_ ...)
         (loop env+ (cdr prog+))]
        [`() env+]
        )))

  (define global-kont-set
    (let loop ([item-set (set)] [prog+ alphatized_cps_prog])
      (match prog+
        [`((define (,ptr ,kont . ,param) ,body) ,rest ...)
         (loop (set-add item-set kont) rest)]
        [`((define (,ptr . ,param) ,body) ,rest ...)
         (loop item-set rest)]
        [`((define-prim ,ptr ,params ...) ,_ ...)
         (loop item-set (cdr prog+))]
        [`() item-set]
        )))

  (define global-symbols-set
    (let loop ([item-set (set)] [prog+ alphatized_cps_prog])
      (match prog+
        ; [`((define (,ptr ,kont . ,param) ,body) ,rest ...)
        ;  (loop (set-add (set-add item-set ptr) kont) rest)]
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

  ; (append-line filepath "\n// declaring global konts at the top")
  ; (for ([item (set->list global-kont-set)])
  ;   (append-line filepath (format "void *const ~a = nullptr;" item)))
  ; (append-line filepath "\n")

  (append-line filepath "\n// declaring functions at the top")
  (let loop ([env+ (hash)] [prog+ proc_list])
    (match prog+

      [`((proc (,ptr ,env ,args ...) ,body) ,rest ...)
       (define func_name (format "void ~a_fptr(); // ~a" (get-c-string ptr) ptr))
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

       (loop env+ (cdr prog+))]

      [`((proc (,ptr ,env . ,arg) ,body) ,rest ...)
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

       (loop env+ (cdr prog+))]

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

       (loop env+ (cdr prog+))]
      [`() env+]
      ))
  (append-line filepath "\n")

  (append-line filepath "\n// pre-decoding global symbols")
  (for ([item (set->list global-symbols-set)])
    (append-line filepath
                 (if (hash-has-key? conflicting_c++_prims (get-c-string item))
                     (format "auto decoded_~a = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
                             (get-c-string item) (hash-ref conflicting_c++_prims (get-c-string item)))
                     (format "auto decoded_~a = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);" (get-c-string item) (get-c-string item)))))
  (append-line filepath "\n")


  (define (convert-proc-body proc_name proc_env proc_arg body)
    (match body
      [`(let ([,lhs (make-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (length args))

       (append-line filepath "\n//creating new closure instance")

       (define cloName (gensym 'clo))

       (append-line filepath (format "void** ~a = alloc_clo(~a_fptr, ~a);" cloName ptr arglength))

       (when (> (+ arglength 1) 1)
         (append-line filepath "\n//setting env list"))

       (for ([i (in-range 1 (+ arglength 1))] [item args])

         ; we don't need this anymore, right?
         ;  (when (eq? (get-c-string item) proc_name)
         ;    (append-line
         ;     filepath
         ;     (if (hash-has-key? conflicting_c++_prims (get-c-string item))
         ;         (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n" (hash-ref conflicting_c++_prims (get-c-string item)) proc_name 0)
         ;         (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n" proc_name proc_name 0))
         ;     ))

         (if (hash-has-key? conflicting_c++_prims (get-c-string item))
             (append-line filepath (format "~a[~a] = ~a;" cloName i (hash-ref conflicting_c++_prims (get-c-string item))))
             (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item)))))

       (append-line filepath (format "void* ~a = encode_clo(~a);" (get-c-string lhs) cloName))

       ;  (when (> (+ arglength 1) 1) (append-line filepath "\n"))
       (append-line filepath "\n")

       (convert-proc-body proc_name proc_env proc_arg letbody)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       (define line
         (format "void* const ~a = apply_prim_~a_~a(~a);"
                 (get-c-string lhs)
                 (get-c-string op)
                 (length args)
                 (string-join (map (λ (item) (format "~a" (get-c-string item))) args) ", ")))

       (append-line filepath line)

       (convert-proc-body proc_name proc_env proc_arg letbody)]

      [`(let ([,lhs (apply-prim ,op ,arg)]) ,letbody)
       (define line
         (format "void* ~a = apply_prim_~a(~a);"
                 (get-c-string lhs)
                 (get-c-string op)
                 (get-c-string arg)))

       (append-line filepath line)

       (convert-proc-body proc_name proc_env proc_arg letbody)]

      [`(let ([,lhs (env-ref ,env ,idx)]) ,letbody)
       (append-line filepath (format "void* const ~a = decode_clo_array[~a];" (get-c-string lhs) idx))

       (convert-proc-body proc_name proc_env proc_arg letbody)]

      [`(let ([,lhs ,val]) ,letbody)
       (match val
         [`(quote ,(? flonum? val))
          (match-define `(,type ,varname) (hash-ref find-global-constants val))

          (cond
            [(equal? type 'float)
             (append-line filepath (format "void* const ~a = ~a;" (get-c-string lhs) varname))]
            [(equal? type 'mpf)
             (append-line filepath (format "void* const ~a = encode_mpf(~a);" (get-c-string lhs) varname))]
            [else (error "Error occured in emit-cpp -> proc_body case: (let ([,lhs ,val]) ,letbody)")])

          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [`(quote ,(? exact-integer? val))

          (match-define `(,type ,varname) (hash-ref find-global-constants val))

          (cond
            [(equal? type 'int)
             (append-line filepath (format "void* const ~a = ~a;" lhs varname))]
            [(equal? type 'mpz)
             (append-line filepath (format "void* const ~a = encode_mpz(~a);" (get-c-string lhs) varname))]
            [else (error "Error occured in emit-cpp -> proc_body case: (let ([,lhs ,val]) ,letbody)")])

          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [`(quote ,(? boolean? val))

          (match-define `(,type ,varname) (hash-ref find-global-constants val))
          (cond
            [(equal? type 'bool-true)
             (append-line filepath (format "void* const ~a = ~a;" (get-c-string lhs) varname))]
            [(equal? type 'bool-false)
             (append-line filepath (format "void* const ~a = ~a;" (get-c-string lhs) varname))]
            [else (error "Error occured in emit-cpp -> proc_body case: (quote ,(? boolean? val)")])

          (convert-proc-body proc_name proc_env proc_arg letbody)
          ]

         [`(quote ,(? null? val))
          (append-line filepath (format "void* ~a = encode_null();" (get-c-string lhs)))
          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [`(quote ,(? string? val))
          (append-line
           filepath
           (format "void* ~a = encode_str(new(GC) std::string(\"~a\"));" (get-c-string lhs) val))
          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [`(quote ,(? symbol? val))
          (append-line
           filepath
           (format "void* ~a = encode_str(new(GC) std::string(\"~a\"));" (get-c-string lhs) (symbol->string val)))
          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [(? symbol?) ; Not sure what this case does or supposed to do - SK
          ; (pretty-print (~a "cpb: " val))
          (append-line filepath
                       (format "void* ~a = encode_str(new string(\"~a\"));" (get-c-string lhs) val))
          (convert-proc-body proc_name proc_env proc_arg letbody)]

         [_ (raise (format "Unknown datatype! ~a" val))])]

      [`(if ,grd ,texp ,fexp)
       (append-line filepath "\n//if-clause")
       (define guard (gensym 'if_guard))

       (append-line filepath (format "bool ~a = is_true(~a);" guard grd))
       (append-line filepath (format "if(~a)\n{" guard))
       (convert-proc-body proc_name proc_env proc_arg texp)
       (append-line filepath "}\nelse\n{")
       (convert-proc-body proc_name proc_env proc_arg fexp)
       (append-line filepath "}\n")]

      [`(clo-apply ,func ,args)
       (match-define `(,builtin-func ,res) (if slog-flag
                                               (is-define-prim ast-root func)
                                               `(,func #f)))

       (cond
         [(and slog-flag res)
          ; (displayln (~a "func: " func "builtin-func: " builtin-func " res: " res))
          (append-line filepath "\n//clo-apply")

          (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string builtin-func)))
          (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
          (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))

          (append-line filepath (format "~a_fptr();" (get-c-string builtin-func)))
          ]
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
             (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))

             (append-line filepath (format "~a_fptr();" (get-c-string func)))
             ]
            [else
             (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string func)))
             (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
             (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))

             (append-line filepath
                          (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
                                  (get-c-string func)))

             (append-line filepath "\n// calling next procedure using a function pointer")
             (append-line filepath "function_ptr();")
             ])

          ; (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string func)))
          ; (append-line filepath (format "arg_buffer[2] = ~a;" (get-c-string args)))
          ; (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))

          ; (append-line filepath
          ;              (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
          ;                      (get-c-string func)))

          ; (append-line filepath "\n// calling next procedure using a function pointer")
          ; (append-line filepath "function_ptr();")
          ]
         )]

      [`(clo-app ,func ,args ...)

       ; builtin-func will hold, either the called builtin define-prim
       ; or the aliased builtin define-prim by the "func" at the call-site
       (match-define `(,builtin-func ,res1) (if slog-flag
                                                (is-define-prim ast-root func)
                                                `(,func #f)))
       (match-define `(,temp-func ,res2) (if slog-flag
                                             (check-define-prim-arg-count ast-root builtin-func (- (length args) 1))
                                             `(,func #f)))

       (cond
         ; builtin define-prim with a specific argument count
         [(and slog-flag res1 res2)
          (append-line filepath "\n//clo-app")
          (define args-str
            (foldl (lambda (arg acc) (string-append acc ", " (symbol->string arg)))
                   (symbol->string (cadr args))
                   (cddr args)))
                   
          (append-line filepath (format "arg_buffer[2]=apply_prim_~a_~a(~a);" (get-c-string builtin-func) (- (length args) 1) args-str))
          (append-line filepath
                       (format "arg_buffer[1] = ~a;" (get-c-string (car args))))
          (append-line filepath
                       (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))
          (append-line
           filepath
           (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
                   (get-c-string (car args))))

          (append-line filepath "// resetting the closure array")
          (append-line filepath "decode_clo_array = nullptr;")

          (append-line filepath "\n// calling next procedure using a function pointer")
          (append-line filepath "function_ptr();")
          ]

         ; not specific argument count, 
         ; but still one of the builtin so calling that directly
         ; instead of unpacking the closure
         [(and slog-flag res1)
          (append-line filepath "\n//clo-app")

          (append-line filepath (format "arg_buffer[1] = ~a;" (get-c-string builtin-func)))

          (for ([i (in-range 1 (+ (length args) 1))] [item args])
            (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-c-string item))))

          (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" (+ (length args) 1)))


          (append-line filepath (format "~a_fptr();" (get-c-string builtin-func)))
          ]
         [else
          (match-define `(,is_define_prim ,is_callable ,arg_count)
            (callable-define-prim? proc-name-shadowed? func (- (length args) 1)))

          ; (set! is_define_prim #f)
          ; (set! is_callable #f)
          ; (set! arg_count 0)
          ; (displayln func)
          ; (displayln (- (length args) 1))
          ; (displayln is_define_prim)
          ; (displayln is_callable)
          ; (displayln arg_count)
          ; (displayln "---------")

          (cond
            [(and is_define_prim is_callable)
             (append-line filepath "\n//clo-app")
             (define args-str
               (foldl (lambda (arg acc) (string-append acc ", " (symbol->string arg)))
                      (symbol->string (cadr args))
                      (cddr args)))
             (append-line filepath (format "arg_buffer[2]=apply_prim_~a_~a(~a);" (get-c-string func) arg_count args-str))
             (append-line filepath
                          (format "arg_buffer[1] = ~a;" (get-c-string (car args))))

             (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))


             (if (set-member? global-symbols-set (car args))
                 (begin
                   (append-line filepath (format "decoded_~a();" (get-c-string (car args)))))
                 (begin
                   (append-line
                    filepath
                    (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
                            (get-c-string (car args))))

                   (append-line filepath "\n// calling next procedure using a function pointer")
                   (append-line filepath "function_ptr();")
                   ))
             ]

            [is_define_prim
             (append-line filepath "\n//clo-app")

             (append-line filepath
                          (format "arg_buffer[1] = ~a;" (get-c-string func)))
             (for ([i (in-range 1 (+ (length args) 1))] [item args])
               (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-c-string item))))
             (append-line filepath
                          (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" (+ (length args) 1)))

             (append-line filepath (format "~a_fptr();" (get-c-string func)))]
            [else
             (append-line filepath "\n//clo-app")

             (append-line filepath
                          (format "arg_buffer[1] = ~a;" (get-c-string func)))
             (for ([i (in-range 1 (+ (length args) 1))] [item args])
               (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-c-string item))))
             (append-line filepath
                          (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" (+ (length args) 1)))

             (if (set-member? global-symbols-set func)
                 (begin
                   (append-line filepath (format "decoded_~a();" (get-c-string func))))
                 (begin
                   (append-line
                    filepath
                    (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
                            (get-c-string func)))

                   (append-line filepath "\n// calling next procedure using a function pointer")
                   (append-line filepath "function_ptr();")
                   ))

             ;  (append-line
             ;   filepath
             ;   (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);"
             ;           (get-c-string func)))

             ;  (append-line filepath "\n// calling next procedure using a function pointer")
             ;  (append-line filepath "function_ptr();")
             ])

          ])]))

  (define (convert-procs proc)
    ; (pretty-print proc)
    (match proc
      [`(proc (,ptr ,env ,args ...) ,body)
       (define func_name (format "void ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ;  uncomment these two lines for debugging!
       ;  (append-line filepath (format "std::cout<<\"In ~a_fptr\"<<std::endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))
       ;  (append-line filepath "call_counter++;")

       (append-line filepath "//reading number of args")
       ;  (append-line filepath (format "int numArgs = reinterpret_cast<int>(arg_buffer[0]);"))
       (append-line filepath (format "numArgs = reinterpret_cast<long>(arg_buffer[0]);"))
       (append-line filepath "//reading env")
       (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

       (append-line filepath "//reading env and args")
       (for ([i (in-range 2 (+ (length args) 2))] [item args])
         (append-line filepath (format "void* const ~a = arg_buffer[~a];" (get-c-string item) i)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))
       (when (string-prefix? (symbol->string env) "e")
         (append-line filepath (format "decode_clo_array = decode_clo(~a);" (get-c-string env))))

       (convert-proc-body (get-c-string ptr) (get-c-string env) args body)

       (append-line filepath "}\n")
       ]

      [`(proc (,ptr ,env . ,arg) ,body)
       (define func_name (format "void ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "std::cout<<\"In ~a_fptr\"<<std::endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))
       ;  (append-line filepath "call_counter++;")

       (append-line filepath "//reading number of args")
       ;  (append-line filepath (format "int numArgs = reinterpret_cast<int>(arg_buffer[0]);"))
       (append-line filepath (format "numArgs = reinterpret_cast<long>(arg_buffer[0]);"))

       (append-line filepath "//reading env")
       (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))
       (when (string-prefix? (symbol->string env) "e")
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
       (define env (gensym '_env))
       (define arg 'lst)
       (define newarg (gensym arg))

       ;  (define make-generic-apply-prim-body
       ;    `(let ([,k (prim car ,arg)])
       ;       (let ([,newarg (prim cdr ,arg)])
       ;         (let ((,x (apply-prim ,ptr ,newarg)))
       ;           (clo-app ,k ,x)))))

       (define func_name (format "void ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "std::cout<<\"In ~a_fptr\"<<std::endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))
       ;  (append-line filepath "call_counter++;")

       (append-line filepath "//reading number of args")
       (append-line filepath "// This is the second type of the functions")
       ;  (append-line filepath (format "int numArgs = reinterpret_cast<int>(arg_buffer[0]);"))
       (append-line filepath (format "numArgs = reinterpret_cast<long>(arg_buffer[0]);"))

       (append-line filepath "//reading env")
       (append-line filepath (format "void* const ~a = arg_buffer[1];" (get-c-string env)))

       (append-line filepath "//decoding closure array")
       (append-line filepath (format "void** decode_clo_array = nullptr;"))

       ;  (append-line filepath (format "void* ~a = nullptr;" arg))

       (append-line filepath (format "if(is_cons(arg_buffer[2]))\n{"))
       (append-line filepath "//(apply e0 e0) case")
       (append-line filepath (format "void* const ~a = arg_buffer[2];" arg))
       (append-line filepath (format "void* const ~a = prim_car(lst);" k))
       (append-line filepath (format "void* const ~a = prim_cdr(lst);" newarg))
       (append-line filepath (format "void* const ~a = apply_prim_~a(~a);" x (get-c-string ptr) newarg))

       (append-line filepath (format "arg_buffer[1] = ~a;" k))
       (append-line filepath (format "arg_buffer[2] = ~a;" x))
       (append-line filepath
                    (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))
       (append-line
        filepath
        (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);" k))

       (append-line filepath "\n// calling next procedure using a function pointer")
       (append-line filepath "function_ptr();")


       (append-line filepath "}\nelse\n{")

       (append-line filepath (format "void* const ~a = arg_buffer[2];" k))
       (append-line filepath (format "void* const ~a = apply_prim_~a(arg_buffer);" x (get-c-string ptr)))

       (append-line filepath (format "arg_buffer[1] = ~a;" k))
       (append-line filepath (format "arg_buffer[2] = ~a;" x))
       (append-line filepath
                    (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" 2))
       (append-line
        filepath
        (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);" k))

       (append-line filepath "\n// calling next procedure using a function pointer")
       (append-line filepath "function_ptr();")

       (append-line filepath "}\n")
       (append-line filepath "}\n")
       ]
      ) ;end of match
    ;end of function definitions.
    )

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
                 (append-line filepath (format "~a = reinterpret_cast<void*>(encode_int(~a));" (cadr type) key))]
                [(equal? (car type) 'float)
                 (append-line filepath (format "~a = reinterpret_cast<void*>(encode_float(~a));" (cadr type) key))]
                [(equal? (car type) 'bool-true)
                 (append-line filepath (format "~a = encode_bool(true);" (cadr type)))]
                [(equal? (car type) 'bool-false)
                 (append-line filepath (format "~a = encode_bool(false);" (cadr type)))]
                [else (error "Error occured could not find value in -> find-global-constants!")]
                )
              ))

  (append-line filepath "\n")

  (append-line filepath "//making a call to the brouhaha main function to kick off our C++ emission.")
  ; (append-line filepath "call_counter++;")
  (append-line filepath "void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));")

  (append-line filepath "arg_buffer[0] = 0;")
  (append-line filepath "arg_buffer[2] = fhalt_clo;")

  (append-line filepath "\n// calling next procedure using a function pointer")
  (append-line filepath "decoded_brouhaha_main();")

  (append-line filepath "}\n")
  ;end of main function.
  'cpp-emission-done!)
