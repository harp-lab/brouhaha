#lang racket

(require "utils.rkt")

(provide emit-cpp)

(define (emit-cpp proc_list filepath [env (hash)])
  ; defining cpp header files
  ; replace the old cpp file, if exists
  (append-line filepath "#include<stdio.h>" 'replace)
  (append-line filepath "#include<string.h>" )
  (append-line filepath (string-append "#include " "\"../../header.h\""))
  (append-line filepath "using namespace std;\n" )

  (define top-lvl-procs
    (let loop ([env+ env] [prog+ proc_list])
      (match prog+
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ (get-c-string name) (get-c-string name)) (cdr prog+))]
        [`() env+])))


  (define (convert-proc-body proc_env proc_arg body [top_level_procs top-lvl-procs])
    ;(displayln (~a "cpb: " body))
    (define (true? x) (if x #t #f))

    (match body
      [`(let ([,lhs ',val]) ,letbody)

       (match val
         [(? number? )
          (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_int((s32)~a));" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? boolean? )
          (cond [(true? val)
                 (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 1))
                 (convert-proc-body proc_env proc_arg letbody)]
                [else
                 (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 0))
                 (convert-proc-body proc_env proc_arg letbody)
                 ])]

         [(? null? )
          (append-line filepath (format "void* ~a = encode_null();" (get-c-string lhs)))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? symbol?)
          (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? string? )
          (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [_ (raise (format "Unknown datatype! ~a" val))]
         )
       ]

      [`(let ([,lhs (make-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (length args))

       ; new-closure
       (append-line filepath "\n//creating new closure instance")

       (define ptrName (gensym 'ptr))

       (append-line filepath (format "auto ~a = reinterpret_cast<void (*)()>(&~a);" ptrName ptr))

       (append-line filepath (format "~a = allocate_env_space(encode_int((s32)~a));" proc_env arglength))

       (append-line
        filepath
        (format "void* ~a = make_closure(reinterpret_cast<void *>(~a), ~a);" (get-c-string lhs) ptrName proc_env))

       (when (> (+ arglength 1) 1) (append-line filepath "\n//setting env list"))

       (for ([i (in-range 1 (+ arglength 1))]
             [item args])

         (append-line
          filepath
          (format "set_env(~a, encode_int((s32)~a), ~a);" proc_env i (get-c-string item))))

       ;  (when (> (+ arglength 1) 1) (append-line filepath "\n"))
       (append-line filepath "\n")

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       (define line (format "void* ~a = prim_~a(~a);" (get-c-string lhs) (get-c-string op)
                            (string-join
                             (map (λ (item) (format "~a" (get-c-string item))) args)
                             ", ")))

       (append-line filepath line)

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (apply-prim ,op ,arg)]) ,letbody)
       (define line (format "void* ~a = apply_prim_~a(~a);" (get-c-string lhs) (get-c-string op) (get-c-string arg)))

       (append-line filepath line)

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (env-ref ,env ,idx)]) ,letbody)
       (append-line filepath (format "void* ~a = get_env_value(~a, encode_int((s32)~a));" (get-c-string lhs) env idx))

       (convert-proc-body proc_env proc_arg letbody)]

      [`(if ,grd ,texp ,fexp)
       (append-line filepath "\n//if-clause")
       (define guard (gensym 'if_guard))

       (append-line filepath (format "u64 ~a = reinterpret_cast<u64>(is_true(~a));" guard grd))
       (append-line filepath (format "if(~a == 1)\n{" guard))
       (convert-proc-body proc_env proc_arg texp)
       (append-line filepath "}\nelse\n{")
       (convert-proc-body proc_env proc_arg fexp)
       (append-line filepath "}\n")
       ]

      [`(clo-app ,func ,args ...)
       (append-line filepath "\n//clo-app")
       (append-line filepath "arg_buffer.clear();")

       (append-line filepath (format "arg_buffer.push_back(reinterpret_cast<void *>(~a));" proc_env))

       (for ([item args])
         (append-line
          filepath
          (format "arg_buffer.push_back(reinterpret_cast<void *>(~a));" item)))

       (if (hash-has-key? top_level_procs (get-c-string func))
           (append-line
            filepath
            (format "auto function_ptr = reinterpret_cast<void (*)()>(~a);" (get-c-string func)))
           (append-line
            filepath
            (format "auto function_ptr = reinterpret_cast<void (*)()>(get_closure_ptr(~a));" (get-c-string func))))

       (append-line filepath "//assign buffer size to arg_num")
       (append-line filepath "arg_num = arg_buffer.size();")
       (append-line filepath "// call next proc using a function pointer")
       (append-line filepath "function_ptr();")
       (append-line filepath "return nullptr;")
       ]
      ))

  (define (convert-procs proc)
    ; (pretty-print proc)
    (match proc
      [`(proc (,ptr ,env ,args ...) ,body)
       (define func_name (format "void* ~a() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "cout<<\"In ~a\"<<endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))

       (append-line filepath "//reading env")
       (append-line filepath (format "void* ~a = arg_buffer[~a];" (get-c-string env) 0))

       (append-line filepath "//reading other params")
       (for ([i (in-range 1 (+ (length args) 1))]
             [item args])

         (append-line
          filepath
          (format "void* ~a = arg_buffer[~a];" (get-c-string item) i)))

       (convert-proc-body (get-c-string env) args body)
       (append-line filepath "}\n")

       ]
      [`(proc (,ptr ,env . ,arg) ,body)
       (define func_name (format "void* ~a() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "cout<<\"In ~a\"<<endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))


       (append-line filepath "//reading env")
       (append-line filepath (format "void* ~a = arg_buffer[~a];" (get-c-string env) 0))


       (append-line filepath "//building cons cell\n")
       
       (append-line filepath (format "void* ~a = encode_null();" arg))
       (append-line filepath (format "for(int i = arg_num - 1; i >=1; --i)\n{"))
       (append-line filepath (format "~a = prim_cons(arg_buffer[i], ~a);" arg arg))
       (append-line filepath (format "\n}\n"))

       (convert-proc-body (get-c-string env) arg body)
       (append-line filepath "}\n")

       ])
    ;end of function definitions.
    )

  ; pulling out brouhaha main function
  (define brouhaha_main_proc (last proc_list))

  (map convert-procs proc_list)

  ; writing the main function.
  (append-line filepath "int main(int argc, char **argv)\n{")

  (define tempPtr (gensym 'ptr))
  (define tempEnv (gensym '_))
  (define tempClo (gensym 'clo))

  (append-line filepath (format "auto ~a = reinterpret_cast<void (*)()>(&fhalt);" tempPtr))
  (append-line filepath (format "void* ~a = allocate_env_space(encode_int((s32)0));" tempEnv))
  (append-line filepath (format "void* ~a = make_closure(reinterpret_cast<void *>(~a), ~a);" tempClo tempPtr tempEnv))

  (append-line filepath (format "arg_buffer.push_back(reinterpret_cast<void *>(0));"));
  (append-line filepath (format "arg_buffer.push_back(reinterpret_cast<void *>(~a));" tempClo));

  (append-line filepath "//making a call to the brouhaha main function to kick off our c++ emission.");
  (append-line filepath "auto function_ptr = reinterpret_cast<void (*)()>(brouhaha_main);")
  (append-line filepath "arg_num = arg_buffer.size();")
  (append-line filepath "function_ptr();")
  (append-line filepath "arg_buffer.clear();")
  (append-line filepath "return 0;")

  (append-line filepath "}\n")
  ;end of main function.
  'cpp-emission-done!)


; (define prog '((proc
;                    (+ _4921 . lst)
;                    (let ((kont4916 (prim car lst)))
;                      (let ((lst (prim cdr lst)))
;                        (let ((x4912 (apply-prim + lst))) (clo-app kont4916 x4912)))))
;                   (proc
;                    (call _4924 kont4918)
;                    (let ((a4913 '1)) (let ((a4914 '2)) (clo-app + kont4918 a4913 a4914))))
;                   (proc
;                    (lam4925 env4926 x4915)
;                    (let ((kont4919 (env-ref env4926 1))) (clo-app kont4919 x4915)))
;                   (proc
;                    (brouhaha_main _4927 kont4919)
;                    (let ((f4920 (make-closure lam4925 kont4919))) (clo-app call f4920))))
;                 )
;(emit-cpp prog "")
