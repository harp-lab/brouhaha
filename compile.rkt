#lang racket

(provide compile
         desugar
         alphatize
         anf-convert
         cps-convert
         closure-convert
         read-program
         read-all)

; (require print-debug/print-dbg)
(require "coverage.rkt")

(define (compile program)
  (let* ([pr0 (desugar program)]
         [pr1 (alphatize pr0)]
         [pr2 (anf-convert pr1)]
         [pr3 (cps-convert pr2)]
         [pr4 (alphatize pr3)]
         [pr5 (closure-convert pr4)])
    (list pr0 pr1 pr2 pr3 pr4 pr5)))
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
      [_ (coverage body)]))
  (define (desugar-exp exp)
    (match exp
      [(? string? y) (coverage `',y)] ; --covered
      [(? integer? y) (coverage `',y)] 
      [(? flonum? y) (coverage `',y)]
      [(? symbol? x) (coverage x)]
      [(? boolean? x) (coverage `',x)]
      [`(let ([,xs ,es] ...) ,body)
       (coverage `(let ,(map (lambda (x e) `[,x ,(desugar-exp e)]) xs es) ,(desugar-exp body)))]
      [`(let* () ,ebody) (coverage (desugar-exp ebody))]
      [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)
       (coverage (desugar-exp `(let ([,lhs ,rhs]) (let* ,e-pairs ,ebody))))]
      [`(lambda (,xs ...) ,body) (coverage `(lambda ,xs ,(desugar-exp body)))]
      [`(lambda ,(? symbol? x) ,body) (coverage `(lambda ,x ,(desugar-exp body)))]
      [`(lambda ,args ,body) (coverage (desugar-exp `(lambda vargs ,(unroll-args args body))))]
      [`(and) (coverage `',#t)]
      [`(and ,e0) (coverage (desugar-exp e0))]
      [`(and ,e0 ,eas ...) (coverage `(if ,(desugar-exp e0) ,(desugar-exp `(and ,@eas)) '#f))]
      [`(or) (coverage `',#f)]
      [`(or ,e0) (coverage (desugar-exp e0))]
      [`(or ,e0 ,eas ...) (coverage `(if ,(desugar-exp e0) ,(desugar-exp e0) ,(desugar-exp `(or ,@eas))))]
      [`(not ,e0) (coverage `(if ,(desugar-exp e0) '#f '#t))]
      [`(if ,guard ,tr ,fl) (coverage `(if ,(desugar-exp guard) ,(desugar-exp tr) ,(desugar-exp fl)))]
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
          ,(desugar-exp (unroll-args params body))))]))
  (map desugar-define program))

(define (alphatize program)
  (define rename gensym)
  (define ((alpha-rename env) e)
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
      [`(prim ,op ,es ...) (coverage `(prim ,op ,@(map (alpha-rename env) es)))]
      [`(apply-prim ,op ,e0) (coverage `(apply-prim ,op ,((alpha-rename env) e0)))]
      [`(if ,e0 ,e1 ,e2)
       (coverage `(if ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2)))]
      [`(apply ,e0 ,e1) (coverage `(apply ,((alpha-rename env) e0) ,((alpha-rename env) e1)))]
      [(? symbol? x) (coverage (hash-ref env x))]
      [(? string? y) (coverage `',y)]
      [`',dat (coverage `',dat)]
      [`(,es ...) (coverage (map (alpha-rename env) es))]))
  (define ((rename-define env) def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       (coverage `(define (,fname ,@params)
          ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body)))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (coverage `(define (,fname . ,params)
          ,((alpha-rename (hash-set env params params)) body)))]))
  (define top-env
    (foldl (lambda (def env)
             (match def
               [`(define (,fname . ,params)
                   ,body)
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]))
           (hash)
           program))
  (map (rename-define top-env) program))

; Converts to ANF; adapted from Flanagan et al.
(define (anf-convert program)
  (define (anf-convert-define def)
    (match def
      [`(define ,sig ,body) (coverage `(define ,sig ,(normalize-anf body)))]))
  (map anf-convert-define program))

(define (normalize-anf e)
  (define e+ (normalize e (lambda (x) x)))
  (match e+
    [(? symbol? x) (coverage x)]
    [`(let ([,x ,rhs]) ,e0) (coverage e+)]
    [_
     (define x+ (gensym 'x))
     (coverage `(let ([,x+ ,e+]) ,x+))]))

(define (normalize e k)
  (define (normalize-ae e k)
    (normalize e
               (lambda (anf)
                 (match anf
                   [(? symbol? x) (coverage (k x))]
                   [else (let ([x (gensym 'a)]) (coverage `(let ([,x ,anf]) ,(k x))))]))))

  (define (normalize-aes es k)
    (if (null? es)
        (coverage (k '()))
        (coverage (normalize-ae (car es) (lambda (x) (normalize-aes (cdr es) (lambda (xs) (k `(,x . ,xs)))))))))
  (match e
    [(? string? y) (coverage (k `',y))]
    [`',dat (coverage (k `',dat))]
    [(? symbol? x) (coverage (k x))]
    [`(lambda ,xs ,e0) (coverage (k `(lambda ,xs ,(normalize e0 (lambda (x) x)))))]
    [`(let () ,e0) (coverage (normalize e0 k))]
    [`(let ([,x ,rhs] . ,rest) ,e0)
     (coverage `(let ([,x ,(normalize rhs (lambda (x) x))]) ,(normalize `(let ,rest ,e0) k)))]
    [`(if ,ec ,et ,ef)
     (coverage (normalize-ae ec (lambda (xc) (k `(if ,xc ,(normalize-anf et) ,(normalize-anf ef))))))]
    [`(prim ,op ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(prim ,op . ,xs)))))]
    [`(apply-prim ,op ,e0) (coverage (normalize-ae e0 (lambda (x) (k `(apply-prim ,op ,x)))))]
    [`(apply ,es ...) (coverage (normalize-aes es (lambda (xs) (k `(apply . ,xs)))))]
    [`(,es ...) (coverage (normalize-aes es k))]))

(define (cps-convert program)
  (define (T-ae ae)
    (match ae
      [`(lambda (,xs ...) ,e0)
       (define cx (gensym 'cont))
       (coverage `(lambda (,cx ,@xs) ,(T e0 cx)))]
      [`(lambda ,x ,e0)
       (define cx (gensym 'cont))
       (define x+ (gensym x))
       (coverage `(lambda ,x+ (let ([,cx (prim car ,x+)]) (let ([,x (prim cdr ,x+)]) ,(T e0 cx)))))]
      [(? symbol? x) (coverage x)]
      [`',dat (coverage `',dat)]))
  (define (T e cae)
    (if (not (symbol? cae))
        (let ([f (gensym 'f)]) (coverage `(let ([,f ,cae]) ,(T e f))))
        ; (match (p-dbg e)
        (match e
          [(? string? x) (coverage `(,cae ,x))]
          [(? symbol? x) (coverage `(,cae ,x))]
          [`(prim ,op ,aes ...)
           (define retx (gensym 'retprim))
           (coverage (T `(let ([,retx (prim ,op ,@aes)]) ,retx) cae))]
          [`(apply-prim ,op ,ae)
           (define retx (gensym 'retprim))
           (coverage (T `(let ([,retx (apply-prim ,op ,ae)]) ,retx) cae))]
          [`(let ([,x (apply-prim ,op ,ae)]) ,e0)
           (coverage `(let ([,x (apply-prim ,op ,(T-ae ae))]) ,(T e0 cae)))]
          [`(let ([,x (prim ,op ,aes ...)]) ,e0)
           (coverage `(let ([,x (prim ,op ,@(map T-ae aes))]) ,(T e0 cae)))]
          [`(let ([,x (lambda ,xs ,elam)]) ,e0) (coverage `(let ([,x ,(T-ae `(lambda ,xs ,elam))]) ,(T e0 cae)))]
          [`(let ([,x ',dat]) ,e0) (coverage `(let ([,x ',dat]) ,(T e0 cae)))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
          [`(let ([,x ,(? string? dat)]) ,e0) (coverage `(let ([,x ,dat]) ,(T e0 cae)))]
          ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]
          [`(let ([,x ,rhs]) ,e0) (coverage (T rhs `(lambda (,x) ,(T e0 cae))))]
          [`(if ,ae ,e0 ,e1) (coverage `(if ,(T-ae ae) ,(T e0 cae) ,(T e1 cae)))]
          [`(apply ,ae0 ,ae1)
           (define xlst (gensym 'cps-lst))
           (coverage `(let ([,xlst (prim cons ,cae ,(T-ae ae1))]) (apply ,(T-ae ae0) ,xlst)))]
          [`(,fae ,args ...) (coverage `(,(T-ae fae) ,cae ,@(map T-ae args)))])))
  (define (cps-convert-def def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       (define k (gensym 'kont))
       (coverage `(define (,fname ,k ,@params)
          ,(T body k)))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (define k (gensym 'kont))
       (define newargs (gensym 'args))
       (coverage `(define (,fname . ,params)
          ,(T `(let ([,k (prim car ,params)]) (let ([,params (prim cdr ,params)]) ,body)) k)))]))
  (map cps-convert-def program))

(define (T-bottom-up e)
  (match e
    [`(quote ,d) (coverage `(,(set) ,e ,(list)))]
    [`(let ([,x ',dat]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (define dx (gensym 'd))
     (coverage (list (set-remove freevars x) `(let ([,x ',dat]) ,e0+) procs+))]
    [`(let ([,x ,(? string? str)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (define dx (gensym 'd))
     (coverage (list (set-remove freevars x) `(let ([,x ,str]) ,e0+) procs+))]
    [`(let ([,x (prim ,op ,xs ...)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (coverage (list (set-remove (set-union (list->set xs) freevars) x)
           `(let ([,x (prim ,op ,@xs)]) ,e0+)
           procs+))]
    [`(let ([,x (apply-prim ,op ,y)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (coverage (list (set-remove (set-add freevars y) x) `(let ([,x (apply-prim ,op ,y)]) ,e0+) procs+))]
    [`(let ([,x (lambda (,xs ...) ,body)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freelambda ,body+ ,procs1+) (T-bottom-up body))
     (define fx (gensym 'lam))
     (define envx (gensym 'env))
     (define envvars (foldl (lambda (x fr) (set-remove fr x)) freelambda xs))
     (define envlist (set->list envvars))
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
     (match-define `(,freevars ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freelambda ,body+ ,procs1+) (T-bottom-up body))
     (define fx (gensym 'lam))
     (define envx (gensym 'env))
     (define envvars (set-remove freelambda arg))
     (define envlist (set->list envvars))
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
     (match-define `(,freevars0 ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freevars1 ,e1+ ,procs1+) (T-bottom-up e1))
     (coverage (list (set-add (set-union freevars0 freevars1) x) `(if ,x ,e0+ ,e1+) (append procs0+ procs1+)))]
    [`(apply ,f ,x) (coverage (list (list->set `(,f ,x)) `(clo-apply ,f ,x) '()))]
    [`(,f ,xs ...) (coverage (list (list->set `(,f ,@xs)) `(clo-app ,f ,@xs) '()))]))

(define (closure-convert program)
  (foldl (lambda (def pr+)
           (match def
             [`(define (,fx . ,xs)
                 ,body)
              (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
              (define envx (gensym '_))
              (coverage `(,@pr+ ,@procs+ (proc (,fx ,envx . ,xs) ,body+)))]))
         '()
         program))
