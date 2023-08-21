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

(require "slog-utils.rkt")

(define (compile-to-alphatize program)
  (let* ([pr0 (desugar program)] [pr1 (alphatize pr0)]) (list pr0 pr1)))

(define (compile-to-finish program slog-path out-path fact-file pr1)
  ; (define (compile-to-finish program)
  ; (display (~a "\n\n\n" fact-file "\n\n\n"))
  ; (define ast-root (read-facts fact-file))
  ; (define facts-list (index-to-facts (search-facts ast-root '(eval)) ast-root))
  ; (display (~a "\n\n\n" facts-list "\n\n\n"))
  (let* ([pr6 (add-tags program)]
         [pr2 (anf-convert pr6)]
         [pr3 (cps-convert pr2)]
         [pr4 (alphatize pr3)]
         [pr5 (closure-convert pr4)]
         ;  [amount (count-params slog-facts)]
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
      [(? symbol? x) `(let ([,x vargs]) ,body)]
      [`(,(? symbol? x) . ,rst) `(let ([,x (car vargs)] [vargs (cdr vargs)]) ,(unroll-args rst body))]
      [_ body]))
  (define (desugar-exp exp)
    (match exp
      [(? string? y) `',y]
      [(? integer? y) `',y]
      [(? flonum? y) `',y]
      [(? symbol? x) x]
      [(? boolean? x) `',x]
      [`(let ([,xs ,es] ...) ,body)
       `(let ,(map (lambda (x e) `[,x ,(desugar-exp e)]) xs es) ,(desugar-exp body))]
      [`(let* () ,ebody) (desugar-exp ebody)]
      [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)
       (desugar-exp `(let ([,lhs ,rhs]) (let* ,e-pairs ,ebody)))]
      [`(lambda (,xs ...) ,body) `(lambda ,xs ,(desugar-exp body))]
      [`(lambda ,(? symbol? x) ,body) `(lambda ,x ,(desugar-exp body))]
      [`(lambda ,args ,body) (desugar-exp `(lambda vargs ,(unroll-args args body)))]
      [`(and) `',#t]
      [`(and ,e0) (desugar-exp e0)]
      [`(and ,e0 ,eas ...) `(if ,(desugar-exp e0) ,(desugar-exp `(and ,@eas)) '#f)]
      [`(or) `',#f]
      [`(or ,e0) (desugar-exp e0)]
      [`(or ,e0 ,eas ...) `(if ,(desugar-exp e0) ,(desugar-exp e0) ,(desugar-exp `(or ,@eas)))]
      [`(not ,e0) `(if ,(desugar-exp e0) '#f '#t)]
      [`(if ,guard ,tr ,fl) `(if ,(desugar-exp guard) ,(desugar-exp tr) ,(desugar-exp fl))]
      [`(apply ,e0 ,e1) `(apply ,(desugar-exp e0) ,(desugar-exp e1))]
      [`(,es ...) (map desugar-exp es)]))
  (define (desugar-define def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       `(define (,fname ,@params)
          ,(desugar-exp body))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       `(define (,fname . ,params)
          ,(desugar-exp body))]
      [`(define (,fname . ,params)
          ,body)
       `(define (,fname . vargs)
          ,(desugar-exp (unroll-args params body)))]))
  (map desugar-define program))

(define (alphatize program)
  (define ((alpha-rename env) e)
    (define (rename x)
      (if (hash-has-key? env x) (gensym x) x))
    ; (pretty-print (list "This is e: " e))
    (match e
      [`(let ,kont
          (,prov ...)
          ([,xs ,es] ...)
          ,e0)
       ;  (pretty-print (list "I hee/re: " e))
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       `(let ,kont
          ,prov
          ,(map list xs+ (map (alpha-rename env) es))
          ,((alpha-rename env+) e0))]
      [`(let (,prov ...)
          ([,xs ,es] ...)
          ,e0)
       ;  (pretty-print (list "I heere: " e))
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       `(let ,prov
          ,(map list xs+ (map (alpha-rename env) es))
          ,((alpha-rename env+) e0))]
      [`(let ([,xs ,es] ...) ,e0)
       ;  (pretty-print (list "I there: " e))
       (define xs+ (map rename xs))
       ;  (pretty-print (list "New XS: " xs+))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       `(let ,(map list xs+ (map (alpha-rename env) es)) ,((alpha-rename env+) e0))]
      [`(lambda (,prov ...)
          (,xs ...)
          ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       `(lambda ,prov
          ,xs+
          ,((alpha-rename env+) e0))]
      [`(lambda (,xs ...) ,e0)
       (define xs+ (map rename xs))
       (define env+ (foldl (lambda (x x+ env) (hash-set env x x+)) env xs xs+))
       `(lambda ,xs+ ,((alpha-rename env+) e0))]
      [`(lambda (,prov ...)
          ,x
          ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       `(lambda ,prov
          ,x+
          ,((alpha-rename env+) e0))]
      [`(lambda ,x ,e0)
       (define x+ (rename x))
       (define env+ (hash-set env x x+))
       `(lambda ,x+ ,((alpha-rename env+) e0))]
      [`(prim (,prov ...) ,op ,es ...) `(prim ,prov ,op ,@(map (alpha-rename env) es))]
      [`(prim ,op ,es ...) `(prim ,op ,@(map (alpha-rename env) es))]
      [`(apply-prim (,prov ...) ,op ,e0) `(apply-prim ,prov ,op ,((alpha-rename env) e0))]
      [`(apply-prim ,op ,e0) `(apply-prim ,op ,((alpha-rename env) e0))]
      [`(if (,prov ...) ,e0 ,e1 ,e2)
       `(if ,prov ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2))]
      [`(if ,e0 ,e1 ,e2)
       `(if ,((alpha-rename env) e0) ,((alpha-rename env) e1) ,((alpha-rename env) e2))]
      [`(apply (,prov ...) ,e0 ,e1) `(apply ,prov ,((alpha-rename env) e0) ,((alpha-rename env) e1))]
      [`(apply ,e0 ,e1) `(apply ,((alpha-rename env) e0) ,((alpha-rename env) e1))]
      [(? symbol? x) (hash-ref env x)]
      ; [(or (? integer? x) (? boolean? x)) x] ; should this even be here?
      ; [(? string? y) `',y]
      [`(app ,prov ,es ...) `(app ,prov ,@(map (alpha-rename env) es))]
      [`',dat `',dat]
      [`(,es ...) (map (alpha-rename env) es)]))
  (define ((rename-define env) def)
    (match def
      [`(define (,fname ,params ...)
          ,body)
       `(define (,fname ,@params)
          ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       `(define (,fname . ,params)
          ,((alpha-rename (hash-set env params params)) body))]))
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

; Add tags within the program to keep track
(define (add-tags program)
  ; double check innner one
  (define (add-prov-exp exp)
    (match exp
      ; [(or (? symbol? x) (? number? x) (? boolean? x) (? string? x)) x]
      [`(let ([,xs ,es] ...) ,body)
       `(let (prov ,exp)
          ,(map (lambda (x e) `[,x ,(add-prov-exp e)]) xs es)
          ,(add-prov-exp body))]
      [`(lambda (,xs ...) ,body)
       `(lambda (prov ,exp)
          ,xs
          ,(add-prov-exp body))]
      ;  `(lambda (prov ,exp) ,@(map add-prov-exp xs) ,(add-prov-exp body))]
      [`(lambda ,x ,body)
       `(lambda (prov ,exp)
          ,x
          ,(add-prov-exp body))]
      ; `(lambda ,(prov ,exp) ,(add-prov-exp x) ,(add-prov-exp body))]
      [`(prim ,op ,es ...) `(prim (prov ,exp) ,op ,@(map add-prov-exp es))]
      [`(apply-prim ,op ,e0) `(apply-prim (prov ,exp) ,op ,(add-prov-exp e0))]
      [`(if ,guard ,tb ,fb)
       `(if (prov ,exp) ,(add-prov-exp guard) ,(add-prov-exp tb) ,(add-prov-exp fb))]
      [`(apply ,e0 ,e1) `(apply (prov ,exp) ,(add-prov-exp e0) ,(add-prov-exp e1))]
      [`',dat `',dat]

      [(? symbol? x) x]
      ; this below should not be here
      ; [(? string? y) `',y]
      ; [(? integer? y) `',y]
      ; [(? flonum? y) `',y]
      ; [(? boolean? x) `',x]
      [`(,es ...) `(app (prov ,exp) ,@(map add-prov-exp es))]
      [_ (pretty-print (list "Exp: " exp))]))
  (define (add-prov-define def)
    ; (pretty-print (list "Add-prov-define " def))
    (match def
      [`(define (prov ,prov-data)
          ,rst)
       def]
      [`(define ,params ,body)
       `(define (prov ,def)
          ,params
          ,(add-prov-exp body))]
      [_ (pretty-print (list "Looks like you forgot to write a catcher for this buddy: " def))]))
  (map add-prov-define program))

; Converts to ANF; adapted from Flanagan et al.
(define (anf-convert program)
  (define (anf-convert-define def)
    ; (pretty-print (list "Hitting anf-convert-define " def))
    (match def
      [`(define ,prov
          ,sig
          ,body)
       `(define ,prov
          ,sig
          ,(normalize-anf body))]))
  (map anf-convert-define program))

(define (normalize-anf e)
  (define e+ (normalize e (lambda (x) x)))
  ; (pretty-print (list "Hitting e+ " e+))
  (match e+
    [(? symbol? x) x]
    [`(let ,prov
        ([,x ,rhs])
        ,e0)
     e+]
    [_
     (define x+ (gensym 'xy))
     `(let (prov ,e+)
        ([,x+ ,e+])
        ,x+)]))

(define (normalize e k)
  ; (pretty-print (list "Hitting normalize " e " and k " k))
  (define (normalize-ae e k)
    (normalize e
               (lambda (anf)
                 (match anf
                   [(? symbol? x) (k x)]
                   [else (let ([x (gensym 'a)]) `(let ([,x ,anf]) ,(k x)))]))))

  (define (normalize-aes es k)
    (if (null? es)
        (k '())
        (normalize-ae (car es) (lambda (x) (normalize-aes (cdr es) (lambda (xs) (k `(,x . ,xs))))))))

  (match e
    ; [(? string? y) (k `',y)]
    [`',dat (k `',dat)]
    [(? symbol? x) (k x)]
    [`(lambda ,prov
        ,xs
        ,e0)
     (k `(lambda ,prov
           ,xs
           ,(normalize e0 (lambda (x) x))))]
    [`(let ,prov
        ()
        ,e0)
     (normalize e0 k)]
    [`(let ,prov
        ([,x ,rhs] . ,rest)
        ,e0)
     `(let ,prov
        ([,x ,(normalize rhs (lambda (x) x))])
      ; the next let shouldn't need a prov
        ,(normalize `(let ,prov
                       ,rest
                       ,e0)
                    k))]
    ; [`(let () ,e0) (normalize e0 k)]
    ; [`(let ([,x ,rhs] . ,rest) ,e0)
    ;  `(let ([,x ,(normalize rhs (lambda (x) x))]) ,(normalize `(let ,rest ,e0) k))]
    [`(if ,prov ,ec ,et ,ef)
     (normalize-ae ec (lambda (xc) (k `(if ,prov ,xc ,(normalize-anf et) ,(normalize-anf ef)))))]
    [`(prim ,prov ,op ,es ...) (normalize-aes es (lambda (xs) (k `(prim ,prov ,op . ,xs))))]
    [`(apply-prim ,prov ,op ,e0) (normalize-ae e0 (lambda (x) (k `(apply-prim ,prov ,op ,x))))]
    [`(apply ,prov ,es ...) (normalize-aes es (lambda (xs) (k `(apply ,prov . ,xs))))]
    [`(app ,prov ,es ...) (normalize-aes es (lambda (xs) (k `(app ,prov . ,xs))))]
    ; [`(,es ...) (normalize-aes es k)]
    ))

(define (cps-convert program)
  (define (T-ae ae)
    (match ae
      [`(lambda (,xs ...) ,e0)
       (define cx (gensym 'cont))
       `(lambda (,cx ,@xs) ,(T e0 cx))]
      [`(lambda ,x ,e0)
       (define cx (gensym 'cont))
       (define x+ (gensym x))
       `(lambda ,x+ (let ([,cx (prim car ,x+)]) (let ([,x (prim cdr ,x+)]) ,(T e0 cx))))]
      [(? symbol? x) x]
      [`(,prov ...) prov]
      [`',dat `',dat]))
  (define (T e cae)
    (if (not (symbol? cae))
        (let ([f (gensym 'f)]) `(let ([,f ,cae]) ,(T e f)))
        ; (match (p-dbg e)
        (match e
          ; [(? string? x) `(,cae ,x)]
          [(? symbol? x) `(,cae ,x)]
          ; [`(prim ,op ,aes ...)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ([,retx (prim ,op ,@aes)]) ,retx) cae)]
          ; [`(apply-prim ,op ,ae)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ([,retx (apply-prim ,op ,ae)]) ,retx) cae)]
          [`(let ,prov
              ([,x (apply-prim ,op ,ae)])
              ,e0)
           `(let ,prov
              ([,x (apply-prim ,op ,(T-ae ae))])
              ,(T e0 cae))]
          [`(let ,prov
              ([,x (prim ,op ,aes ...)])
              ,e0)
           `(let ,prov
              ([,x (prim ,op ,@(map T-ae aes))])
              ,(T e0 cae))]
          [`(let ,prov
              ([,x (lambda ,xs ,elam)])
              ,e0)
           `(let ([,x ,(T-ae `(lambda ,xs ,elam))]) ,(T e0 cae))]
          [`(let ([,x ',dat]) ,e0) `(let ([,x ',dat]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,dat]) ,(T e0 cae))]
          ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]
          [`(let ([,x ,rhs]) ,e0) (T rhs `(lambda (,x) ,(T e0 cae)))]
          [`(if ,ae ,e0 ,e1) `(if ,(T-ae ae) ,(T e0 cae) ,(T e1 cae))]
          [`(apply ,ae0 ,ae1)
           (define xlst (gensym 'cps-lst))
           `(let ([,xlst (prim cons ,cae ,(T-ae ae1))]) (apply ,(T-ae ae0) ,xlst))]
          [`(,fae ,args ...) `(,(T-ae fae) ,cae ,@(map T-ae args))])))
  (define (cps-convert-def def)
    (match def
      [`(define ,prov
          (,fname ,params ...)
          ,body)
       (define k (gensym 'kont))
       `(define (,fname ,k ,@params)
          ,(T body k))]
      [`(define ,prov
          (,fname . ,(? symbol? params))
          ,body)
       (define k (gensym 'kont))
       (define newargs (gensym 'args))
       `(define (,fname . ,params)
          ,(T `(let ([,k (prim car ,params)]) (let ([,params (prim cdr ,params)]) ,body)) k))]))
  (map cps-convert-def program))

(define (T-bottom-up e)
  (match e
    ; [`(quote ,d) `(,(set) ,e ,(list))]
    [`(let ([,x ',dat]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     ;  (pretty-print (list "241: " x dat))
     (define dx (gensym 'd))
     (list (set-remove freevars x) `(let ([,x ',dat]) ,e0+) procs+)]
    [`(let ([,x ,(? string? str)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (define dx (gensym 'd))
     (list (set-remove freevars x) `(let ([,x ,str]) ,e0+) procs+)]
    [`(let ([,x (prim ,op ,xs ...)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (list (set-remove (set-union (list->set xs) freevars) x)
           `(let ([,x (prim ,op ,@xs)]) ,e0+)
           procs+)]
    [`(let ([,x (apply-prim ,op ,y)]) ,e0)
     (match-define `(,freevars ,e0+ ,procs+) (T-bottom-up e0))
     (list (set-remove (set-add freevars y) x) `(let ([,x (apply-prim ,op ,y)]) ,e0+) procs+)]
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
     (list (set-remove (set-union envvars freevars) x)
           `(let ([,x (make-closure ,fx ,@envlist)]) ,e0+)
           `(,@procs0+ ,@procs1+ (proc (,fx ,envx ,@xs) ,body++)))]
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
     (list (set-remove (set-union envvars freevars) x)
           `(let ([,x (make-closure ,fx ,@envlist)]) ,e0+)
           `(,@procs0+ ,@procs1+ (proc (,fx ,envx . ,arg) ,body++)))]
    [`(if ,x ,e0 ,e1)
     (match-define `(,freevars0 ,e0+ ,procs0+) (T-bottom-up e0))
     (match-define `(,freevars1 ,e1+ ,procs1+) (T-bottom-up e1))
     (list (set-add (set-union freevars0 freevars1) x) `(if ,x ,e0+ ,e1+) (append procs0+ procs1+))]
    [`(apply ,f ,x) (list (list->set `(,f ,x)) `(clo-apply ,f ,x) '())]
    [`(,f ,xs ...) (list (list->set `(,f ,@xs)) `(clo-app ,f ,@xs) '())]))

(define (closure-convert program)
  (foldl (lambda (def pr+)
           (match def
             [`(define (,fx . ,xs)
                 ,body)
              ;  (pretty-print (list fx xs))
              ; (define facts-list (search-facts ast-root '(eval )))
              (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
              (define envx (gensym '_))
              ; (pretty-print (list freevars procs+ fx envx xs))
              `(,@pr+ ,@procs+ (proc (,fx ,envx . ,xs) ,body+))]))
         '()
         program))

; (define facts-list (search-facts ast-root '(eval)))
(define (count-params slog-facts)
  'todo)

(define our-call
  `((define (call num1 num2)
      (let ([x num1] [y num2]) x))
    (define (brouhaha_main)
      (call 5 42))))

; (pretty-print (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))))

(pretty-print (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))))
