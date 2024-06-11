#lang racket

(provide compile
         desugar
         alphatize
         anf-convert
         cps-convert
         closure-convert
         read-program
         read-all
         compile-to-alphatize
         compile-to-finish)

(require "slog-utils.rkt"
         "utils.rkt"
         "interp-closure.rkt"
         "interp-cps.rkt"
         "interp-anf.rkt")

(require "coverage/coverage.rkt")

(define (compile-to-alphatize program)
  (let* ([pr0 (desugar program)] [pr1 (alphatize pr0)]) (list pr0 pr1)))

(define (compile-to-finish program fact-file pr1 slog-flag ast-root)
  ; (define (compile-to-finish program)
  (let* (
         ;  [pr6 (add-tags pr1)]
         [pr2 (optimize-prog (anf-convert pr1 slog-flag ast-root) slog-flag ast-root)]
         [pr3 (cps-convert pr2)]
         [pr4 (alphatize pr3)]
         [pr5 (closure-convert pr4)]
         ;  [amount (if slog-flag
         ;              (count-params pr5 fact-file)
         ;              'no-slog)
         ;          ]
         )

    (list pr2 pr3 pr4 pr5)))

; (require print-debug/print-dbg)
(define (read-program filename)
  (with-input-from-file filename
    (lambda ()
      (let ([bytes (read-bytes (file-size filename))])
        (with-input-from-string (bytes->string/utf-8 bytes)
          (lambda () (read-all (current-input-port))))))))

(define (read-all in)
  (let loop ([exprs '()])
    (let ([next (read in)]) (if (eof-object? next) (reverse exprs) (loop (cons next exprs))))))

(define (desugar program)
  (define (unroll-args args body)
    (match args
      [(? symbol? x) (coverage `(let ([,x vargs]) ,body))]
      [`(,(? symbol? x) . ,rst) (coverage `(let ([,x (car vargs)] [vargs (cdr vargs)]) ,(unroll-args rst body)))]
      [_ body]))
  (define (desugar-exp exp)
    (match exp
      [(? string? y) (coverage `',y)]
      [(? integer? y) (coverage `',y)]
      [(? flonum? y) (coverage `',y)]
      [(? symbol? x) (coverage x)]
      [(? boolean? x) (coverage `',x)]
      [`(let ([,xs ,es] ...) ,body)
       (coverage `(let ,(map (lambda (x e) `[,x ,(desugar-exp e)]) xs es) ,(desugar-exp body)))]
      [`(let* () ,ebody) (coverage (desugar-exp ebody))]
      [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)
       (coverage (desugar-exp (coverage `(let ([,lhs ,rhs]) (let* ,e-pairs ,ebody)))))]

      [`(lambda () ,body) `(lambda ,(gensym 'dum_lam) ,(desugar-exp body))]
      [`(lambda (,xs ...) ,body) (coverage `(lambda ,xs ,(desugar-exp body)))]
      [`(lambda ,(? symbol? x) ,body) (coverage `(lambda ,x ,(desugar-exp body)))]
      [`(lambda ,args ,body) (coverage (desugar-exp (coverage `(lambda vargs ,(unroll-args args body)))))]
      [`(and) (coverage `',#t)]
      [`(and ,e0) (coverage (desugar-exp e0))]
      [`(and ,e0 ,eas ...) (coverage `(if ,(desugar-exp e0) ,(desugar-exp `(and ,@eas)) '#f))]
      [`(or) (coverage `',#f)]
      [`(or ,e0) (coverage (desugar-exp e0))]
      [`(or ,e0 ,eas ...) (coverage `(if ,(desugar-exp e0) ,(desugar-exp e0) ,(desugar-exp `(or ,@eas))))]
      [`(not ,e0) (coverage `(if ,(desugar-exp e0) '#f '#t))]
      [`(if ,guard ,tr ,fl) (coverage `(if ,(desugar-exp guard) ,(desugar-exp tr) ,(desugar-exp fl)))]

      [`(cond) `'void]
      [`(cond [else ,e0]) (desugar-exp e0)]
      [`(cond [,exp1 => (lambda (l) ,exp2)]) (desugar-exp `((lambda (l) ,exp2) ,exp1))]
      [`(cond [,exp1 => (lambda l ,exp2)]) (desugar-exp `((lambda l ,exp2) ,exp1))]
      [`(cond [,e0 ,e1] ,es ...)
       (coverage `(if ,(desugar-exp e0)
                      ,(desugar-exp e1)
                      ,(desugar-exp `(cond ,@es))))]
      [`(cond [,exp]) (desugar-exp exp)]

      [`(call/cc ,e0)
       `(call/cc ,(desugar-exp e0))]

      [`(apply ,e0 ,e1) (coverage `(apply ,(desugar-exp e0) ,(desugar-exp e1)))]
      [`(,es ...) (coverage (map desugar-exp es))]))
  (define (desugar-define def)
    (match def
      [`(define (,fname ,params ...) ,body)
       (coverage `(define (,fname ,@params)
                    ,(desugar-exp body)))]
      [`(define (,fname . ,(? symbol? params)) ,body)
       (coverage `(define (,fname . ,params)
                    ,(desugar-exp body)))]
      [`(define (,fname . ,params) ,body)
       (coverage `(define (,fname . vargs)
                    ,(desugar-exp (unroll-args params body))))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))
  (map desugar-define program))

(define (alphatize program)
  ; (pretty-print program)
  (define ((alpha-rename env) e)
    (define (rename x)
      (if (hash-has-key? env x) (gensym x) x))

    (match e
      [`(let ([,xs ,es] ...) ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(let ,(map list xs+ (map (alpha-rename env) es)) ,((alpha-rename env+) e0)))]

      [`(lambda (,xs ...) ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(lambda ,xs+ ,((alpha-rename env+) e0)))]

      [`(lambda ,x ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(lambda ,x+ ,((alpha-rename env+) e0)))]

      [`(kont (,x) ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(kont (,x+) ,((alpha-rename env+) e0)))]

      [`(prim ,op ,es ...) (coverage `(prim ,op ,@(map (alpha-rename env) es)))]
      [`(apply-prim ,op ,e0) (coverage `(apply-prim ,op ,((alpha-rename env) e0)))]
      [`(if ,e0 ,e1 ,e2)
       (coverage `(if ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2)))]

      [`(call/cc ,e0) `(call/cc ,e0)]

      [`(apply ,e0 ,e1) (coverage `(apply ,((alpha-rename env) e0) ,((alpha-rename env) e1)))]
      ; [(? symbol? x) (coverage (hash-ref env x (lambda () x)))]
      [(? symbol? x) (coverage (hash-ref env x))]
      [`',dat (coverage `',dat)]
      [`(kont-app ,es ...) (coverage `(kont-app ,@(map (alpha-rename env) es)))]
      [`(,es ...) (coverage (map (alpha-rename env) es))]))

  (define ((rename-define env) def)
    (match def
      [`(define (,fname ,params ...) ,body)
       (coverage `(define (,fname ,@params)
                    ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body)))]

      [`(define (,fname . ,(? symbol? params)) ,body)
       (coverage `(define (,fname . ,params)
                    ,((alpha-rename (hash-set env params params)) body)))]

      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))

  ;;; a hash to store function names mapped to themselves like '#hash((+ . +) (- . -))
  (define top-env
    (foldl (lambda (def env)
             (match def
               [`(define (,fname . ,params) ,body)
                ; will see later, if this causes problems
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]

               [`(define-prim ,fname ,params-count ...)
                ; will see later, if this causes problems
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]
               ))
           (hash)
           program))

  (map (rename-define top-env) program))

; Add tags within the program to keep track
(define (add-tags program)
  ; double check innner one
  (define (add-prov-exp exp)
    (match exp
      ; [(or (? symbol? x) (? number? x) (? boolean? x) (? string? x)) x]
      [`(let ([,xs ,es] ...) ,body)
       (coverage `(let (prov ,exp)
                    ,(map (lambda (x e) `[,x ,(add-prov-exp e)]) xs es)
                    ,(add-prov-exp body)))]
      [`(lambda (,xs ...) ,body)
       (coverage `(lambda (prov ,exp)
                    ,xs
                    ,(add-prov-exp body)))]
      ;  `(lambda (prov ,exp) ,@(map add-prov-exp xs) ,(add-prov-exp body))]
      [`(lambda ,x ,body)
       (coverage `(lambda (prov ,exp)
                    ,x
                    ,(add-prov-exp body)))]
      ; `(lambda ,(prov ,exp) ,(add-prov-exp x) ,(add-prov-exp body))]
      [`(prim ,op ,es ...) (coverage `(prim (prov ,exp) ,op ,@(map add-prov-exp es)))]
      [`(apply-prim ,op ,e0) (coverage `(apply-prim (prov ,exp) ,op ,(add-prov-exp e0)))]
      [`(if ,guard ,tb ,fb)
       (coverage `(if (prov ,exp) ,(add-prov-exp guard) ,(add-prov-exp tb) ,(add-prov-exp fb)))]
      [`(apply ,e0 ,e1) (coverage `(apply (prov ,exp) ,(add-prov-exp e0) ,(add-prov-exp e1)))]
      [`',dat (coverage `',dat)]

      [(? symbol? x) (coverage x)]
      ; this below should not be here
      [(? string? y) (coverage `',y)]
      [(? integer? y) (coverage `',y)]
      [(? flonum? y) (coverage `',y)]
      [(? boolean? x) (coverage `',x)]
      [`(,es ...) (coverage `(app (prov ,exp) ,@(map add-prov-exp es)))]
      [_ (pretty-print (list "Exp: " exp))]))
  (define (add-prov-define def)
    ; (pretty-print (list "Add-prov-define " def))
    (match def
      #;[`(define (prov ,prov-data)
            ,rst)
         def]
      [`(define ,params ,body)
       (coverage `(define (prov ,def)
                    ,params
                    ,(add-prov-exp body)))]
      [`(define-prim ,fname ,params-count ...)
       (coverage `(define-prim ,fname ,@params-count))]
      [_ (pretty-print (list "Looks like you forgot to write a catcher for this buddy: " def))]))
  (map add-prov-define program))

; Converts to ANF; adapted from Flanagan et al.
(define (anf-convert program slog-flag ast-root)
  (define proc-name-shadowed?
    (let loop ([env+ (hash)] [prog+ program])
      (match prog+
        [`((define (,name . ,_) ,_) ,_ ...)
         (loop
          (if (hash-has-key? env+ name)
              (hash-set env+ name `(shadowed ,@(cdr (hash-ref env+ name))))
              (hash-set env+ name `(not-shadowed dummyinfo)))
          (cdr prog+))]
        [`((define-prim ,name ,params ...) ,_ ...)
         (loop
          (if (hash-has-key? env+ name)
              (hash-set env+ name `(shadowed ,params))
              (hash-set env+ name `(not-shadowed-dp ,params)))
          (cdr prog+))]
        [`() env+])))

  (define (normalize-anf e)
    (define e+ (normalize e (lambda (x) x)))
    (match e+
      [(? symbol? x) (coverage x)]
      [`(let ([,x ,rhs]) ,e0) (coverage e+)]
      [_
       (define x+ (gensym 'xy))
       (coverage `(let ([,x+ ,e+]) ,x+))]))

  (define (normalize e k)
    (define (normalize-ae e k)
      (normalize e
                 (lambda (anf)
                   (match anf
                     [(? symbol? x) (coverage (k x))]
                     [_ (let ([x (gensym 'id_)]) (coverage `(let ([,x ,anf]) ,(k x))))]))))

    (define (normalize-aes es k)
      (if (null? es)
          (k '())
          (normalize-ae (car es) (lambda (x) (normalize-aes (cdr es) (lambda (xs) (k `(,x . ,xs))))))))

    (match e
      [`',dat (coverage (k `',dat))]
      [(? symbol? x) (coverage (k x))]
      [`(lambda ,xs ,e0)
       (coverage (k `(lambda
                         ,xs
                       ,(normalize e0 (lambda (x) x)))))]
      [`(let () ,e0)
       (coverage (normalize e0 k))]
      [`(let ([,x ,rhs] . ,rest) ,e0)
       (coverage `(let
                      ([,x ,(normalize rhs (lambda (x) x))])
                    ,(normalize `(let ,rest ,e0) k)))]

      [`(if ,ec ,et ,ef)
       (coverage (normalize-ae ec (lambda (xc) (k `(if ,xc ,(normalize-anf et) ,(normalize-anf ef))))))]
      [`(prim ,op ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(prim ,op . ,xs)))))]
      [`(apply-prim ,op ,e0) (coverage (normalize-ae e0 (lambda (x) (k `(apply-prim ,op ,x)))))]

      [`(call/cc ,e0)
       (normalize (normalize-anf e0)
                  (lambda (ae)
                    (k `(call/cc ,ae))))]

      [`(apply ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(apply . ,xs)))))]
      [`(,f ,es ...)
       ;;;;inlinable or not
       (cond
         [slog-flag
          ; (displayln `(,f ,@es))
          ; (displayln (callable-define-prim-with-slog? proc-name-shadowed? f (length es) ast-root))

          ; (when (is-combinator? f es)
          ;   (pretty-print (lambda-to-let `(,f ,@es))))

          ; (displayln "--anf-----")

          (match-define `(,fnc ,is_define_prim ,is_callable ,arg_count)
            (callable-define-prim-with-slog? proc-name-shadowed? f (length es) ast-root))

          (if (and is_define_prim is_callable)
              (normalize-aes `(,fnc ,@es) k)
              (normalize-aes `(,f ,@es) k))
          ]
         [else
          ; we can perform optimization without slog as well
          ; will try that later!
          (normalize-aes `(,f ,@es) k)])
       ]
      ))

  (define (anf-convert-define def)
    (match def
      [`(define ,sig ,body)
       (coverage `(define
                    ,sig
                    ,(normalize-anf body)))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))
  (map anf-convert-define program))


(define (optimize-prog program slog-flag ast-root)
  (define proc-name-shadowed?
    (let loop ([env+ (hash)] [prog+ program])
      (match prog+
        [`((define (,name . ,_) ,_) ,_ ...)
         (loop
          (if (hash-has-key? env+ name)
              (hash-set env+ name `(shadowed ,@(cdr (hash-ref env+ name))))
              (hash-set env+ name `(not-shadowed dummyinfo)))
          (cdr prog+))]
        [`((define-prim ,name ,params ...) ,_ ...)
         (loop
          (if (hash-has-key? env+ name)
              (hash-set env+ name `(shadowed ,params))
              (hash-set env+ name `(not-shadowed-dp ,params)))
          (cdr prog+))]
        [`() env+])))

  (define (tag-body e)
    ; (pretty-print proc-name-shadowed?)
    (match e
      [(? symbol? x)  x]
      [`',dat `',dat]

      [`(let ([,x (lambda ,xs ,elam)]) ,e0)
       `(let ([,x ,`(lambda ,xs ,(tag-body elam))]) ,(tag-body e0))]

      [`(let ([,x ',dat]) ,e0)  `(let ([,x ',dat]) ,(tag-body e0))]

      [`(let ([,x ,(? symbol? rhs)]) ,e0) `(let ([,x ,rhs]) ,(tag-body e0))]

      [`(let ([,x (list)]) ,e0) `(let ([,x (prim list)]) ,(tag-body e0))]

      [`(let ([,x ,rhs]) ,e0)
       ;; inlinable or not
       (match-define `(,fnc ,is_define_prim ,is_callable ,arg_count)
         (callable-define-prim-with-slog? proc-name-shadowed? (car rhs) (length (cdr rhs)) ast-root))

       (if (and is_define_prim is_callable)
           `(let ([,x (prim ,@rhs)]) ,(tag-body e0))
           `(let ([,x ,(tag-body rhs)]) ,(tag-body e0)))]

      [`(if ,ae ,e0 ,e1)  `(if ,ae ,(tag-body e0) ,(tag-body e1))]

      [`(call/cc ,e0) `(call/cc ,e0)]

      [`(apply ,ae0 ,ae1) `(apply ,ae0 ,ae1)]

      [`(,fae ,args ...)
       ;; inlinable or not

       ;;; if slog-flag
       ;;;   callable-define-prim-with-slog?
       ;;;   callable-define-prim?
       ;;;   (displayln slog-flag)


       (match-define `(,fnc ,is_define_prim ,is_callable ,arg_count)
         (callable-define-prim-with-slog? proc-name-shadowed? fae (length args) ast-root))

       ;  (match-define `(,is_define_prim ,is_callable ,arg_count)
       ;    (callable-define-prim? proc-name-shadowed? fae (length args)))

       ;  (set! is_define_prim #f)
       ;  (set! is_callable #f)
       ;  (set! arg_count 0)
       ;  (displayln fae)
       ;  (displayln (- (length args) 1))
       ;  (displayln is_define_prim)
       ;  (displayln is_callable)
       ;  (displayln arg_count)
       ;  (displayln "---------")

       (define x (gensym 'x))

       (if (and is_define_prim is_callable)
           `(let ([,x (prim ,fae ,@args)]) ,x)
           `(,fae ,@(map tag-body args)))]))


  (define (init def)
    (match def
      [`(define (,fname ,params ...) ,body)
       `(define (,fname ,@params) ,(tag-body body))]
      [`(define (,fname . ,(? symbol? params)) ,body)
       `(define (,fname . ,params) ,(tag-body body))]
      [`(define-prim ,fname ,param-counts ...)
       `(define-prim ,fname ,@param-counts)]
      ))

  (map init program))


(define (cps-convert program)
  ; (displayln "cps")
  ; (pretty-print program)
  (define (T-ae ae)
    (match ae
      [`(lambda (,xs ...) ,e0)
       (define cx (gensym 'cont))
       (coverage `(lambda (,cx ,@xs) ,(T e0 cx)))]
      [`(lambda ,x ,e0)
       (define cx (gensym 'con_t_))
       (define x+ (gensym x))
       (coverage `(lambda ,x+ (let ([,cx (prim car ,x+)]) (let ([,x (prim cdr ,x+)]) ,(T e0 cx)))))]
      [(? symbol? x) (coverage x)]
      [(? number? x) (coverage x)]
      [`',dat (coverage `',dat)]))

  (define (T e cae)
    (if (not (symbol? cae))
        (let ([f (gensym 'f_lam_)])
          (T `(let ([,f ,cae]) ,e) f))
        (match e
          ; [(? string? x) `(,cae ,x)]
          [(? symbol? x) (coverage `(kont-app ,cae ,x))]

          [`(let ([,x (apply-prim ,op ,ae)]) ,e0)
           (coverage `(let ([,x (apply-prim ,op ,(T-ae ae))]) ,(T e0 cae)))]

          [`(let ([,x (prim ,op ,aes ...)]) ,e0)
           (coverage `(let ([,x (prim ,op ,@(map T-ae aes))]) ,(T e0 cae)))]

          [`(let ([,x (lambda ,xs ,elam)]) ,e0)
           (coverage `(let ([,x ,(T-ae `(lambda ,xs ,elam))]) ,(T e0 cae)))]

          [`(let ([,x (kont (,x1) ,elam)]) ,e0)
           ; kont is already produced on line 415
           (coverage `(let ([,x (kont (,x1) ,elam)]) ,(T e0 cae)))]

          [`(let ([,x ',dat]) ,e0)
           (coverage `(let ([,x ',dat]) ,(T e0 cae)))]

          [`(let ([,x ,rhs]) ,e0)
           (coverage (T rhs `(kont (,x) ,(T e0 cae))))]

          [`(if ,ae ,e0 ,e1)
           (coverage `(if ,(T-ae ae) ,(T e0 cae) ,(T e1 cae)))]

          [`(call/cc ,e0)
           (define t (gensym 'mknt))
           `(let ([,t (prim kont-to-lam ,cae)])
              (,(T-ae e0) ,cae ,t))]

          [`(apply ,ae0 ,ae1)
           (define xlst (gensym 'cps-lst))
           (coverage `(let ([,xlst (prim cons ,cae ,(T-ae ae1))]) (apply ,(T-ae ae0) ,xlst)))]

          [`(,fae ,args ...) `(,(T-ae fae) ,cae ,@(map T-ae args))]
          )))

  (define (cps-convert-def def)
    (match def
      [`(define (,fname ,params ...) ,body)
       (define k (gensym 'kont))
       (coverage `(define (,fname ,k ,@params) ,(T body k)))]
      [`(define (,fname . ,(? symbol? params)) ,body)
       (define k (gensym 'kont))
       (coverage `(define (,fname . ,params)
                    ,(T `(let ([,k (prim car ,params)]) (let ([,params (prim cdr ,params)]) ,body)) k)))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))

  (map cps-convert-def program))

(define (T-bottom-up e [symbol-set (set)])
  ; returns -> free variable set, an updated expression, procedure list
  (let loop ([e e])
    (match e
      ; [`(quote ,d) `(,(set) ,e ,(list))]
      [`(let ([,x ',dat]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove freevars x) (coverage `(let ([,x ',dat]) ,e0+)) procs+)]

      [`(let ([,x ,(? string? str)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove freevars x) (coverage `(let ([,x ,str]) ,e0+)) procs+)]

      [`(let ([,x (prim kont-to-lam ,xs ...)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove (set-union (list->set xs) freevars) x)
             (coverage `(let ([,x (prim kont-to-lam ,@xs)]) ,e0+))
             procs+)]

      [`(let ([,x (prim ,op ,xs ...)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove (set-union (list->set xs) freevars) x)
             (coverage `(let ([,x (prim ,op ,@xs)]) ,e0+))
             procs+)]



      [`(let ([,x (lambda (,xs ...) ,body)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs0+) (loop e0))
       (match-define `(,freelambda ,body+ ,procs1+) (loop body))
       (define fx (gensym 'lam))
       (define envx (gensym 'env))

       (define envvars (foldl (lambda (x fr) (set-remove fr x)) freelambda xs))
       (define envlist (set->list (set-subtract envvars symbol-set)))
       (define body++
         (cdr (foldl (lambda (x count+bdy)
                       (cons (+ 1 (car count+bdy))
                             `(let ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                     (cons 1 body+)
                     envlist)))
       (coverage (list (set-remove (set-union envvars freevars) x)
                       `(let ([,x (make-closure ,fx ,@envlist)]) ,e0+)
                       `(,@procs0+ ,@procs1+ (proc (,fx ,envx ,@xs) ,body++))))]

      [`(let ([,x (lambda ,arg ,body)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs0+) (loop e0))
       (match-define `(,freelambda ,body+ ,procs1+) (loop body))
       (define fx (gensym 'lam))
       (define envx (gensym 'env))
       (define envvars (set-remove freelambda arg))

       (define envlist (set->list (set-subtract envvars symbol-set)))

       (define body++
         (cdr (foldl (lambda (x count+bdy)
                       (cons (+ 1 (car count+bdy))
                             `(let ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                     (cons 1 body+)
                     envlist)))
       (coverage (list (set-remove (set-union envvars freevars) x)
                       `(let ([,x (make-closure ,fx ,@envlist)]) ,e0+)
                       `(,@procs0+ ,@procs1+ (proc (,fx ,envx . ,arg) ,body++))))]

      [`(let ([,x (kont (,arg) ,body)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs0+) (loop e0))
       (match-define `(,freelambda ,body+ ,procs1+) (loop body))
       (define fx (gensym 'lam))
       (define envx (gensym 'env))
       (define envvars (set-remove freelambda arg))

       (define envlist (set->list (set-subtract envvars symbol-set)))

       (define body++
         (cdr (foldl (lambda (x count+bdy)
                       (cons (+ 1 (car count+bdy))
                             `(let ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                     (cons 1 body+)
                     envlist)))
       (coverage (list (set-remove (set-union envvars freevars) x)
                       `(let ([,x (make-kont ,fx ,@envlist)]) ,e0+)
                       `(,@procs0+ ,@procs1+ (proc (,fx ,envx ,arg) ,body++))))]

      [`(if ,x ,e0 ,e1)
       (match-define `(,freevars0 ,e0+ ,procs0+) (loop e0))
       (match-define `(,freevars1 ,e1+ ,procs1+) (loop e1))
       (list (set-add (set-union freevars0 freevars1) x) (coverage `(if ,x ,e0+ ,e1+)) (append procs0+ procs1+))]

      [`(apply ,f ,x) (list (list->set `(,f ,x)) (coverage `(clo-apply ,f ,x)) '())]
      [`(kont-app ,f ,xs ...) (list (list->set `(,f ,@xs)) (coverage `(kont-clo-app ,f ,@xs)) '())]
      [`(,f ,xs ...) (list (list->set `(,f ,@xs)) (coverage `(clo-app ,f ,@xs)) '())]
      ))
  )

(define (closure-convert program)
  (define global-symbols-set
    (let loop ([item-set (set)] [prog+ program])
      (match prog+
        [`((define (,ptr . ,param) ,body) ,rest ...)
         (loop (set-add item-set ptr) rest)]
        [`((define-prim ,ptr ,params ...) ,_ ...)
         (loop (set-add item-set ptr) (cdr prog+))]
        [`() item-set]
        )))

  ; (pretty-print global-symbols-set)
  (foldl (lambda (def pr+)
           (match def
             [`(define (,fx . ,xs) ,body)
              (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body global-symbols-set))
              (define envx (gensym '_))
              (coverage `(,@pr+ ,@procs+ (proc (,fx ,envx . ,xs) ,body+)))]
             [`(define-prim ,fname ,param-counts ...)
              (coverage `(,@pr+ (define-prim ,fname ,@param-counts)))]
             ))
         '()
         program))




(define prog
  '((define-prim + 1 2 3)
    (define-prim - 1 2 3)
    (define-prim * 1 2 3)
    ; (define-prim / 1 2 3)
    (define-prim = 1 2 3)
    ; (define-prim > 1 2 3)
    ; (define-prim < 1 2 3)
    ; (define-prim <= 1 2 3)
    ; (define-prim >= 1 2 3)
    ; (define-prim modulo 2)
    ; (define-prim null? 1)
    ; (define-prim equal? 2)
    ; (define-prim eq? 2)
    ; (define-prim cons 2)
    ; (define-prim car 1)
    ; (define-prim cdr 1)
    ; (define-prim float->int 1)
    ; (define-prim int->float 1)
    ; (define-prim hash)
    ; (define-prim hash-ref 2)
    ; (define-prim hash-set 3)
    ; (define-prim hash-keys 1)
    ; (define-prim hash-has-key? 2)
    ; (define-prim hash-count 1)
    ; (define-prim set)
    ; (define-prim set->list 1)
    ; (define-prim list->set 1)
    ; (define-prim set-add 2)
    ; (define-prim set-member? 2)
    ; (define-prim set-remove 2)
    ; (define-prim set-count 1)
    ; (define-prim string? 1)
    ; (define-prim string-length 1)
    ; (define-prim string-ref 2)
    ; (define-prim substring 3)
    ; (define-prim string-append 2)
    ; (define-prim string->list 1)
    ; (define-prim exact-floor 1)
    ; (define-prim exact-ceiling 1)
    ; (define-prim exact-round 1)
    ; (define-prim abs 1)
    ; (define-prim max 1)
    ; (define-prim min 1)
    ; (define-prim expt 2)
    ; (define-prim sqrt 1)
    ; (define-prim remainder 2)
    ; (define-prim quotient 2)
    ; (define-prim random 1 2)
    ; (define-prim symbol? 1)
    ; (define-prim pair? 1)
    ; (define-prim positive? 1)
    ; (define-prim negative? 1)
    ; (define-prim list 1 2 3 4)
    ; (define (even? x) (equal? '0 (modulo x '2)))
    ; (define (odd? x) (equal? '1 (modulo x '2)))
    ; (define (list-ref lst n)
    ;   (if (= '0 n) (car lst) (list-ref (cdr lst) (- n '1))))
    ; (define (member item lst)
    ;   (if (if (null? item) (null? item) (null? lst))
    ;     '#f
    ;     (if (equal? item (car lst)) lst (member item (cdr lst)))))
    ; (define (member? x lst)
    ;   (if (null? lst) '#f (if (equal? (car lst) x) '#t (member? x (cdr lst)))))
    ; (define (length lst) (if (null? lst) '0 (+ '1 (length (cdr lst)))))
    ; (define (map proc lst)
    ;   (if (null? lst) (list) (cons (proc (car lst)) (map proc (cdr lst)))))
    ; (define (filter op lst)
    ;   (if (null? lst)
    ;     (list)
    ;     (if (op (car lst))
    ;       (cons (car lst) (filter op (cdr lst)))
    ;       (filter op (cdr lst)))))
    ; (define (drop lst n) (if (= n '0) lst (drop (cdr lst) (- n '1))))
    ; (define (foldl fun acc lst)
    ;   (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst))))
    ; (define (foldr fun acc lst)
    ;   (if (null? lst) acc (fun (car lst) (foldr fun acc (cdr lst)))))
    ; (define (reverse-helper lst lst2)
    ;   (if (null? lst) lst2 (reverse-helper (cdr lst) (cons (car lst) lst2))))
    ; (define (reverse lst) (reverse-helper lst (list)))
    ; (define (append1 lhs rhs)
    ;   (if (null? lhs) rhs (cons (car lhs) (append1 (cdr lhs) rhs))))
    ; (define (append . vargs)
    ;   (let ((xs (car vargs)) (vargs8729 (cdr vargs)))
    ;     (let ((x vargs8729))
    ;       (if (= '1 (length x))
    ;         (append1 xs (car x))
    ;         (foldr append1 (list) (append1 (list xs) x))))))
    ; (define (take-helper lst n lst2)
    ;   (if (= n '0)
    ;     (reverse lst2)
    ;     (take-helper (cdr lst) (- n '1) (cons (car lst) lst2))))
    ; (define (take lst n) (take-helper lst n (list)))
    ; (define (pt-in-poly2-helper xp yp x y c i j)
    ;   (if (< i '0)
    ;     c
    ;     (if (if (if (if (> (list-ref yp i) y)
    ;                   (> (list-ref yp i) y)
    ;                   (>= y (list-ref yp j)))
    ;               (if (> (list-ref yp j) y)
    ;                 (> (list-ref yp j) y)
    ;                 (>= y (list-ref yp i)))
    ;               '#f)
    ;           (if (if (> (list-ref yp i) y)
    ;                 (> (list-ref yp i) y)
    ;                 (>= y (list-ref yp j)))
    ;             (if (> (list-ref yp j) y)
    ;               (> (list-ref yp j) y)
    ;               (>= y (list-ref yp i)))
    ;             '#f)
    ;           (>=
    ;            x
    ;            (+
    ;             (list-ref xp i)
    ;             (/
    ;              (* (- (list-ref xp j) (list-ref xp i)) (- y (list-ref yp i)))
    ;              (- (list-ref yp j) (list-ref yp i))))))
    ;       (pt-in-poly2-helper xp yp x y c (- i '1) i)
    ;       (pt-in-poly2-helper xp yp x y (if c '#f '#t) (- i '1) i))))
    ; (define (pt-in-poly2 xp yp x y)
    ;   (pt-in-poly2-helper xp yp x y '#f (- (length xp) '1) '0))

    ; (define (call n)
    ;   (let ([f (lambda (x y . z) z)]) (f 1 2 3 4 5)))

    (define (call n)
      (let* ([id (lambda (x) x)]
             [var1 (id 5)]
             [var2 var1])
        var2))

    (define (brouhaha_main) (call 2))
    ))
; (pretty-print (desugar prog))
; (pretty-print (alphatize (desugar prog)))
; (pretty-print (anf-convert (alphatize (desugar prog)) #f (list)))
; (pretty-print (optimize-prog (anf-convert (alphatize (desugar prog)) #f (list)) #f (list)))
; (pretty-print (cps-convert (optimize-prog (anf-convert (anf-convert (alphatize (desugar prog)) #f (list)) #f (list)) #f (list))))
; (pretty-print (closure-convert (alphatize (cps-convert (anf-convert (optimize-prog (alphatize (desugar prog)) #f (list)) #f (list))))))
