#lang racket

(require "utils.rkt")

(provide emit-cpp)

(define (emit-cpp proc_list filepath [env (hash)])
  ; defining cpp header files
  ; replace the old cpp file, if exists
  (append-line filepath "#include<stdio.h>" 'replace)
  (append-line filepath "#include<string.h>" )
  (append-line filepath "#include \"gmp_func.h\"" )
  (append-line filepath (string-append "#include " "\"../../prelude.h\""))
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
          (define mpzVar (gensym 'mpzvar))

          (append-line filepath (format "mpz_t* ~a = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));" mpzVar))
          (append-line filepath (format "mpz_init_set_str(*~a, \"~a\", 10);;" mpzVar val))
          (append-line filepath (format "void* ~a = reinterpret_cast<void *>(encode_mpz(~a));" (get-c-string lhs) mpzVar))
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
       (define cloName (gensym 'clo))

       ;  (append-line filepath (format "auto ~a = reinterpret_cast<void (*)()>(&~a_fptr);" ptrName ptr))


       (append-line filepath (format "void** ~a = alloc_clo(~a_fptr, ~a);" cloName ptr arglength))

       (when (> (+ arglength 1) 1) (append-line filepath "\n//setting env list"))

       ; void** raw_clo = alloc_clo(f);
       ; raw_clo[1] = y;
       ; raw_clo[2] = z;  // one line per env variable
       ; void* clo = encode_clo(raw_clo);

       (for ([i (in-range 1 (+ arglength 1))]
             [item args])

         (append-line filepath (format "~a[~a] = ~a;" cloName i (get-c-string item))))

       (append-line filepath (format "void* ~a = encode_clo(~a);" (get-c-string lhs) cloName))

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
       (append-line filepath "//not do dummy comment")
       (append-line filepath (format "void* ~a = (decode_clo(~a))[~a];" (get-c-string lhs) env idx))

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
       ;  (append-line filepath "arg_buffer.clear();")

       (append-line filepath (format "arg_buffer[1]=reinterpret_cast<void*>(~a);" (get-c-string  func)))
       (for ([i (in-range 1 (+ (length args) 1))]
             [item args])
         (append-line filepath (format "arg_buffer[~a] = ~a;" (+ i 1) (get-c-string item))))
       (append-line filepath (format "arg_buffer[0] = reinterpret_cast<void*>(~a);" (+ (length args) 1)))

       (append-line
        filepath
        (format "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(~a))[0]);" (get-c-string func)))

       (append-line filepath "//assign buffer size to numArgs")
       ;  (append-line filepath "arg_num = arg_buffer.size();")
       (append-line filepath "// call next proc using a function pointer")
       (append-line filepath "function_ptr();")
       (append-line filepath "return nullptr;")
       ]
      ))

  (define (convert-procs proc)
    ; (pretty-print proc)
    (match proc
      [`(proc (,ptr ,env ,args ...) ,body)
       (define func_name (format "void* ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "cout<<\"In ~a\"<<endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))

       (append-line filepath "//reading number of args")
       ;  (append-line filepath (format "int numArgs = reinterpret_cast<int>(arg_buffer[0]);"))
       (append-line filepath (format "numArgs = reinterpret_cast<long>(arg_buffer[0]);"))
       (append-line filepath "//reading env")
       (append-line filepath (format "void* ~a = arg_buffer[1];" (get-c-string env)))


       (append-line filepath "//reading env and args")
       (for ([i (in-range 2 (+ (length args) 2))]
             [item args])

         (append-line
          filepath
          (format "void* ~a = arg_buffer[~a];" (get-c-string item) i)))

       (append-line filepath "//Dummy comment")
       (convert-proc-body (get-c-string env) args body)

       (append-line filepath "}\n")

       (append-line filepath (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n" (get-c-string ptr) (get-c-string ptr) 0))

       ]
      [`(proc (,ptr ,env . ,arg) ,body)
       (define func_name (format "void* ~a_fptr() // ~a ~a" (get-c-string ptr) ptr "\n{"))

       ; start of function definitions
       (append-line filepath func_name)

       ; uncomment these two lines for debugging!
       ;  (append-line filepath (format "cout<<\"In ~a\"<<endl;" (get-c-string ptr)))
       ;  (append-line filepath (format "print_arg_buffer();\n"))

       (append-line filepath "//reading number of args")
       (append-line filepath "// This is the second type of the functions")
       ;  (append-line filepath (format "int numArgs = reinterpret_cast<int>(arg_buffer[0]);"))
       (append-line filepath (format "numArgs = reinterpret_cast<long>(arg_buffer[0]);"))

       (append-line filepath "//reading env")
       (append-line filepath (format "void* ~a = arg_buffer[1];" (get-c-string env)))


       (append-line filepath "//building cons cell\n")

       (append-line filepath (format "void* ~a = encode_null();" arg))
       (append-line filepath (format "for(int i = numArgs; i >= 2; i--)\n{"))
       (append-line filepath (format "~a = prim_cons(arg_buffer[i], ~a);" arg arg))
       (append-line filepath (format "\n}\n"))

       (convert-proc-body (get-c-string env) arg body)
       (append-line filepath "}\n")
       (append-line filepath (format "void* ~a = encode_clo(alloc_clo(~a_fptr, ~a));\n" (get-c-string ptr) (get-c-string ptr) 0))
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


  (append-line filepath "mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);");
  

  (append-line filepath "//making a call to the brouhaha main function to kick off our c++ emission.");
  (append-line filepath "void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));")

  (append-line filepath "auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);")
  ; (append-line filepath "arg_num = arg_buffer.size();")
  (append-line filepath "arg_buffer[0]=0;")
  (append-line filepath "arg_buffer[2]=fhalt_clo;")

  (append-line filepath "function_ptr();")

  ; (append-line filepath "arg_buffer.clear();")
  (append-line filepath "return 0;")

  (append-line filepath "}\n")
  ;end of main function.
  'cpp-emission-done!)
