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
  (let* ([pr6 (add-tags pr1)]
         [pr2 (anf-convert pr6)]
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
      [`(let (prov ,@prov)
          ([,xs ,es] ...)
          ,e0)
       ;  (pretty-print (list "I heere: " e))
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(let (prov ,@prov)
                    ,(map list xs+ (map (alpha-rename env) es))
                    ,((alpha-rename env+) e0)))]
      [`(let ([,xs ,es] ...) ,e0)
       ;  (pretty-print (list "I there: " e))
       (define xs+ (map rename xs))
       ;  (pretty-print (list "New XS: " xs+))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(let ,(map list xs+ (map (alpha-rename env) es)) ,((alpha-rename env+) e0)))]
      [`(lambda (prov ,@prov)
          (,xs ...)
          ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(lambda (prov ,@prov)
                    ,xs+
                    ,((alpha-rename env+) e0)))]
      [`(lambda (,xs ...) ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       (coverage `(lambda ,xs+ ,((alpha-rename env+) e0)))]
      [`(lambda (prov ,@prov)
          ,x
          ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(lambda (prov ,@prov)
                    ,x+
                    ,((alpha-rename env+) e0)))]
      [`(lambda (prov ,@prov) ,x ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(lambda (prov ,@prov) ,x+ ,((alpha-rename env+) e0)))]
      [`(lambda ,x ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       (coverage `(lambda ,x+ ,((alpha-rename env+) e0)))]
      [`(prim (prov ,prov ...) ,op ,es ...) (coverage `(prim (prov ,@prov) ,op ,@(map (alpha-rename env) es)))]
      [`(prim ,op ,es ...) (coverage `(prim ,op ,@(map (alpha-rename env) es)))]
      [`(apply-prim (prov ,prov ...) ,op ,e0) (coverage `(apply-prim (prov ,@prov) ,op ,((alpha-rename env) e0)))]
      [`(apply-prim ,op ,e0) (coverage `(apply-prim ,op ,((alpha-rename env) e0)))]
      [`(if (prov ,prov ...) ,e0 ,e1 ,e2)
       (coverage `(if (prov ,@prov) ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2)))]
      [`(if ,e0 ,e1 ,e2)
       (coverage `(if ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2)))]
      [`(apply (prov ,prov ...) ,e0 ,e1) (coverage `(apply (prov ,@prov) ,((alpha-rename env) e0) ,((alpha-rename env) e1)))]
      [`(apply ,e0 ,e1) (coverage `(apply ,((alpha-rename env) e0) ,((alpha-rename env) e1)))]
      [(? symbol? x) (coverage (hash-ref env x))]
      ; [(or (? integer? x) (? boolean? x)) x] ; should this even be here?
      ; [(? string? y) `',y]
      [`(app (prov ,prov ...) ,es ...) (coverage `(app (prov ,@prov) ,@(map (alpha-rename env) es)))]
      [`',dat (coverage `',dat)]
      [`(,es ...) (coverage (map (alpha-rename env) es))]))
  (define ((rename-define env) def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       (coverage `(define (,fname ,@params)
                    ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body)))]
      [`(define (prov ,prov ...) (,fname ,params ...)
          ,body)
       (coverage `(define (prov ,@prov) (,fname ,@params)
                    ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body)))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (coverage `(define (,fname . ,params)
                    ,((alpha-rename (hash-set env params params)) body)))]
      [`(define (prov ,prov ...) (,fname . ,(? symbol? params))
          ,body)
       (coverage `(define (prov ,@prov) (,fname . ,params)
                    ,((alpha-rename (hash-set env params params)) body)))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))
  (define top-env
    (foldl (lambda (def env)
             (match def
               [`(define (,fname . ,params)
                   ,body)
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]
               [`(define (prov ,prov ...) (,fname . ,params)
                   ,body)
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]
               [`(define-prim ,fname ,params-count ...)
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
    ; (pretty-print (list "Hitting anf-convert-define " def))
    (match def
      [`(define (prov ,prov ...)
          ,sig
          ,body)
       (coverage `(define (prov ,@prov)
                    ,sig
                    ,(normalize-anf body)))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))
  (map anf-convert-define program))

(define (normalize-anf e)
  ;(displayln (~a "norm-anf: e: " e))
  (define e+ (normalize e (lambda (x) x)))
  ; (pretty-print (list "Hitting e+ " e+))
  ;(displayln "-printed e+-")
  ;(pretty-print e+)
  (match e+
    [(? symbol? x) (coverage x)]
    [`(let (prov ,_)
        ([,x ,rhs])
        ,e0)
     (coverage e+)]
    [_
     (define x+ (gensym 'xy))
     (coverage `(let (prov ,e+)
                  ([,x+ ,e+])
                  ,x+))]))

(define (normalize e k)
  ; (pretty-print (list "Hitting normalize " e " and k " k))
  (define (normalize-ae e k)
    (normalize e
               (lambda (anf)
                 (match anf
                   [(? symbol? x) (coverage (k x))]
                   [else (let ([x (gensym 'a)]) (coverage `(let (prov ,anf) ([,x ,anf]) ,(k x))))]))))

  (define (normalize-aes es k)
    (if (null? es)
        (k '())
        (normalize-ae (car es) (lambda (x) (normalize-aes (cdr es) (lambda (xs) (k `(,x . ,xs))))))))

  (match e
    ; [(? string? y) (k `',y)]
    [`',dat (coverage (k `',dat))]
    [(? symbol? x) (coverage (k x))]
    [`(lambda (prov ,prov ...)
        ,xs
        ,e0)
     (coverage (k `(lambda (prov ,@prov)
                     ,xs
                     ,(normalize e0 (lambda (x) x)))))]
    [`(let (prov ,prov ...)
        ()
        ,e0)
     (coverage (normalize e0 k))]
    [`(let (prov ,prov ...)
        ([,x ,rhs] . ,rest)
        ,e0)
     (coverage `(let (prov ,@prov)
                  ([,x ,(normalize rhs (lambda (x) x))])
                  ; the next let shouldn't need a prov
                  ,(normalize `(let (prov ,@prov)
                                 ,rest
                                 ,e0)
                              k)))]
    ; [`(let () ,e0) (normalize e0 k)]
    ; [`(let ([,x ,rhs] . ,rest) ,e0)
    ;  `(let ([,x ,(normalize rhs (lambda (x) x))]) ,(normalize `(let ,rest ,e0) k))]
    [`(if (prov ,prov ...) ,ec ,et ,ef)
     (coverage (normalize-ae ec (lambda (xc) (k `(if (prov ,@prov) ,xc ,(normalize-anf et) ,(normalize-anf ef))))))]
    [`(prim (prov ,prov ...) ,op ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(prim (prov ,@prov) ,op . ,xs)))))]
    [`(apply-prim (prov ,prov ...) ,op ,e0) (coverage (normalize-ae e0 (lambda (x) (k `(apply-prim (prov ,@prov) ,op ,x)))))]
    [`(apply (prov ,prov ...) ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(apply (prov ,@prov) . ,xs)))))]
    [`(app (prov ,prov ...) ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(app (prov ,@prov) . ,xs)))))]
    ;[`(app ,prov ,es ...) (normalize-aes es k)]
    ; [`(,es ...) (normalize-aes es k)]
    ))

(define (cps-convert program)
  (define (T-ae ae)
    (match ae
      [`(lambda (prov ,prov ...) (,xs ...) ,e0)
       (define cx (gensym 'cont))
       (coverage `(lambda (prov ,@prov) (,cx ,@xs) ,(T e0 cx)))] ; checked
      [`(lambda (prov ,prov ...) (,xs ...) ,e0)
       (define cx (gensym 'cont))
       (coverage `(lambda (prov ,@prov) (,cx ,@xs) ,(T e0 cx)))] ; checked
      [`(lambda (prov ,prov ...) ,x ,e0)
       (define cx (gensym 'cont))
       (define x+ (gensym x))
       (coverage `(lambda (prov ,@prov) ,x+ (let (prov ,x+) ([,cx (prim (prov ,x+) car ,x+)]) (let (prov ,x) ([,x (prim (prov ,x+) cdr ,x+)]) ,(T e0 cx)))))] ; checked
      [`(lambda (prov ,prov ...) ,x ,e0)
       (define cx (gensym 'cont))
       (define x+ (gensym x))
       (coverage `(lambda (prov ,@prov) ,x+ (let (prov ,x+) ([,cx (prim (prov ,x+) car ,x+)]) (let (prov ,x) ([,x (prim (prov ,x+) cdr ,x+)]) ,(T e0 cx)))))]
      [(? symbol? x) (coverage x)]
      ; [`(,prov ...) prov]
      [`',dat (coverage `',dat)]))
  (define (T e cae)
    (if (not (symbol? cae))
        (let ([f (gensym 'f)]) `(let (prov ,cae) ([,f ,cae]) ,(T e f)))
        ; (match (p-dbg e)
        (match e
          ; [(? string? x) `(,cae ,x)]
          [(? symbol? x) (coverage `(,cae ,x))]
          ; [`(prim ,prov ,op ,aes ...)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ,prov ([,retx (prim ,prov ,op ,@aes)]) ,retx) cae)]
          ; [`(apply-prim ,prov ,op ,ae)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ,prov ([,retx (apply-prim ,prov ,op ,ae)]) ,retx) cae)]
          [`(let (prov ,prov ...)
              ([,x (apply-prim (prov ,prov2 ...) ,op ,ae)])
              ,e0)
           (coverage `(let (prov ,@prov)
                        ([,x (apply-prim (prov ,@prov2) ,op ,(T-ae ae))])
                        ,(T e0 cae)))]

          [`(let (prov ,prov ...)
              ([,x (prim (prov ,prov2 ...) ,op ,aes ...)])
              ,e0)
           (coverage `(let (prov ,@prov)
                        ([,x (prim (prov ,@prov2) ,op ,@(map T-ae aes))])
                        ,(T e0 cae)))]

          [`(let (prov ,prov ...)
              ([,x (lambda (prov ,prov2 ...) ,xs ,elam)])
              ,e0)
           (coverage `(let (prov ,@prov) ([,x ,(T-ae `(lambda (prov ,@prov2) ,xs ,elam))]) ,(T e0 cae)))]

          [`(let (prov ,prov ...) ([,x ',dat]) ,e0) (coverage `(let (prov ,@prov) ([,x ',dat]) ,(T e0 cae)))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,dat]) ,(T e0 cae))]
          ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]

          [`(let (prov ,prov ...) ([,x ,rhs]) ,e0) (coverage (T rhs `(lambda (prov ,@prov) (,x) ,(T e0 cae))))]

          [`(if (prov ,prov ...) ,ae ,e0 ,e1) (coverage `(if (prov ,@prov) ,(T-ae ae) ,(T e0 cae) ,(T e1 cae)))]
          [`(apply (prov ,prov ...) ,ae0 ,ae1)
           (define xlst (gensym 'cps-lst))
           (coverage `(let (prov ,@prov) ([,xlst (prim (prov ,@prov) cons ,cae ,(T-ae ae1))]) (apply (prov ,@prov) ,(T-ae ae0) ,xlst)))]
          [`(app (prov ,prov ...) ,fae ,args ...)
           (coverage `(app (prov ,@prov) ,(T-ae fae) ,cae ,@(map T-ae args)))]
          ; [`(,fae ,args ...) `(,(T-ae fae) ,cae ,@(map T-ae args))]
          )))
  (define (cps-convert-def def)
    (match def
      [`(define (prov ,prov ...)
          (,fname ,params ...)
          ,body)
       (define k (gensym 'kont))
       (coverage `(define (prov ,@prov) (,fname ,k ,@params)
                    ,(T body k)))]
      [`(define (prov ,prov ...)
          (,fname . ,(? symbol? params))
          ,body)
       (define k (gensym 'kont))
       (coverage `(define (prov ,@prov) (,fname . ,params)
                    ,(T `(let (prov ,@prov) ([,k (prim (prov ,@prov) car ,params)]) (let (prov ,@prov) ([,params (prim (prov ,@prov) cdr ,params)]) ,body)) k)))]
      [`(define-prim ,fname ,param-counts ...)
       (coverage `(define-prim ,fname ,@param-counts))]
      ))

  (map cps-convert-def program))

(define (T-bottom-up e)
  (match e
    ; [`(quote ,d) `(,(set) ,e ,(list))]
    [`(let (prov ,prov ...) ([,x ',dat]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     ;  (pretty-print (list "241: " x dat))
     (define dx (gensym 'd))
     (list (set-remove freevars x) (coverage `(let ,(coverage `(prov ,@prov)) ([,x ',dat]) ,e0+)) procs+)]
    [`(let (prov ,prov ...) ([,x ,(? string? str)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (define dx (gensym 'd))
     (list (set-remove freevars x) (coverage `(let (prov ,@prov) ([,x ,str]) ,e0+)) procs+)]
    [`(let (prov ,prov ...) ([,x (prim (prov ,prov2 ...) ,op ,xs ...)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (list (set-remove (set-union (list->set xs) freevars) x)
           (coverage `(let (prov ,@prov) ([,x (prim (prov ,@prov2) ,op ,@xs)]) ,e0+))
           procs+)]
    [`(let (prov ,@prov) ([,x (apply-prim (prov ,@prov2) ,op ,y)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (list (set-remove (set-add freevars y) x) (coverage `(let (prov ,@prov) ([,x (apply-prim (prov ,@prov2) ,op ,y)]) ,e0+)) procs+)]
    ; to fix
    [`(let (prov ,@prov) ([,x (lambda (prov ,@prov2) (,xs ...) ,body)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freelambda ,body+ ,procs1+) (T-bottom-up body))
     (define fx (gensym 'lam))
     (define envx (gensym 'env))
     (define envvars (foldl (lambda (x fr) (set-remove fr x)) freelambda xs))
     (define envlist (set->list envvars))
     (define body++
       (cdr (foldl (lambda (x count+bdy)
                     (cons (+ 1 (car count+bdy))
                           `(let (prov ,@prov) ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                   (cons 1 body+)
                   envlist)))
     (coverage (list (set-remove (set-union envvars freevars) x)
                     `(let (prov ,@prov) ([,x (make-closure ,fx ,@envlist)]) ,e0+)
                     `(,@procs0+ ,@procs1+ (proc (prov ,@prov) (,fx ,envx ,@xs) ,body++))))]

    [`(let (prov ,@prov) ([,x (lambda (prov ,@prov2) ,arg ,body)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freelambda ,body+ ,procs1+) (T-bottom-up body))
     (define fx (gensym 'lam))
     (define envx (gensym 'env))
     (define envvars (set-remove freelambda arg))
     (define envlist (set->list envvars))
     (define body++
       (cdr (foldl (lambda (x count+bdy)
                     (cons (+ 1 (car count+bdy))
                           `(let (prov ,@prov) ([,x (env-ref ,envx ,(car count+bdy))]) ,(cdr count+bdy))))
                   (cons 1 body+)
                   envlist)))
     (coverage (list (set-remove (set-union envvars freevars) x)
                     `(let (prov ,@prov) ([,x (make-closure ,fx ,@envlist)]) ,e0+)
                     `(,@procs0+ ,@procs1+ (proc (prov ,@prov) (,fx ,envx . ,arg) ,body++))))]
    [`(if (prov ,@prov) ,x ,e0 ,e1)
     (match-define `(,freevars0 ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freevars1 ,e1+ ,procs1+) (T-bottom-up e1))
     (list (set-add (set-union freevars0 freevars1) x) (coverage `(if (prov ,@prov) ,x ,e0+ ,e1+)) (append procs0+ procs1+))]
    ; [`(if ,x ,e0 ,e1)
    ;  (match-define `(,freevars0 ,e0+ ,procs0+) (T-bottom-up e0))
    ;  (match-define `(,freevars1 ,e1+ ,procs1+) (T-bottom-up e1))
    ;  (list (set-add (set-union freevars0 freevars1) x) `(if ,x ,e0+ ,e1+) (append procs0+ procs1+))]
    [`(apply (prov ,@prov) ,f ,x) (list (list->set `(,f ,x)) (coverage `(clo-apply (prov ,@prov) ,f ,x)) '())]
    ;[`(apply ,f ,x) (list (list->set `(,f ,x)) `(clo-apply ,f ,x) '())]
    [`(app (prov ,@prov) ,f ,xs ...) (list (list->set `(,f ,@xs)) (coverage `(clo-app (prov ,@prov) ,f ,@xs)) '())]
    [`(,f ,xs ...) (list (list->set `(,f ,@xs)) (coverage `(clo-app (prov dummy) ,f ,@xs)) '())]
    ))

(define (closure-convert program)
  (foldl (lambda (def pr+)
           (match def
             ;  [`(define (,fx . ,xs)
             ;      ,body)
             ;   ;  (pretty-print (list fx xs))
             ;   ; (define facts-list (search-facts ast-root '(eval )))
             ;   (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
             ;   (define envx (gensym '_))
             ;   ; (pretty-print (list freevars procs+ fx envx xs))
             ;   `(,@pr+ ,@procs+ (proc (,fx ,envx . ,xs) ,body+))]
             [`(define (prov ,@prov) (,fx . ,xs)
                 ,body)
              ;  (pretty-print (list fx xs))
              ; (define facts-list (search-facts ast-root '(eval )))
              (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
              (define envx (gensym '_))
              ; (pretty-print (list freevars procs+ fx envx xs))
              (coverage `(,@pr+ ,@procs+ (proc (prov ,@prov) (,fx ,envx . ,xs) ,body+)))]
             [`(define-prim ,fname ,param-counts ...)
              (coverage `(,@pr+ (define-prim ,fname ,@param-counts)))]
             ))
         '()
         program))



(define our-call
  `(
    (define-prim + 2 3)
    (define-prim - 2 3 4)
    ; (define (+ . lst) (apply-prim + lst))

    ; (define (- . lst)
    ;   (apply-prim - lst))

    ; start here
    ; (define (brouhaha_main)
    ;   ((lambda (a b) b) 5 6))

    (define (brouhaha_main)
      (+ 2 3 (- 4 1)))
    ; end here
    ))


; just for testing purpose
; (interp (desugar our-call))
; (interp (alphatize (desugar our-call)))
; (interp (add-tags (desugar our-call)))
; (interp (anf-convert (add-tags (desugar our-call))))
; (interp-cps (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))
; (interp-cps (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call)))))))
; (pretty-print (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))))
; (interp-closure (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))))