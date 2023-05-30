#lang racket

(require "utils.rkt")

(provide emit-cpp)

(define (emit-cpp proc_list filepath)
  ; defining header files
  ; starting writting the program by replacing the old file, if exists
  (append-line filepath "#include<stdio.h>" 'replace)
  (append-line filepath "#include<string.h>" )
  (append-line filepath (string-append "#include " "\"../../header.h\""))
  (append-line filepath "using namespace std;\n" )

  (define (get-c-string s) (string->symbol (convert-id-to-c s)))

  (define (convert-proc-body proc_env proc_arg body)
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

       (append-line filepath (format "auto ~a = reinterpret_cast<void (*)(void *, void *)>(&~a);" ptrName ptr))

       (append-line
        filepath
        (format "~a = allocate_env_space(encode_int((s32)~a));" proc_env arglength))

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
       (define procPtr (gensym 'cloPtr))
       (define procEnv (gensym 'procEnv))

       (append-line filepath (format "void* ~a = get_closure_ptr(~a);" procPtr (get-c-string func)))
       (append-line filepath (format "void* ~a = get_env(~a);" procEnv (get-c-string func)))

       (append-line filepath "\n//calling next proc using a function pointer")
       (append-line filepath (format "auto function_ptr = reinterpret_cast<void (*)(~a)>(~a);" (string-join (map (λ (item) "void*") (append `(,procEnv) args)) ", ") procPtr))
       (append-line filepath (format "function_ptr(~a);" (string-join
                                                          (map (λ (item) (format "~a" item)) (append `(,procEnv) args))
                                                          ", ")))
       ]
      ))

  (define (convert-procs proc)
    ; (pretty-print proc)
    (match proc
      [`(proc (,ptr ,env ,args ...) ,body)
       (define func_name (format "void* ~a(~a) // ~a ~a" (get-c-string ptr)
                                 (string-join
                                  (map (λ (item) (format "void* ~a" item)) (append `(,env) args))
                                  ", ") ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ; (append-line filepath (format "cout<<\"In ~a\";" ptr))
       ; (append-line filepath (format "print_val(~a);\n" arg))

       (convert-proc-body env args body)
       ]
      [`(proc (,ptr ,env . ,arg) ,body)
       (define func_name (format "void* ~a(void* ~a, void* ~a) // ~a\n{" (get-c-string ptr) env arg ptr))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ; (append-line filepath (format "cout<<\"In ~a\";" ptr))
       ; (append-line filepath (format "print_val(~a);\n" arg))

       (convert-proc-body env arg body)])

    (append-line filepath "}\n")

    ;end of function definitions.
    )

  ; pulling out brouhaha main function
  (define brouhaha_main_proc (last proc_list))

  (map convert-procs proc_list)

  ; writing the main function.
  (append-line filepath "int main(int argc, char **argv)\n{")

  ; (append-line filepath "halt = make_closure(reinterpret_cast<u64 *>(&fhalt), 0);");
  (append-line filepath "//making a call to the brouhaha main function to kick off our c++ emission.");
  (append-line filepath (format "brouhaha_main(~a, ~a);" 0 0));
  ; (convert-proc-body main_env main_arg main_body)

  (append-line filepath "}\n")
  ;end of main function.

  'cpp-emission-done!)
