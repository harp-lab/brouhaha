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
         "interp-closure.rkt"
         "interp-cps.rkt"
         "interp-anf.rkt")

(require "coverage/coverage.rkt")

(define (compile-to-alphatize program)
  (let* ([pr0 (desugar program)] [pr1 (alphatize pr0)]) (list pr0 pr1)))

(define (compile-to-finish program fact-file pr1 slog-flag)
  ; (define (compile-to-finish program)
  (let* (
         ;  [pr6 (add-tags pr1)]
         [pr2 (anf-convert pr1)]
         [pr3 (cps-convert (optimize-prog pr2))]
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

      [`(apply ,e0 ,e1) (coverage `(apply ,(desugar-exp e0) ,(desugar-exp e1)))]
      [`(,es ...) (coverage (map desugar-exp es))]))
  (define (desugar-define def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       (coverage `(define (,fname ,@params)
                    ,(desugar-exp body)))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (coverage `(define (,fname . ,params)
                    ,(desugar-exp body)))]
      [`(define (,fname . ,params)
          ,body)
       (coverage `(define (,fname . vargs)
                    ,(desugar-exp (unroll-args params body))))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))
  (map desugar-define program))

(define (alphatize program)
  (define ((alpha-rename env) e)
    (define (rename x)
      (if (hash-has-key? env x) (gensym x) x))
    ; (pretty-print (list "This is e: " e))
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
      [`(lambda ,x ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(lambda ,x+ ,((alpha-rename env+) e0)))]
      [`(prim ,op ,es ...) (coverage `(prim ,op ,@(map (alpha-rename env) es)))]
      [`(apply-prim ,op ,e0) (coverage `(apply-prim ,op ,((alpha-rename env) e0)))]
      [`(if ,e0 ,e1 ,e2)
       (coverage `(if ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2)))]
      [`(apply ,e0 ,e1) (coverage `(apply ,((alpha-rename env) e0) ,((alpha-rename env) e1)))]
      [(? symbol? x) (coverage (hash-ref env x))]
      [`',dat (coverage `',dat)]
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
(define (anf-convert program)
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
    [`(apply ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(apply . ,xs)))))]
    [`(,es ...) (normalize-aes es k)]
    ))


(define (optimize-prog program)
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
    (match e
      ; [(? string? x) `(,cae ,x)]
      [(? symbol? x)  x]

      ; [`(let ([,x (apply-prim ,op ,ae)]) ,e0)
      ;   `(let ([,x (apply-prim ,op ,ae)]) ,(tag-body e0))]

      ; [`(let ([,x (prim ,op ,aes ...)]) ,e0)
      ;   ; `(let ([,x (prim ,op ,@(map T-ae aes))]) ,(T e0 cae))]
      ;   `(let ([,x (prim ,op ,@(map T-ae aes))]) ,(T e0 cae))]

      [`(let ([,x (lambda ,xs ,elam)]) ,e0)
       `(let ([,x ,`(lambda ,xs ,elam)]) ,(tag-body e0))]

      [`(let ([,x ',dat]) ,e0)  `(let ([,x ',dat]) ,(tag-body e0))]
      ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
      ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,dat]) ,(T e0 cae))]
      ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]

      ; [`(let ([,x ,rhs]) ,e0)  (T rhs `(lambda (,x) ,(T e0 cae)))]
      [`(let ([,x ,(? symbol? rhs)]) ,e0) `(let ([,x ,rhs]) ,(tag-body e0))]
      [`(let ([,x (list)]) ,e0) `(let ([,x (list)]) ,(tag-body e0))]
      [`(let ([,x ,rhs]) ,e0)
       (match-define `(,is_define_prim ,is_callable ,arg_count)
         (callable-define-prim? proc-name-shadowed? (car rhs) (length (cdr rhs))))


      ;  (pretty-print `(let ([,x ,rhs]) e0))
      ;  (when (and is_define_prim is_callable)
      ;  (displayln (car rhs))
      ;  (displayln (cdr rhs))
      ;  (displayln (length (cdr rhs)))
      ;  (displayln is_define_prim)
      ;  (displayln is_callable)
      ;  (displayln arg_count))
      ;  (displayln "---------")

        (if (and is_define_prim is_callable)
          `(let ([,x (prim ,@rhs)]) ,(tag-body e0))
          `(let ([,x ,(tag-body rhs)]) ,(tag-body e0)))

       ]

      [`(if ,ae ,e0 ,e1)  `(if ,ae ,(tag-body e0) ,(tag-body e1))]
      [`(apply ,ae0 ,ae1)
       `(apply ,ae0 ,ae1)]

      [`(,fae ,args ...) `(,fae ,@(map tag-body args))]
      ))


  (define (cps-convert-def def)
    (match def
      [`(define (,fname ,params ...) ,body)
       `(define (,fname ,@params) ,(tag-body body))]
      [`(define (,fname . ,(? symbol? params)) ,body)
       `(define (,fname . ,params) ,(tag-body body))]
      [`(define-prim ,fname ,param-counts ...)
       `(define-prim ,fname ,@param-counts)]
      ))

  (map cps-convert-def program)
  )


(define (cps-convert program)
  (define (T-ae ae)
    (match ae
      [`(lambda (,xs ...) ,e0)
       (define cx (gensym 'cont))
       (coverage `(lambda (,cx ,@xs) ,(T e0 cx)))] ; checked
      [`(lambda ,x ,e0)
       (define cx (gensym 'cont))
       (define x+ (gensym x))
       (coverage `(lambda ,x+ (let ([,cx (prim car ,x+)]) (let ([,x (prim cdr ,x+)]) ,(T e0 cx)))))] ; checked
      [(? symbol? x) (coverage x)]
      [`',dat (coverage `',dat)]))

  (define (T e cae)
    (if (not (symbol? cae))
        (let ([f (gensym 'f)]) `(let ([,f ,cae]) ,(T e f)))
        ; (match (p-dbg e)
        (match e
          ; [(? string? x) `(,cae ,x)]
          [(? symbol? x) (coverage `(,cae ,x))]
          [`(let ([,x (apply-prim ,op ,ae)]) ,e0)
           (coverage `(let ([,x (apply-prim ,op ,(T-ae ae))]) ,(T e0 cae)))]

          [`(let ([,x (prim ,op ,aes ...)]) ,e0)
           (coverage `(let ([,x (prim ,op ,@(map T-ae aes))]) ,(T e0 cae)))]

          [`(let ([,x (lambda ,xs ,elam)]) ,e0)
           (coverage `(let ([,x ,(T-ae `(lambda ,xs ,elam))]) ,(T e0 cae)))]

          [`(let ([,x ',dat]) ,e0) (coverage `(let ([,x ',dat]) ,(T e0 cae)))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,dat]) ,(T e0 cae))]
          ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]

          [`(let ([,x ,rhs]) ,e0) (coverage (T rhs `(lambda (,x) ,(T e0 cae))))]
          [`(if ,ae ,e0 ,e1) (coverage `(if ,(T-ae ae) ,(T e0 cae) ,(T e1 cae)))]
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
  (let loop ([e e])
    (match e
      ; [`(quote ,d) `(,(set) ,e ,(list))]
      [`(let ([,x ',dat]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove freevars x) (coverage `(let ([,x ',dat]) ,e0+)) procs+)]
      [`(let ([,x ,(? string? str)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove freevars x) (coverage `(let ([,x ,str]) ,e0+)) procs+)]
      [`(let ([,x (prim ,op ,xs ...)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove (set-union (list->set xs) freevars) x)
             (coverage `(let ([,x (prim ,op ,@xs)]) ,e0+))
             procs+)]
      [`(let ([,x (apply-prim ,op ,y)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs+) (loop e0))
       (list (set-remove (set-add freevars y) x) (coverage `(let ([,x (apply-prim ,op ,y)]) ,e0+)) procs+)]

      [`(let ([,x (lambda (,xs ...) ,body)]) ,e0)
       (match-define `(,freevars ,e0+ ,procs0+) (loop e0))
       (match-define `(,freelambda ,body+ ,procs1+) (loop body))
       (define fx (gensym 'lam))
       (define envx (gensym 'env))

       (define envvars (foldl (lambda (x fr) (set-remove fr x)) freelambda xs))
       ;  (define envlist (set->list envvars))
       (define envvars+ (foldl (lambda (x fr)
                                 (set-remove fr x)) envvars (set->list symbol-set)))
       (define envlist (set->list envvars+))
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
       ;  (define envlist (set->list envvars))
       (define envvars+ (foldl (lambda (x fr)
                                 (set-remove fr x)) envvars (set->list symbol-set)))
       (define envlist (set->list envvars+))
       (define body++
         (cdr (foldl (lambda (x count+bdy)
                       (cons (+ 1 (car count+bdy))
                             `(let ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                     (cons 1 body+)
                     envlist)))
       (coverage (list (set-remove (set-union envvars freevars) x)
                       `(let ([,x (make-closure ,fx ,@envlist)]) ,e0+)
                       `(,@procs0+ ,@procs1+ (proc (,fx ,envx . ,arg) ,body++))))]
      [`(if ,x ,e0 ,e1)
       (match-define `(,freevars0 ,e0+ ,procs0+) (loop e0))
       (match-define `(,freevars1 ,e1+ ,procs1+) (loop e1))
       (list (set-add (set-union freevars0 freevars1) x) (coverage `(if ,x ,e0+ ,e1+)) (append procs0+ procs1+))]
      [`(apply ,f ,x) (list (list->set `(,f ,x)) (coverage `(clo-apply ,f ,x)) '())]
      [`(,f ,xs ...) (list (list->set `(,f ,@xs)) (coverage `(clo-app ,f ,@xs)) '())]
      ))
  )

(define (closure-convert program)
  (define global-symbols-set
    (let loop ([item-set (set)] [prog+ program])
      (match prog+
        ; [`((define (,ptr ,kont . ,param) ,body) ,rest ...)
        ;  (loop (set-add (set-add item-set ptr) kont) rest)]
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



; (define our-call
;   `(
;     (define-prim + 1 2 3)
;     (define-prim - 1 2 3)
;     ; (define-prim > 1 2 3)
;     (define-prim < 1 2 3)

;     (define (list . x) x)

;     (define (do-minus n)
;       (if (< n 3.0)
;           n
;           10.0
;           )
;       )
;     (define (call n)
;       ; (+ (do-minus 2 1.0) (do-minus 2 2.0))
;       ;  (+ (do-minus (- 4.0 1.0)) (do-minus (- 2.0 1.0)))
;       (+ (do-minus 3.0) (do-minus 1.0))


;       )

;     (define (brouhaha_main)
;       (call 10.0))

;     ))


; just for testing purpose--> all of them are working after removal of prov tag
; (interp (desugar our-call))
; (interp (alphatize (desugar our-call)))
; (interp (add-tags (desugar our-call)))
; (interp (anf-convert (desugar our-call)))
; (interp-cps (cps-convert (anf-convert (alphatize (desugar our-call)))))
; (interp-cps (alphatize (cps-convert (anf-convert (alphatize (desugar our-call))))))
; (interp-closure (closure-convert (alphatize (cps-convert (anf-convert (alphatize (desugar our-call)))))))

; (pretty-print (closure-convert (alphatize (cps-convert (anf-convert (alphatize (desugar our-call)))))))

(define prog
  '((define-prim + 1 2 3)
    (define-prim - 1 2 3)
    (define-prim = 1 2 3)
    (define-prim null? 1)
    (define-prim cons 2)
    (define-prim car 1)
    (define-prim cdr 1)
    (define (list . x) x)
    (define (foldr fun acc lst)
      (let ((id_8699 (null? lst)))
        (if id_8699
            acc
            (let ((id_8700 (car lst)))
              (let ((id_8701 (cdr lst)))
                (let ((id_8702 (foldr fun acc id_8701)))
                  (fun id_8700 id_8702)))))))
    (define (append1 lhs rhs)
      (let ((id_8703 (null? lhs)))
        (if id_8703
            rhs
            (let ((id_8704 (car lhs)))
              (let ((id_8705 (cdr lhs)))
                (let ((id_8706 (append1 id_8705 rhs))) (cons id_8704 id_8706)))))))
    (define (append . vargs)
      (let ((xs (car vargs)))
        (let ((vargs8698 (cdr vargs)))
          (let ((x vargs8698))
            (let ((id_8707 (list)))
              (let ((id_8708 (list xs)))
                (let ((id_8709 (append1 id_8708 x)))
                  (foldr append1 id_8707 id_8709))))))))
    (define (ok? row dist placed)
      (let ((id_8710 (null? placed)))
        (if id_8710
            (let ((xy8711 '#t)) xy8711)
            (let ((id_8712 (car placed)))
              (let ((id_8713 (+ row dist)))
                (let ((id_8714 (= id_8712 id_8713)))
                  (let ((id_8717
                         (if id_8714
                             (let ((xy8715 '#f)) xy8715)
                             (let ((xy8716 '#t)) xy8716))))
                    (if id_8717
                        (let ((id_8718 (car placed)))
                          (let ((id_8719 (- row dist)))
                            (let ((id_8720 (= id_8718 id_8719)))
                              (let ((id_8723
                                     (if id_8720
                                         (let ((xy8721 '#f)) xy8721)
                                         (let ((xy8722 '#t)) xy8722))))
                                (if id_8723
                                    (let ((id_8724 '1))
                                      (let ((id_8725 (+ dist id_8724)))
                                        (let ((id_8726 (cdr placed)))
                                          (ok? row id_8725 id_8726))))
                                    (let ((xy8727 '#f)) xy8727))))))
                        (let ((xy8728 '#f)) xy8728)))))))))
    (define (q-helper stack count)
      (let ((id_8729 (null? stack)))
        (if id_8729
            count
            (let ((state (car stack)))
              (let ((x (car state)))
                (let ((y (let ((id_8730 (cdr state))) (car id_8730))))
                  (let ((z
                         (let ((id_8731 (cdr state)))
                           (let ((id_8732 (cdr id_8731))) (car id_8732)))))
                    (let ((id_8733 (null? x)))
                      (if id_8733
                          (let ((id_8734 (null? y)))
                            (if id_8734
                                (let ((id_8735 (cdr stack)))
                                  (let ((id_8736 '1))
                                    (let ((id_8737 (+ count id_8736)))
                                      (q-helper id_8735 id_8737))))
                                (let ((id_8738 (cdr stack)))
                                  (q-helper id_8738 count))))
                          (let ((id_8739 (cdr x)))
                            (let ((id_8740 (car x)))
                              (let ((id_8741 (cons id_8740 y)))
                                (let ((id_8742 (list id_8739 id_8741 z)))
                                  (let ((id_8743 (car x)))
                                    (let ((id_8744 '1))
                                      (let ((id_8745 (ok? id_8743 id_8744 z)))
                                        (let ((id_8754
                                               (if id_8745
                                                   (let ((id_8746 (cdr x)))
                                                     (let ((id_8747
                                                            (append id_8746 y)))
                                                       (let ((id_8748 (list)))
                                                         (let ((id_8749 (car x)))
                                                           (let ((id_8750
                                                                  (cons id_8749 z)))
                                                             (let ((id_8751
                                                                    (list
                                                                     id_8747
                                                                     id_8748
                                                                     id_8750)))
                                                               (let ((id_8752
                                                                      (cdr stack)))
                                                                 (cons
                                                                  id_8751
                                                                  id_8752))))))))
                                                   (let ((xy8753 (cdr stack)))
                                                     xy8753))))
                                          (let ((id_8755 (cons id_8742 id_8754)))
                                            (q-helper
                                             id_8755
                                             count)))))))))))))))))))
    (define (iota1 n l)
      (let ((id_8756 '0))
        (let ((id_8757 (= n id_8756)))
          (if id_8757
              l
              (let ((id_8758 '1))
                (let ((id_8759 (- n id_8758)))
                  (let ((id_8760 (cons n l))) (iota1 id_8759 id_8760))))))))
    (define (nqueens n)
      (let ((id_8761 (list)))
        (let ((id_8762 (iota1 n id_8761)))
          (let ((id_8763 (list)))
            (let ((id_8764 (list)))
              (let ((id_8765 (list id_8762 id_8763 id_8764)))
                (let ((id_8766 (list id_8765)))
                  (let ((id_8767 '0)) (q-helper id_8766 id_8767)))))))))
    (define (brouhaha_main) (let ((id_8768 '14)) (nqueens id_8768))))

  )

; (pretty-print (cps-convert (optimize-prog prog))
; (pretty-print (closure-convert (alphatize (cps-convert ( optimize-prog prog)))))
; (pretty-print (closure-convert (alphatize (cps-convert prog))))