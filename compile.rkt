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

(define (compile-to-finish program fact-file pr1)
  ; (define (compile-to-finish program)
  (let* ([pr6 (add-tags program)]
         [pr2 (anf-convert pr6)]
         [pr3 (cps-convert pr2)]
         [pr4 (alphatize pr3)]
         [pr5 (closure-convert pr4)]
         [amount (count-params pr5 fact-file)]
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
      [`(define ,prov (,fname ,params ...)
          ,body)
       `(define ,prov (,fname ,@params)
          ,((alpha-rename (foldl (lambda (x h) (hash-set h x x)) env params)) body))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       `(define (,fname . ,params)
          ,((alpha-rename (hash-set env params params)) body))]
      [`(define ,prov (,fname . ,(? symbol? params))
          ,body)
       `(define ,prov (,fname . ,params)
          ,((alpha-rename (hash-set env params params)) body))]
      ))
  (define top-env
    (foldl (lambda (def env)
             (match def
               [`(define (,fname . ,params)
                   ,body)
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]
               [`(define ,prov (,fname . ,params)
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
      [(? string? y) `',y]
      [(? integer? y) `',y]
      [(? flonum? y) `',y]
      [(? boolean? x) `',x]
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
  ;(displayln (~a "norm-anf: e: " e))
  (define e+ (normalize e (lambda (x) x)))
  ; (pretty-print (list "Hitting e+ " e+))
  ;(displayln "-printed e+-")
  ;(pretty-print e+)
  (match e+
    [(? symbol? x) x]
    [`(let (prov ,_)
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
                   [else (let ([x (gensym 'a)]) `(let (prov ,anf) ([,x ,anf]) ,(k x)))]))))

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
    ;[`(app ,prov ,es ...) (normalize-aes es k)]
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
       `(lambda ,x+ (let (prov ,x+) ([,cx (prim car ,x+)]) (let (prov ,x) ([,x (prim cdr ,x+)]) ,(T e0 cx))))]
      [(? symbol? x) x]
      ; [`(,prov ...) prov]
      [`',dat `',dat]))
  (define (T e cae)
    ; (pretty-print (list e " and " cae))
    (if (not (symbol? cae))
        (let ([f (gensym 'f)]) `(let (prov ,cae) ([,f ,cae]) ,(T e f)))
        ; (match (p-dbg e)
        (match e
          ; [(? string? x) `(,cae ,x)]
          [(? symbol? x) `(,cae ,x)]
          ; [`(prim ,op ,aes ...)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ([,retx (prim ,op ,@aes)]) ,retx) cae)]
          ; [`(apply-prim ,prov ,op ,ae)
          ;  (define retx (gensym 'retprim))
          ;  (T `(let ,prov ([,retx (apply-prim ,op ,ae)]) ,retx) cae)]
          [`(let ,prov
              ([,x (apply-prim ,pr ,op ,ae)])
              ,e0)
           `(let ,prov
              ([,x (apply-prim ,pr ,op ,(T-ae ae))])
              ,(T e0 cae))]

          [`(let ,prov
              ([,x (prim ,pr ,op ,aes ...)])
              ,e0)
           `(let ,prov
              ([,x (prim ,pr ,op ,@(map T-ae aes))])
              ,(T e0 cae))]

          [`(let ,prov
              ([,x (lambda ,xs ,elam)])
              ,e0)
           `(let ,prov ([,x ,(T-ae `(lambda ,xs ,elam))]) ,(T e0 cae))]

          [`(let ,prov ([,x ',dat]) ,e0) `(let ,prov ([,x ',dat]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,(p-dbg dat)]) ,(T e0 cae))]
          ; [`(let ([,x ,(? string? dat)]) ,e0) `(let ([,x ,dat]) ,(T e0 cae))]
          ; [`(let ([,x ,rhs]) ,e0) (T (p-dbg rhs) `(lambda (,x) ,(T e0 cae)))]

          ; thowing away prov??
          [`(let ,prov ([,x ,rhs]) ,e0) (T rhs `(lambda (,x) ,(T e0 cae)))]
          
          [`(if ,prov ,ae ,e0 ,e1) `(if ,prov ,(T-ae ae) ,(T e0 cae) ,(T e1 cae))]
          [`(apply ,prov ,ae0 ,ae1)
           (define xlst (gensym 'cps-lst))
           `(let ,prov ([,xlst (prim cons ,cae ,(T-ae ae1))]) (apply ,prov ,(T-ae ae0) ,xlst))]
          [`(app ,prov ,fae ,args ...) `(app ,prov ,(T-ae fae) ,cae ,@(map T-ae args))]
          ; [`(,fae ,args ...) `(,(T-ae fae) ,cae ,@(map T-ae args))]
          )))
  (define (cps-convert-def def)
    (match def
      [`(define ,prov
          (,fname ,params ...)
          ,body)
       (define k (gensym 'kont))
       `(define ,prov (,fname ,k ,@params)
          ,(T body k))]
      [`(define ,prov
          (,fname . ,(? symbol? params))
          ,body)
       (define k (gensym 'kont))
       `(define ,prov (,fname . ,params)
          ,(T `(let ,prov ([,k (prim car ,params)]) (let ,prov ([,params (prim cdr ,params)]) ,body)) k))]))
  
  (map cps-convert-def program))

(define (T-bottom-up e)
  (match e
    ; [`(quote ,d) `(,(set) ,e ,(list))]
    [`(let ,prov ([,x ',dat]) ,e0)
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
    ; to fix
    [`(let ,prov ([,x (lambda (,xs ...) ,body)]) ,e0)
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
            ;  [`(define (,fx . ,xs)
            ;      ,body)
            ;   ;  (pretty-print (list fx xs))
            ;   ; (define facts-list (search-facts ast-root '(eval )))
            ;   (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
            ;   (define envx (gensym '_))
            ;   ; (pretty-print (list freevars procs+ fx envx xs))
            ;   `(,@pr+ ,@procs+ (proc (,fx ,envx . ,xs) ,body+))]
             [`(define ,prov (,fx . ,xs)
                 ,body)
              ;  (pretty-print (list fx xs))
              ; (define facts-list (search-facts ast-root '(eval )))
              (match-define `(,freevars ,body+ ,procs+) (T-bottom-up body))
              (define envx (gensym '_))
              ; (pretty-print (list freevars procs+ fx envx xs))
              `(,@pr+ ,@procs+ (proc ,prov (,fx ,envx . ,xs) ,body+))]))
         '()
         program))

; (define facts-list (search-facts ast-root '(eval)))
(define (count-params program fact-file)
  (define ast-root (read-facts fact-file))
  (define facts-list (search-facts ast-root '(eval)))
  (define actual-facts (index-to-facts facts-list ast-root))

  (define (fact-parser funcname) 
    (define (fact-unroll fact)
      (match fact
        [`(eval (app (ref call) ,params) ,env-sets ,halt)
          (- (length params) 1)]
        [_ 
          0]))
      (apply + (map fact-unroll actual-facts)))

  (define (counter prov)
    (match prov
      [`(prov (define (brouhaha_main) (,funcname ,params ...)))
        (fact-parser funcname)
        ; (length params)
        ]
      [_ 0]))
  
  (define (unbundle e)
    (match e
      [`(proc (,prov ...) 
              (,func ,vars ...)
              ,body) 
        (counter prov)]
      [_ 0]))
  
  (apply + (map unbundle program)))

; (define our-call
;   `((define (call num1 num2)
;       (let ([x num1] [y num2]) x))
;     (define (brouhaha_main)
;       (call 5 42))))

(define our-call
  '((proc
   (prov (define (+ . lst) (apply-prim + lst)))
   (+ _7491 . lst)
   (clo-app
    let
    (prov (define (+ . lst) (apply-prim + lst)))
    ((kont7376 (prim car lst)))
    (let (prov (define (+ . lst) (apply-prim + lst)))
      ((lst7479 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim + lst)) + lst))
        ((xy7278 (apply-prim (prov (apply-prim + lst)) + lst7479)))
        (kont7376 xy7278)))))
  (proc
   (prov (define (- . lst) (apply-prim - lst)))
   (- _7492 . lst)
   (clo-app
    let
    (prov (define (- . lst) (apply-prim - lst)))
    ((kont7377 (prim car lst)))
    (let (prov (define (- . lst) (apply-prim - lst)))
      ((lst7480 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim - lst)) - lst))
        ((xy7279 (apply-prim (prov (apply-prim - lst)) - lst7480)))
        (kont7377 xy7279)))))
  (proc
   (prov (define (* . lst) (apply-prim * lst)))
   (* _7493 . lst)
   (clo-app
    let
    (prov (define (* . lst) (apply-prim * lst)))
    ((kont7378 (prim car lst)))
    (let (prov (define (* . lst) (apply-prim * lst)))
      ((lst7481 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim * lst)) * lst))
        ((xy7280 (apply-prim (prov (apply-prim * lst)) * lst7481)))
        (kont7378 xy7280)))))
  (proc
   (prov (define (modulo a b) (prim modulo a b)))
   (modulo _7494 kont7379 a b)
   (clo-app
    let
    (prov (prim (prov (prim modulo a b)) modulo a b))
    ((xy7281 (prim (prov (prim modulo a b)) modulo a b)))
    (kont7379 xy7281)))
  (proc
   (prov (define (/ . lst) (apply-prim / lst)))
   (/ _7495 . lst)
   (clo-app
    let
    (prov (define (/ . lst) (apply-prim / lst)))
    ((kont7380 (prim car lst)))
    (let (prov (define (/ . lst) (apply-prim / lst)))
      ((lst7482 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim / lst)) / lst))
        ((xy7282 (apply-prim (prov (apply-prim / lst)) / lst7482)))
        (kont7380 xy7282)))))
  (proc
   (prov (define (= . lst) (apply-prim = lst)))
   (= _7496 . lst)
   (clo-app
    let
    (prov (define (= . lst) (apply-prim = lst)))
    ((kont7381 (prim car lst)))
    (let (prov (define (= . lst) (apply-prim = lst)))
      ((lst7483 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim = lst)) = lst))
        ((xy7283 (apply-prim (prov (apply-prim = lst)) = lst7483)))
        (kont7381 xy7283)))))
  (proc
   (prov (define (> . lst) (apply-prim > lst)))
   (> _7497 . lst)
   (clo-app
    let
    (prov (define (> . lst) (apply-prim > lst)))
    ((kont7382 (prim car lst)))
    (let (prov (define (> . lst) (apply-prim > lst)))
      ((lst7484 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim > lst)) > lst))
        ((xy7284 (apply-prim (prov (apply-prim > lst)) > lst7484)))
        (kont7382 xy7284)))))
  (proc
   (prov (define (< . lst) (apply-prim < lst)))
   (< _7498 . lst)
   (clo-app
    let
    (prov (define (< . lst) (apply-prim < lst)))
    ((kont7383 (prim car lst)))
    (let (prov (define (< . lst) (apply-prim < lst)))
      ((lst7485 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim < lst)) < lst))
        ((xy7285 (apply-prim (prov (apply-prim < lst)) < lst7485)))
        (kont7383 xy7285)))))
  (proc
   (prov (define (<= . lst) (apply-prim <= lst)))
   (<= _7499 . lst)
   (clo-app
    let
    (prov (define (<= . lst) (apply-prim <= lst)))
    ((kont7384 (prim car lst)))
    (let (prov (define (<= . lst) (apply-prim <= lst)))
      ((lst7486 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim <= lst)) <= lst))
        ((xy7286 (apply-prim (prov (apply-prim <= lst)) <= lst7486)))
        (kont7384 xy7286)))))
  (proc
   (prov (define (>= . lst) (apply-prim >= lst)))
   (>= _7500 . lst)
   (clo-app
    let
    (prov (define (>= . lst) (apply-prim >= lst)))
    ((kont7385 (prim car lst)))
    (let (prov (define (>= . lst) (apply-prim >= lst)))
      ((lst7487 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim >= lst)) >= lst))
        ((xy7287 (apply-prim (prov (apply-prim >= lst)) >= lst7487)))
        (kont7385 xy7287)))))
  (proc
   (prov (define (null? x) (prim null? x)))
   (null? _7501 kont7386 x)
   (clo-app
    let
    (prov (prim (prov (prim null? x)) null? x))
    ((xy7288 (prim (prov (prim null? x)) null? x)))
    (kont7386 xy7288)))
  (proc
   (prov (define (equal? x y) (prim equal? x y)))
   (equal? _7502 kont7387 x y)
   (clo-app
    let
    (prov (prim (prov (prim equal? x y)) equal? x y))
    ((xy7289 (prim (prov (prim equal? x y)) equal? x y)))
    (kont7387 xy7289)))
  (proc
   (prov (define (eq? x y) (prim eq? x y)))
   (eq? _7503 kont7388 x y)
   (clo-app
    let
    (prov (prim (prov (prim eq? x y)) eq? x y))
    ((xy7290 (prim (prov (prim eq? x y)) eq? x y)))
    (kont7388 xy7290)))
  (proc
   (prov (define (cons a b) (prim cons a b)))
   (cons _7504 kont7389 a b)
   (clo-app
    let
    (prov (prim (prov (prim cons a b)) cons a b))
    ((xy7291 (prim (prov (prim cons a b)) cons a b)))
    (kont7389 xy7291)))
  (proc
   (prov (define (car lst) (prim car lst)))
   (car _7505 kont7390 lst)
   (clo-app
    let
    (prov (prim (prov (prim car lst)) car lst))
    ((xy7292 (prim (prov (prim car lst)) car lst)))
    (kont7390 xy7292)))
  (proc
   (prov (define (cdr lst) (prim cdr lst)))
   (cdr _7506 kont7391 lst)
   (clo-app
    let
    (prov (prim (prov (prim cdr lst)) cdr lst))
    ((xy7293 (prim (prov (prim cdr lst)) cdr lst)))
    (kont7391 xy7293)))
  (proc
   (lam7507 env7508 a7296)
   (let ((app (env-ref env7508 5)))
     (let ((equal? (env-ref env7508 4)))
       (let ((a7294 (env-ref env7508 3)))
         (let ((kont7392 (env-ref env7508 2)))
           (let (((prov (equal? 0 (modulo x 2))) (env-ref env7508 1)))
             (clo-app
              app
              (prov (equal? 0 (modulo x 2)))
              equal?
              kont7392
              a7294
              a7296)))))))
  (proc
   (prov (define (even? x) (equal? 0 (modulo x 2))))
   (even? _7511 kont7392 x)
   (let ((a7294 '0))
     (let ((a7295 '2))
       (let ((f7393
              (make-closure
               lam7507
               (prov (equal? 0 (modulo x 2)))
               kont7392
               a7294
               equal?
               app)))
         (clo-app app (prov (modulo x 2)) modulo f7393 x a7295)))))
  (proc
   (lam7512 env7513 a7299)
   (let ((app (env-ref env7513 5)))
     (let ((equal? (env-ref env7513 4)))
       (let (((prov (equal? 1 (modulo x 2))) (env-ref env7513 3)))
         (let ((a7297 (env-ref env7513 2)))
           (let ((kont7394 (env-ref env7513 1)))
             (clo-app
              app
              (prov (equal? 1 (modulo x 2)))
              equal?
              kont7394
              a7297
              a7299)))))))
  (proc
   (prov (define (odd? x) (equal? 1 (modulo x 2))))
   (odd? _7516 kont7394 x)
   (let ((a7297 '1))
     (let ((a7298 '2))
       (let ((f7395
              (make-closure
               lam7512
               kont7394
               a7297
               (prov (equal? 1 (modulo x 2)))
               equal?
               app)))
         (clo-app app (prov (modulo x 2)) modulo f7395 x a7298)))))
  (proc
   (prov (define (list . x) x))
   (list _7517 . x)
   (clo-app
    let
    (prov (define (list . x) x))
    ((kont7396 (prim car x)))
    (let (prov (define (list . x) x))
      ((x7488 (prim cdr x)))
      (kont7396 x7488))))
  (proc
   (prov (define (float->int val) (prim inexact->exact val)))
   (float->int _7518 kont7397 val)
   (clo-app
    let
    (prov (prim (prov (prim inexact->exact val)) inexact->exact val))
    ((xy7300 (prim (prov (prim inexact->exact val)) inexact->exact val)))
    (kont7397 xy7300)))
  (proc
   (prov (define (int->float val) (prim exact->inexact val)))
   (int->float _7519 kont7398 val)
   (clo-app
    let
    (prov (prim (prov (prim exact->inexact val)) exact->inexact val))
    ((xy7301 (prim (prov (prim exact->inexact val)) exact->inexact val)))
    (kont7398 xy7301)))
  (proc
   (lam7520 env7521 a7302)
   (let (((prov
           (if (null? lst)
             #f
             (if (equal? (car lst) x) #t (member? x (cdr lst)))))
          (env-ref env7521 4)))
     (let ((if (env-ref env7521 3)))
       (let (((let (prov
                    (lambda (a7304)
                      (let (prov
                            (lambda (a7305)
                              (if (prov
                                   (if (equal? (car lst) x)
                                     #t
                                     (member? x (cdr lst))))
                                a7305
                                (let (prov '#t)
                                  ((xy7306 '#t))
                                  (kont7399 xy7306))
                                (let (prov
                                      (lambda (a7307)
                                        (app
                                         (prov (member? x (cdr lst)))
                                         member?
                                         kont7399
                                         x
                                         a7307)))
                                  ((f7400
                                    (lambda (a7307)
                                      (app
                                       (prov (member? x (cdr lst)))
                                       member?
                                       kont7399
                                       x
                                       a7307))))
                                  (app (prov (cdr lst)) cdr f7400 lst)))))
                        ((f7401
                          (lambda (a7305)
                            (if (prov
                                 (if (equal? (car lst) x)
                                   #t
                                   (member? x (cdr lst))))
                              a7305
                              (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                              (let (prov
                                    (lambda (a7307)
                                      (app
                                       (prov (member? x (cdr lst)))
                                       member?
                                       kont7399
                                       x
                                       a7307)))
                                ((f7400
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307))))
                                (app (prov (cdr lst)) cdr f7400 lst))))))
                        (app
                         (prov (equal? (car lst) x))
                         equal?
                         f7401
                         a7304
                         x))))
                ((f7402
                  (lambda (a7304)
                    (let (prov
                          (lambda (a7305)
                            (if (prov
                                 (if (equal? (car lst) x)
                                   #t
                                   (member? x (cdr lst))))
                              a7305
                              (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                              (let (prov
                                    (lambda (a7307)
                                      (app
                                       (prov (member? x (cdr lst)))
                                       member?
                                       kont7399
                                       x
                                       a7307)))
                                ((f7400
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307))))
                                (app (prov (cdr lst)) cdr f7400 lst)))))
                      ((f7401
                        (lambda (a7305)
                          (if (prov
                               (if (equal? (car lst) x)
                                 #t
                                 (member? x (cdr lst))))
                            a7305
                            (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                            (let (prov
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307)))
                              ((f7400
                                (lambda (a7307)
                                  (app
                                   (prov (member? x (cdr lst)))
                                   member?
                                   kont7399
                                   x
                                   a7307))))
                              (app (prov (cdr lst)) cdr f7400 lst))))))
                      (app
                       (prov (equal? (car lst) x))
                       equal?
                       f7401
                       a7304
                       x)))))
                (app (prov (car lst)) car f7402 lst))
              (env-ref env7521 2)))
         (let (((let (prov '#f) ((xy7303 '#f)) (kont7399 xy7303))
                (env-ref env7521 1)))
           (clo-app
            if
            (prov
             (if (null? lst)
               #f
               (if (equal? (car lst) x) #t (member? x (cdr lst)))))
            a7302
            (let (prov '#f) ((xy7303 '#f)) (kont7399 xy7303))
            (let (prov
                  (lambda (a7304)
                    (let (prov
                          (lambda (a7305)
                            (if (prov
                                 (if (equal? (car lst) x)
                                   #t
                                   (member? x (cdr lst))))
                              a7305
                              (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                              (let (prov
                                    (lambda (a7307)
                                      (app
                                       (prov (member? x (cdr lst)))
                                       member?
                                       kont7399
                                       x
                                       a7307)))
                                ((f7400
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307))))
                                (app (prov (cdr lst)) cdr f7400 lst)))))
                      ((f7401
                        (lambda (a7305)
                          (if (prov
                               (if (equal? (car lst) x)
                                 #t
                                 (member? x (cdr lst))))
                            a7305
                            (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                            (let (prov
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307)))
                              ((f7400
                                (lambda (a7307)
                                  (app
                                   (prov (member? x (cdr lst)))
                                   member?
                                   kont7399
                                   x
                                   a7307))))
                              (app (prov (cdr lst)) cdr f7400 lst))))))
                      (app (prov (equal? (car lst) x)) equal? f7401 a7304 x))))
              ((f7402
                (lambda (a7304)
                  (let (prov
                        (lambda (a7305)
                          (if (prov
                               (if (equal? (car lst) x)
                                 #t
                                 (member? x (cdr lst))))
                            a7305
                            (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                            (let (prov
                                  (lambda (a7307)
                                    (app
                                     (prov (member? x (cdr lst)))
                                     member?
                                     kont7399
                                     x
                                     a7307)))
                              ((f7400
                                (lambda (a7307)
                                  (app
                                   (prov (member? x (cdr lst)))
                                   member?
                                   kont7399
                                   x
                                   a7307))))
                              (app (prov (cdr lst)) cdr f7400 lst)))))
                    ((f7401
                      (lambda (a7305)
                        (if (prov
                             (if (equal? (car lst) x)
                               #t
                               (member? x (cdr lst))))
                          a7305
                          (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                          (let (prov
                                (lambda (a7307)
                                  (app
                                   (prov (member? x (cdr lst)))
                                   member?
                                   kont7399
                                   x
                                   a7307)))
                            ((f7400
                              (lambda (a7307)
                                (app
                                 (prov (member? x (cdr lst)))
                                 member?
                                 kont7399
                                 x
                                 a7307))))
                            (app (prov (cdr lst)) cdr f7400 lst))))))
                    (app (prov (equal? (car lst) x)) equal? f7401 a7304 x)))))
              (app (prov (car lst)) car f7402 lst))))))))
  (proc
   (prov
    (define (member? x lst)
      (if (null? lst) #f (if (equal? (car lst) x) #t (member? x (cdr lst))))))
   (member? _7522 kont7399 x lst)
   (let ((f7403
          (make-closure
           lam7520
           (let (prov '#f) ((xy7303 '#f)) (kont7399 xy7303))
           (let (prov
                 (lambda (a7304)
                   (let (prov
                         (lambda (a7305)
                           (if (prov
                                (if (equal? (car lst) x)
                                  #t
                                  (member? x (cdr lst))))
                             a7305
                             (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                             (let (prov
                                   (lambda (a7307)
                                     (app
                                      (prov (member? x (cdr lst)))
                                      member?
                                      kont7399
                                      x
                                      a7307)))
                               ((f7400
                                 (lambda (a7307)
                                   (app
                                    (prov (member? x (cdr lst)))
                                    member?
                                    kont7399
                                    x
                                    a7307))))
                               (app (prov (cdr lst)) cdr f7400 lst)))))
                     ((f7401
                       (lambda (a7305)
                         (if (prov
                              (if (equal? (car lst) x)
                                #t
                                (member? x (cdr lst))))
                           a7305
                           (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                           (let (prov
                                 (lambda (a7307)
                                   (app
                                    (prov (member? x (cdr lst)))
                                    member?
                                    kont7399
                                    x
                                    a7307)))
                             ((f7400
                               (lambda (a7307)
                                 (app
                                  (prov (member? x (cdr lst)))
                                  member?
                                  kont7399
                                  x
                                  a7307))))
                             (app (prov (cdr lst)) cdr f7400 lst))))))
                     (app (prov (equal? (car lst) x)) equal? f7401 a7304 x))))
             ((f7402
               (lambda (a7304)
                 (let (prov
                       (lambda (a7305)
                         (if (prov
                              (if (equal? (car lst) x)
                                #t
                                (member? x (cdr lst))))
                           a7305
                           (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                           (let (prov
                                 (lambda (a7307)
                                   (app
                                    (prov (member? x (cdr lst)))
                                    member?
                                    kont7399
                                    x
                                    a7307)))
                             ((f7400
                               (lambda (a7307)
                                 (app
                                  (prov (member? x (cdr lst)))
                                  member?
                                  kont7399
                                  x
                                  a7307))))
                             (app (prov (cdr lst)) cdr f7400 lst)))))
                   ((f7401
                     (lambda (a7305)
                       (if (prov
                            (if (equal? (car lst) x) #t (member? x (cdr lst))))
                         a7305
                         (let (prov '#t) ((xy7306 '#t)) (kont7399 xy7306))
                         (let (prov
                               (lambda (a7307)
                                 (app
                                  (prov (member? x (cdr lst)))
                                  member?
                                  kont7399
                                  x
                                  a7307)))
                           ((f7400
                             (lambda (a7307)
                               (app
                                (prov (member? x (cdr lst)))
                                member?
                                kont7399
                                x
                                a7307))))
                           (app (prov (cdr lst)) cdr f7400 lst))))))
                   (app (prov (equal? (car lst) x)) equal? f7401 a7304 x)))))
             (app (prov (car lst)) car f7402 lst))
           if
           (prov
            (if (null? lst)
              #f
              (if (equal? (car lst) x) #t (member? x (cdr lst))))))))
     (clo-app app (prov (null? lst)) null? f7403 lst)))
  (proc
   (lam7523 env7524 a7308)
   (let ((if (env-ref env7524 4)))
     (let (((let (prov
                  (lambda (a7309)
                    (let (prov
                          (lambda (a7310)
                            (let (prov
                                  (lambda (a7311)
                                    (app
                                     (prov
                                      (foldl
                                       fun
                                       (fun (car lst) acc)
                                       (cdr lst)))
                                     foldl
                                     kont7404
                                     fun
                                     a7310
                                     a7311)))
                              ((f7405
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311))))
                              (app (prov (cdr lst)) cdr f7405 lst))))
                      ((f7406
                        (lambda (a7310)
                          (let (prov
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311)))
                            ((f7405
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311))))
                            (app (prov (cdr lst)) cdr f7405 lst)))))
                      (app (prov (fun (car lst) acc)) fun f7406 a7309 acc))))
              ((f7407
                (lambda (a7309)
                  (let (prov
                        (lambda (a7310)
                          (let (prov
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311)))
                            ((f7405
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311))))
                            (app (prov (cdr lst)) cdr f7405 lst))))
                    ((f7406
                      (lambda (a7310)
                        (let (prov
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311)))
                          ((f7405
                            (lambda (a7311)
                              (app
                               (prov (foldl fun (fun (car lst) acc) (cdr lst)))
                               foldl
                               kont7404
                               fun
                               a7310
                               a7311))))
                          (app (prov (cdr lst)) cdr f7405 lst)))))
                    (app (prov (fun (car lst) acc)) fun f7406 a7309 acc)))))
              (app (prov (car lst)) car f7407 lst))
            (env-ref env7524 3)))
       (let (((kont7404 acc) (env-ref env7524 2)))
         (let (((prov
                 (if (null? lst)
                   acc
                   (foldl fun (fun (car lst) acc) (cdr lst))))
                (env-ref env7524 1)))
           (clo-app
            if
            (prov
             (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst))))
            a7308
            (kont7404 acc)
            (let (prov
                  (lambda (a7309)
                    (let (prov
                          (lambda (a7310)
                            (let (prov
                                  (lambda (a7311)
                                    (app
                                     (prov
                                      (foldl
                                       fun
                                       (fun (car lst) acc)
                                       (cdr lst)))
                                     foldl
                                     kont7404
                                     fun
                                     a7310
                                     a7311)))
                              ((f7405
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311))))
                              (app (prov (cdr lst)) cdr f7405 lst))))
                      ((f7406
                        (lambda (a7310)
                          (let (prov
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311)))
                            ((f7405
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311))))
                            (app (prov (cdr lst)) cdr f7405 lst)))))
                      (app (prov (fun (car lst) acc)) fun f7406 a7309 acc))))
              ((f7407
                (lambda (a7309)
                  (let (prov
                        (lambda (a7310)
                          (let (prov
                                (lambda (a7311)
                                  (app
                                   (prov
                                    (foldl fun (fun (car lst) acc) (cdr lst)))
                                   foldl
                                   kont7404
                                   fun
                                   a7310
                                   a7311)))
                            ((f7405
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311))))
                            (app (prov (cdr lst)) cdr f7405 lst))))
                    ((f7406
                      (lambda (a7310)
                        (let (prov
                              (lambda (a7311)
                                (app
                                 (prov
                                  (foldl fun (fun (car lst) acc) (cdr lst)))
                                 foldl
                                 kont7404
                                 fun
                                 a7310
                                 a7311)))
                          ((f7405
                            (lambda (a7311)
                              (app
                               (prov (foldl fun (fun (car lst) acc) (cdr lst)))
                               foldl
                               kont7404
                               fun
                               a7310
                               a7311))))
                          (app (prov (cdr lst)) cdr f7405 lst)))))
                    (app (prov (fun (car lst) acc)) fun f7406 a7309 acc)))))
              (app (prov (car lst)) car f7407 lst))))))))
  (proc
   (prov
    (define (foldl fun acc lst)
      (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst)))))
   (foldl _7525 kont7404 fun acc lst)
   (let ((f7408
          (make-closure
           lam7523
           (prov
            (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst))))
           (kont7404 acc)
           (let (prov
                 (lambda (a7309)
                   (let (prov
                         (lambda (a7310)
                           (let (prov
                                 (lambda (a7311)
                                   (app
                                    (prov
                                     (foldl fun (fun (car lst) acc) (cdr lst)))
                                    foldl
                                    kont7404
                                    fun
                                    a7310
                                    a7311)))
                             ((f7405
                               (lambda (a7311)
                                 (app
                                  (prov
                                   (foldl fun (fun (car lst) acc) (cdr lst)))
                                  foldl
                                  kont7404
                                  fun
                                  a7310
                                  a7311))))
                             (app (prov (cdr lst)) cdr f7405 lst))))
                     ((f7406
                       (lambda (a7310)
                         (let (prov
                               (lambda (a7311)
                                 (app
                                  (prov
                                   (foldl fun (fun (car lst) acc) (cdr lst)))
                                  foldl
                                  kont7404
                                  fun
                                  a7310
                                  a7311)))
                           ((f7405
                             (lambda (a7311)
                               (app
                                (prov
                                 (foldl fun (fun (car lst) acc) (cdr lst)))
                                foldl
                                kont7404
                                fun
                                a7310
                                a7311))))
                           (app (prov (cdr lst)) cdr f7405 lst)))))
                     (app (prov (fun (car lst) acc)) fun f7406 a7309 acc))))
             ((f7407
               (lambda (a7309)
                 (let (prov
                       (lambda (a7310)
                         (let (prov
                               (lambda (a7311)
                                 (app
                                  (prov
                                   (foldl fun (fun (car lst) acc) (cdr lst)))
                                  foldl
                                  kont7404
                                  fun
                                  a7310
                                  a7311)))
                           ((f7405
                             (lambda (a7311)
                               (app
                                (prov
                                 (foldl fun (fun (car lst) acc) (cdr lst)))
                                foldl
                                kont7404
                                fun
                                a7310
                                a7311))))
                           (app (prov (cdr lst)) cdr f7405 lst))))
                   ((f7406
                     (lambda (a7310)
                       (let (prov
                             (lambda (a7311)
                               (app
                                (prov
                                 (foldl fun (fun (car lst) acc) (cdr lst)))
                                foldl
                                kont7404
                                fun
                                a7310
                                a7311)))
                         ((f7405
                           (lambda (a7311)
                             (app
                              (prov (foldl fun (fun (car lst) acc) (cdr lst)))
                              foldl
                              kont7404
                              fun
                              a7310
                              a7311))))
                         (app (prov (cdr lst)) cdr f7405 lst)))))
                   (app (prov (fun (car lst) acc)) fun f7406 a7309 acc)))))
             (app (prov (car lst)) car f7407 lst))
           if)))
     (clo-app app (prov (null? lst)) null? f7408 lst)))
  (proc
   (lam7526 env7527 a7312)
   (let (((prov
           (if (null? lst)
             lst2
             (reverse-helper (cdr lst) (cons (car lst) lst2))))
          (env-ref env7527 4)))
     (let ((if (env-ref env7527 3)))
       (let (((kont7409 lst2) (env-ref env7527 2)))
         (let (((let (prov
                      (lambda (a7313)
                        (let (prov
                              (lambda (a7314)
                                (let (prov
                                      (lambda (a7315)
                                        (app
                                         (prov
                                          (reverse-helper
                                           (cdr lst)
                                           (cons (car lst) lst2)))
                                         reverse-helper
                                         kont7409
                                         a7313
                                         a7315)))
                                  ((f7410
                                    (lambda (a7315)
                                      (app
                                       (prov
                                        (reverse-helper
                                         (cdr lst)
                                         (cons (car lst) lst2)))
                                       reverse-helper
                                       kont7409
                                       a7313
                                       a7315))))
                                  (app
                                   (prov (cons (car lst) lst2))
                                   cons
                                   f7410
                                   a7314
                                   lst2))))
                          ((f7411
                            (lambda (a7314)
                              (let (prov
                                    (lambda (a7315)
                                      (app
                                       (prov
                                        (reverse-helper
                                         (cdr lst)
                                         (cons (car lst) lst2)))
                                       reverse-helper
                                       kont7409
                                       a7313
                                       a7315)))
                                ((f7410
                                  (lambda (a7315)
                                    (app
                                     (prov
                                      (reverse-helper
                                       (cdr lst)
                                       (cons (car lst) lst2)))
                                     reverse-helper
                                     kont7409
                                     a7313
                                     a7315))))
                                (app
                                 (prov (cons (car lst) lst2))
                                 cons
                                 f7410
                                 a7314
                                 lst2)))))
                          (app (prov (car lst)) car f7411 lst))))
                  ((f7412
                    (lambda (a7313)
                      (let (prov
                            (lambda (a7314)
                              (let (prov
                                    (lambda (a7315)
                                      (app
                                       (prov
                                        (reverse-helper
                                         (cdr lst)
                                         (cons (car lst) lst2)))
                                       reverse-helper
                                       kont7409
                                       a7313
                                       a7315)))
                                ((f7410
                                  (lambda (a7315)
                                    (app
                                     (prov
                                      (reverse-helper
                                       (cdr lst)
                                       (cons (car lst) lst2)))
                                     reverse-helper
                                     kont7409
                                     a7313
                                     a7315))))
                                (app
                                 (prov (cons (car lst) lst2))
                                 cons
                                 f7410
                                 a7314
                                 lst2))))
                        ((f7411
                          (lambda (a7314)
                            (let (prov
                                  (lambda (a7315)
                                    (app
                                     (prov
                                      (reverse-helper
                                       (cdr lst)
                                       (cons (car lst) lst2)))
                                     reverse-helper
                                     kont7409
                                     a7313
                                     a7315)))
                              ((f7410
                                (lambda (a7315)
                                  (app
                                   (prov
                                    (reverse-helper
                                     (cdr lst)
                                     (cons (car lst) lst2)))
                                   reverse-helper
                                   kont7409
                                   a7313
                                   a7315))))
                              (app
                               (prov (cons (car lst) lst2))
                               cons
                               f7410
                               a7314
                               lst2)))))
                        (app (prov (car lst)) car f7411 lst)))))
                  (app (prov (cdr lst)) cdr f7412 lst))
                (env-ref env7527 1)))
           (clo-app
            if
            (prov
             (if (null? lst)
               lst2
               (reverse-helper (cdr lst) (cons (car lst) lst2))))
            a7312
            (kont7409 lst2)
            (let (prov
                  (lambda (a7313)
                    (let (prov
                          (lambda (a7314)
                            (let (prov
                                  (lambda (a7315)
                                    (app
                                     (prov
                                      (reverse-helper
                                       (cdr lst)
                                       (cons (car lst) lst2)))
                                     reverse-helper
                                     kont7409
                                     a7313
                                     a7315)))
                              ((f7410
                                (lambda (a7315)
                                  (app
                                   (prov
                                    (reverse-helper
                                     (cdr lst)
                                     (cons (car lst) lst2)))
                                   reverse-helper
                                   kont7409
                                   a7313
                                   a7315))))
                              (app
                               (prov (cons (car lst) lst2))
                               cons
                               f7410
                               a7314
                               lst2))))
                      ((f7411
                        (lambda (a7314)
                          (let (prov
                                (lambda (a7315)
                                  (app
                                   (prov
                                    (reverse-helper
                                     (cdr lst)
                                     (cons (car lst) lst2)))
                                   reverse-helper
                                   kont7409
                                   a7313
                                   a7315)))
                            ((f7410
                              (lambda (a7315)
                                (app
                                 (prov
                                  (reverse-helper
                                   (cdr lst)
                                   (cons (car lst) lst2)))
                                 reverse-helper
                                 kont7409
                                 a7313
                                 a7315))))
                            (app
                             (prov (cons (car lst) lst2))
                             cons
                             f7410
                             a7314
                             lst2)))))
                      (app (prov (car lst)) car f7411 lst))))
              ((f7412
                (lambda (a7313)
                  (let (prov
                        (lambda (a7314)
                          (let (prov
                                (lambda (a7315)
                                  (app
                                   (prov
                                    (reverse-helper
                                     (cdr lst)
                                     (cons (car lst) lst2)))
                                   reverse-helper
                                   kont7409
                                   a7313
                                   a7315)))
                            ((f7410
                              (lambda (a7315)
                                (app
                                 (prov
                                  (reverse-helper
                                   (cdr lst)
                                   (cons (car lst) lst2)))
                                 reverse-helper
                                 kont7409
                                 a7313
                                 a7315))))
                            (app
                             (prov (cons (car lst) lst2))
                             cons
                             f7410
                             a7314
                             lst2))))
                    ((f7411
                      (lambda (a7314)
                        (let (prov
                              (lambda (a7315)
                                (app
                                 (prov
                                  (reverse-helper
                                   (cdr lst)
                                   (cons (car lst) lst2)))
                                 reverse-helper
                                 kont7409
                                 a7313
                                 a7315)))
                          ((f7410
                            (lambda (a7315)
                              (app
                               (prov
                                (reverse-helper
                                 (cdr lst)
                                 (cons (car lst) lst2)))
                               reverse-helper
                               kont7409
                               a7313
                               a7315))))
                          (app
                           (prov (cons (car lst) lst2))
                           cons
                           f7410
                           a7314
                           lst2)))))
                    (app (prov (car lst)) car f7411 lst)))))
              (app (prov (cdr lst)) cdr f7412 lst))))))))
  (proc
   (prov
    (define (reverse-helper lst lst2)
      (if (null? lst) lst2 (reverse-helper (cdr lst) (cons (car lst) lst2)))))
   (reverse-helper _7528 kont7409 lst lst2)
   (let ((f7413
          (make-closure
           lam7526
           (let (prov
                 (lambda (a7313)
                   (let (prov
                         (lambda (a7314)
                           (let (prov
                                 (lambda (a7315)
                                   (app
                                    (prov
                                     (reverse-helper
                                      (cdr lst)
                                      (cons (car lst) lst2)))
                                    reverse-helper
                                    kont7409
                                    a7313
                                    a7315)))
                             ((f7410
                               (lambda (a7315)
                                 (app
                                  (prov
                                   (reverse-helper
                                    (cdr lst)
                                    (cons (car lst) lst2)))
                                  reverse-helper
                                  kont7409
                                  a7313
                                  a7315))))
                             (app
                              (prov (cons (car lst) lst2))
                              cons
                              f7410
                              a7314
                              lst2))))
                     ((f7411
                       (lambda (a7314)
                         (let (prov
                               (lambda (a7315)
                                 (app
                                  (prov
                                   (reverse-helper
                                    (cdr lst)
                                    (cons (car lst) lst2)))
                                  reverse-helper
                                  kont7409
                                  a7313
                                  a7315)))
                           ((f7410
                             (lambda (a7315)
                               (app
                                (prov
                                 (reverse-helper
                                  (cdr lst)
                                  (cons (car lst) lst2)))
                                reverse-helper
                                kont7409
                                a7313
                                a7315))))
                           (app
                            (prov (cons (car lst) lst2))
                            cons
                            f7410
                            a7314
                            lst2)))))
                     (app (prov (car lst)) car f7411 lst))))
             ((f7412
               (lambda (a7313)
                 (let (prov
                       (lambda (a7314)
                         (let (prov
                               (lambda (a7315)
                                 (app
                                  (prov
                                   (reverse-helper
                                    (cdr lst)
                                    (cons (car lst) lst2)))
                                  reverse-helper
                                  kont7409
                                  a7313
                                  a7315)))
                           ((f7410
                             (lambda (a7315)
                               (app
                                (prov
                                 (reverse-helper
                                  (cdr lst)
                                  (cons (car lst) lst2)))
                                reverse-helper
                                kont7409
                                a7313
                                a7315))))
                           (app
                            (prov (cons (car lst) lst2))
                            cons
                            f7410
                            a7314
                            lst2))))
                   ((f7411
                     (lambda (a7314)
                       (let (prov
                             (lambda (a7315)
                               (app
                                (prov
                                 (reverse-helper
                                  (cdr lst)
                                  (cons (car lst) lst2)))
                                reverse-helper
                                kont7409
                                a7313
                                a7315)))
                         ((f7410
                           (lambda (a7315)
                             (app
                              (prov
                               (reverse-helper
                                (cdr lst)
                                (cons (car lst) lst2)))
                              reverse-helper
                              kont7409
                              a7313
                              a7315))))
                         (app
                          (prov (cons (car lst) lst2))
                          cons
                          f7410
                          a7314
                          lst2)))))
                   (app (prov (car lst)) car f7411 lst)))))
             (app (prov (cdr lst)) cdr f7412 lst))
           (kont7409 lst2)
           if
           (prov
            (if (null? lst)
              lst2
              (reverse-helper (cdr lst) (cons (car lst) lst2)))))))
     (clo-app app (prov (null? lst)) null? f7413 lst)))
  (proc
   (lam7529 env7530 a7316)
   (let ((lst (env-ref env7530 5)))
     (let ((reverse-helper (env-ref env7530 4)))
       (let (((prov (reverse-helper lst (list))) (env-ref env7530 3)))
         (let ((app (env-ref env7530 2)))
           (let ((kont7414 (env-ref env7530 1)))
             (clo-app
              app
              (prov (reverse-helper lst (list)))
              reverse-helper
              kont7414
              lst
              a7316)))))))
  (proc
   (prov (define (reverse lst) (reverse-helper lst (list))))
   (reverse _7531 kont7414 lst)
   (let ((f7415
          (make-closure
           lam7529
           kont7414
           app
           (prov (reverse-helper lst (list)))
           reverse-helper
           lst)))
     (clo-app app (prov (list)) list f7415)))
  (proc
   (lam7532 env7533 a7318)
   (let (((let (prov
                (lambda (a7320)
                  (let (prov '1)
                    ((a7321 '1))
                    (let (prov
                          (lambda (a7322)
                            (let (prov
                                  (lambda (a7323)
                                    (let (prov
                                          (lambda (a7324)
                                            (app
                                             (prov
                                              (take-helper
                                               (cdr lst)
                                               (- n 1)
                                               (cons (car lst) lst2)))
                                             take-helper
                                             kont7416
                                             a7320
                                             a7322
                                             a7324)))
                                      ((f7418
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324))))
                                      (app
                                       (prov (cons (car lst) lst2))
                                       cons
                                       f7418
                                       a7323
                                       lst2))))
                              ((f7419
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2)))))
                              (app (prov (car lst)) car f7419 lst))))
                      ((f7420
                        (lambda (a7322)
                          (let (prov
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2))))
                            ((f7419
                              (lambda (a7323)
                                (let (prov
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324)))
                                  ((f7418
                                    (lambda (a7324)
                                      (app
                                       (prov
                                        (take-helper
                                         (cdr lst)
                                         (- n 1)
                                         (cons (car lst) lst2)))
                                       take-helper
                                       kont7416
                                       a7320
                                       a7322
                                       a7324))))
                                  (app
                                   (prov (cons (car lst) lst2))
                                   cons
                                   f7418
                                   a7323
                                   lst2)))))
                            (app (prov (car lst)) car f7419 lst)))))
                      (app (prov (- n 1)) - f7420 n a7321)))))
            ((f7421
              (lambda (a7320)
                (let (prov '1)
                  ((a7321 '1))
                  (let (prov
                        (lambda (a7322)
                          (let (prov
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2))))
                            ((f7419
                              (lambda (a7323)
                                (let (prov
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324)))
                                  ((f7418
                                    (lambda (a7324)
                                      (app
                                       (prov
                                        (take-helper
                                         (cdr lst)
                                         (- n 1)
                                         (cons (car lst) lst2)))
                                       take-helper
                                       kont7416
                                       a7320
                                       a7322
                                       a7324))))
                                  (app
                                   (prov (cons (car lst) lst2))
                                   cons
                                   f7418
                                   a7323
                                   lst2)))))
                            (app (prov (car lst)) car f7419 lst))))
                    ((f7420
                      (lambda (a7322)
                        (let (prov
                              (lambda (a7323)
                                (let (prov
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324)))
                                  ((f7418
                                    (lambda (a7324)
                                      (app
                                       (prov
                                        (take-helper
                                         (cdr lst)
                                         (- n 1)
                                         (cons (car lst) lst2)))
                                       take-helper
                                       kont7416
                                       a7320
                                       a7322
                                       a7324))))
                                  (app
                                   (prov (cons (car lst) lst2))
                                   cons
                                   f7418
                                   a7323
                                   lst2))))
                          ((f7419
                            (lambda (a7323)
                              (let (prov
                                    (lambda (a7324)
                                      (app
                                       (prov
                                        (take-helper
                                         (cdr lst)
                                         (- n 1)
                                         (cons (car lst) lst2)))
                                       take-helper
                                       kont7416
                                       a7320
                                       a7322
                                       a7324)))
                                ((f7418
                                  (lambda (a7324)
                                    (app
                                     (prov
                                      (take-helper
                                       (cdr lst)
                                       (- n 1)
                                       (cons (car lst) lst2)))
                                     take-helper
                                     kont7416
                                     a7320
                                     a7322
                                     a7324))))
                                (app
                                 (prov (cons (car lst) lst2))
                                 cons
                                 f7418
                                 a7323
                                 lst2)))))
                          (app (prov (car lst)) car f7419 lst)))))
                    (app (prov (- n 1)) - f7420 n a7321))))))
            (app (prov (cdr lst)) cdr f7421 lst))
          (env-ref env7533 4)))
     (let (((let (prov (lambda (xy7319) (kont7416 xy7319)))
              ((f7417 (lambda (xy7319) (kont7416 xy7319))))
              (app (prov (reverse lst2)) reverse f7417 lst2))
            (env-ref env7533 3)))
       (let ((if (env-ref env7533 2)))
         (let (((prov
                 (if (= n 0)
                   (reverse lst2)
                   (take-helper (cdr lst) (- n 1) (cons (car lst) lst2))))
                (env-ref env7533 1)))
           (clo-app
            if
            (prov
             (if (= n 0)
               (reverse lst2)
               (take-helper (cdr lst) (- n 1) (cons (car lst) lst2))))
            a7318
            (let (prov (lambda (xy7319) (kont7416 xy7319)))
              ((f7417 (lambda (xy7319) (kont7416 xy7319))))
              (app (prov (reverse lst2)) reverse f7417 lst2))
            (let (prov
                  (lambda (a7320)
                    (let (prov '1)
                      ((a7321 '1))
                      (let (prov
                            (lambda (a7322)
                              (let (prov
                                    (lambda (a7323)
                                      (let (prov
                                            (lambda (a7324)
                                              (app
                                               (prov
                                                (take-helper
                                                 (cdr lst)
                                                 (- n 1)
                                                 (cons (car lst) lst2)))
                                               take-helper
                                               kont7416
                                               a7320
                                               a7322
                                               a7324)))
                                        ((f7418
                                          (lambda (a7324)
                                            (app
                                             (prov
                                              (take-helper
                                               (cdr lst)
                                               (- n 1)
                                               (cons (car lst) lst2)))
                                             take-helper
                                             kont7416
                                             a7320
                                             a7322
                                             a7324))))
                                        (app
                                         (prov (cons (car lst) lst2))
                                         cons
                                         f7418
                                         a7323
                                         lst2))))
                                ((f7419
                                  (lambda (a7323)
                                    (let (prov
                                          (lambda (a7324)
                                            (app
                                             (prov
                                              (take-helper
                                               (cdr lst)
                                               (- n 1)
                                               (cons (car lst) lst2)))
                                             take-helper
                                             kont7416
                                             a7320
                                             a7322
                                             a7324)))
                                      ((f7418
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324))))
                                      (app
                                       (prov (cons (car lst) lst2))
                                       cons
                                       f7418
                                       a7323
                                       lst2)))))
                                (app (prov (car lst)) car f7419 lst))))
                        ((f7420
                          (lambda (a7322)
                            (let (prov
                                  (lambda (a7323)
                                    (let (prov
                                          (lambda (a7324)
                                            (app
                                             (prov
                                              (take-helper
                                               (cdr lst)
                                               (- n 1)
                                               (cons (car lst) lst2)))
                                             take-helper
                                             kont7416
                                             a7320
                                             a7322
                                             a7324)))
                                      ((f7418
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324))))
                                      (app
                                       (prov (cons (car lst) lst2))
                                       cons
                                       f7418
                                       a7323
                                       lst2))))
                              ((f7419
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2)))))
                              (app (prov (car lst)) car f7419 lst)))))
                        (app (prov (- n 1)) - f7420 n a7321)))))
              ((f7421
                (lambda (a7320)
                  (let (prov '1)
                    ((a7321 '1))
                    (let (prov
                          (lambda (a7322)
                            (let (prov
                                  (lambda (a7323)
                                    (let (prov
                                          (lambda (a7324)
                                            (app
                                             (prov
                                              (take-helper
                                               (cdr lst)
                                               (- n 1)
                                               (cons (car lst) lst2)))
                                             take-helper
                                             kont7416
                                             a7320
                                             a7322
                                             a7324)))
                                      ((f7418
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324))))
                                      (app
                                       (prov (cons (car lst) lst2))
                                       cons
                                       f7418
                                       a7323
                                       lst2))))
                              ((f7419
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2)))))
                              (app (prov (car lst)) car f7419 lst))))
                      ((f7420
                        (lambda (a7322)
                          (let (prov
                                (lambda (a7323)
                                  (let (prov
                                        (lambda (a7324)
                                          (app
                                           (prov
                                            (take-helper
                                             (cdr lst)
                                             (- n 1)
                                             (cons (car lst) lst2)))
                                           take-helper
                                           kont7416
                                           a7320
                                           a7322
                                           a7324)))
                                    ((f7418
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324))))
                                    (app
                                     (prov (cons (car lst) lst2))
                                     cons
                                     f7418
                                     a7323
                                     lst2))))
                            ((f7419
                              (lambda (a7323)
                                (let (prov
                                      (lambda (a7324)
                                        (app
                                         (prov
                                          (take-helper
                                           (cdr lst)
                                           (- n 1)
                                           (cons (car lst) lst2)))
                                         take-helper
                                         kont7416
                                         a7320
                                         a7322
                                         a7324)))
                                  ((f7418
                                    (lambda (a7324)
                                      (app
                                       (prov
                                        (take-helper
                                         (cdr lst)
                                         (- n 1)
                                         (cons (car lst) lst2)))
                                       take-helper
                                       kont7416
                                       a7320
                                       a7322
                                       a7324))))
                                  (app
                                   (prov (cons (car lst) lst2))
                                   cons
                                   f7418
                                   a7323
                                   lst2)))))
                            (app (prov (car lst)) car f7419 lst)))))
                      (app (prov (- n 1)) - f7420 n a7321))))))
              (app (prov (cdr lst)) cdr f7421 lst))))))))
  (proc
   (prov
    (define (take-helper lst n lst2)
      (if (= n 0)
        (reverse lst2)
        (take-helper (cdr lst) (- n 1) (cons (car lst) lst2)))))
   (take-helper _7535 kont7416 lst n lst2)
   (let ((a7317 '0))
     (let ((f7422
            (make-closure
             lam7532
             (prov
              (if (= n 0)
                (reverse lst2)
                (take-helper (cdr lst) (- n 1) (cons (car lst) lst2))))
             if
             (let (prov (lambda (xy7319) (kont7416 xy7319)))
               ((f7417 (lambda (xy7319) (kont7416 xy7319))))
               (app (prov (reverse lst2)) reverse f7417 lst2))
             (let (prov
                   (lambda (a7320)
                     (let (prov '1)
                       ((a7321 '1))
                       (let (prov
                             (lambda (a7322)
                               (let (prov
                                     (lambda (a7323)
                                       (let (prov
                                             (lambda (a7324)
                                               (app
                                                (prov
                                                 (take-helper
                                                  (cdr lst)
                                                  (- n 1)
                                                  (cons (car lst) lst2)))
                                                take-helper
                                                kont7416
                                                a7320
                                                a7322
                                                a7324)))
                                         ((f7418
                                           (lambda (a7324)
                                             (app
                                              (prov
                                               (take-helper
                                                (cdr lst)
                                                (- n 1)
                                                (cons (car lst) lst2)))
                                              take-helper
                                              kont7416
                                              a7320
                                              a7322
                                              a7324))))
                                         (app
                                          (prov (cons (car lst) lst2))
                                          cons
                                          f7418
                                          a7323
                                          lst2))))
                                 ((f7419
                                   (lambda (a7323)
                                     (let (prov
                                           (lambda (a7324)
                                             (app
                                              (prov
                                               (take-helper
                                                (cdr lst)
                                                (- n 1)
                                                (cons (car lst) lst2)))
                                              take-helper
                                              kont7416
                                              a7320
                                              a7322
                                              a7324)))
                                       ((f7418
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324))))
                                       (app
                                        (prov (cons (car lst) lst2))
                                        cons
                                        f7418
                                        a7323
                                        lst2)))))
                                 (app (prov (car lst)) car f7419 lst))))
                         ((f7420
                           (lambda (a7322)
                             (let (prov
                                   (lambda (a7323)
                                     (let (prov
                                           (lambda (a7324)
                                             (app
                                              (prov
                                               (take-helper
                                                (cdr lst)
                                                (- n 1)
                                                (cons (car lst) lst2)))
                                              take-helper
                                              kont7416
                                              a7320
                                              a7322
                                              a7324)))
                                       ((f7418
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324))))
                                       (app
                                        (prov (cons (car lst) lst2))
                                        cons
                                        f7418
                                        a7323
                                        lst2))))
                               ((f7419
                                 (lambda (a7323)
                                   (let (prov
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324)))
                                     ((f7418
                                       (lambda (a7324)
                                         (app
                                          (prov
                                           (take-helper
                                            (cdr lst)
                                            (- n 1)
                                            (cons (car lst) lst2)))
                                          take-helper
                                          kont7416
                                          a7320
                                          a7322
                                          a7324))))
                                     (app
                                      (prov (cons (car lst) lst2))
                                      cons
                                      f7418
                                      a7323
                                      lst2)))))
                               (app (prov (car lst)) car f7419 lst)))))
                         (app (prov (- n 1)) - f7420 n a7321)))))
               ((f7421
                 (lambda (a7320)
                   (let (prov '1)
                     ((a7321 '1))
                     (let (prov
                           (lambda (a7322)
                             (let (prov
                                   (lambda (a7323)
                                     (let (prov
                                           (lambda (a7324)
                                             (app
                                              (prov
                                               (take-helper
                                                (cdr lst)
                                                (- n 1)
                                                (cons (car lst) lst2)))
                                              take-helper
                                              kont7416
                                              a7320
                                              a7322
                                              a7324)))
                                       ((f7418
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324))))
                                       (app
                                        (prov (cons (car lst) lst2))
                                        cons
                                        f7418
                                        a7323
                                        lst2))))
                               ((f7419
                                 (lambda (a7323)
                                   (let (prov
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324)))
                                     ((f7418
                                       (lambda (a7324)
                                         (app
                                          (prov
                                           (take-helper
                                            (cdr lst)
                                            (- n 1)
                                            (cons (car lst) lst2)))
                                          take-helper
                                          kont7416
                                          a7320
                                          a7322
                                          a7324))))
                                     (app
                                      (prov (cons (car lst) lst2))
                                      cons
                                      f7418
                                      a7323
                                      lst2)))))
                               (app (prov (car lst)) car f7419 lst))))
                       ((f7420
                         (lambda (a7322)
                           (let (prov
                                 (lambda (a7323)
                                   (let (prov
                                         (lambda (a7324)
                                           (app
                                            (prov
                                             (take-helper
                                              (cdr lst)
                                              (- n 1)
                                              (cons (car lst) lst2)))
                                            take-helper
                                            kont7416
                                            a7320
                                            a7322
                                            a7324)))
                                     ((f7418
                                       (lambda (a7324)
                                         (app
                                          (prov
                                           (take-helper
                                            (cdr lst)
                                            (- n 1)
                                            (cons (car lst) lst2)))
                                          take-helper
                                          kont7416
                                          a7320
                                          a7322
                                          a7324))))
                                     (app
                                      (prov (cons (car lst) lst2))
                                      cons
                                      f7418
                                      a7323
                                      lst2))))
                             ((f7419
                               (lambda (a7323)
                                 (let (prov
                                       (lambda (a7324)
                                         (app
                                          (prov
                                           (take-helper
                                            (cdr lst)
                                            (- n 1)
                                            (cons (car lst) lst2)))
                                          take-helper
                                          kont7416
                                          a7320
                                          a7322
                                          a7324)))
                                   ((f7418
                                     (lambda (a7324)
                                       (app
                                        (prov
                                         (take-helper
                                          (cdr lst)
                                          (- n 1)
                                          (cons (car lst) lst2)))
                                        take-helper
                                        kont7416
                                        a7320
                                        a7322
                                        a7324))))
                                   (app
                                    (prov (cons (car lst) lst2))
                                    cons
                                    f7418
                                    a7323
                                    lst2)))))
                             (app (prov (car lst)) car f7419 lst)))))
                       (app (prov (- n 1)) - f7420 n a7321))))))
               (app (prov (cdr lst)) cdr f7421 lst)))))
       (clo-app app (prov (= n 0)) = f7422 n a7317))))
  (proc
   (lam7536 env7537 a7325)
   (let ((lst (env-ref env7537 6)))
     (let ((kont7423 (env-ref env7537 5)))
       (let ((take-helper (env-ref env7537 4)))
         (let ((n (env-ref env7537 3)))
           (let (((prov (take-helper lst n (list))) (env-ref env7537 2)))
             (let ((app (env-ref env7537 1)))
               (clo-app
                app
                (prov (take-helper lst n (list)))
                take-helper
                kont7423
                lst
                n
                a7325))))))))
  (proc
   (prov (define (take lst n) (take-helper lst n (list))))
   (take _7538 kont7423 lst n)
   (let ((f7424
          (make-closure
           lam7536
           app
           (prov (take-helper lst n (list)))
           n
           take-helper
           kont7423
           lst)))
     (clo-app app (prov (list)) list f7424)))
  (proc
   (lam7539 env7540 a7326)
   (let (((let (prov '0) ((xy7327 '0)) (kont7425 xy7327)) (env-ref env7540 4)))
     (let (((prov (if (null? lst) 0 (+ 1 (length (cdr lst)))))
            (env-ref env7540 3)))
       (let (((let (prov '1)
                ((a7328 '1))
                (let (prov
                      (lambda (a7329)
                        (let (prov
                              (lambda (a7330)
                                (app
                                 (prov (+ 1 (length (cdr lst))))
                                 +
                                 kont7425
                                 a7328
                                 a7330)))
                          ((f7426
                            (lambda (a7330)
                              (app
                               (prov (+ 1 (length (cdr lst))))
                               +
                               kont7425
                               a7328
                               a7330))))
                          (app (prov (length (cdr lst))) length f7426 a7329))))
                  ((f7427
                    (lambda (a7329)
                      (let (prov
                            (lambda (a7330)
                              (app
                               (prov (+ 1 (length (cdr lst))))
                               +
                               kont7425
                               a7328
                               a7330)))
                        ((f7426
                          (lambda (a7330)
                            (app
                             (prov (+ 1 (length (cdr lst))))
                             +
                             kont7425
                             a7328
                             a7330))))
                        (app (prov (length (cdr lst))) length f7426 a7329)))))
                  (app (prov (cdr lst)) cdr f7427 lst)))
              (env-ref env7540 2)))
         (let ((if (env-ref env7540 1)))
           (clo-app
            if
            (prov (if (null? lst) 0 (+ 1 (length (cdr lst)))))
            a7326
            (let (prov '0) ((xy7327 '0)) (kont7425 xy7327))
            (let (prov '1)
              ((a7328 '1))
              (let (prov
                    (lambda (a7329)
                      (let (prov
                            (lambda (a7330)
                              (app
                               (prov (+ 1 (length (cdr lst))))
                               +
                               kont7425
                               a7328
                               a7330)))
                        ((f7426
                          (lambda (a7330)
                            (app
                             (prov (+ 1 (length (cdr lst))))
                             +
                             kont7425
                             a7328
                             a7330))))
                        (app (prov (length (cdr lst))) length f7426 a7329))))
                ((f7427
                  (lambda (a7329)
                    (let (prov
                          (lambda (a7330)
                            (app
                             (prov (+ 1 (length (cdr lst))))
                             +
                             kont7425
                             a7328
                             a7330)))
                      ((f7426
                        (lambda (a7330)
                          (app
                           (prov (+ 1 (length (cdr lst))))
                           +
                           kont7425
                           a7328
                           a7330))))
                      (app (prov (length (cdr lst))) length f7426 a7329)))))
                (app (prov (cdr lst)) cdr f7427 lst)))))))))
  (proc
   (prov (define (length lst) (if (null? lst) 0 (+ 1 (length (cdr lst))))))
   (length _7541 kont7425 lst)
   (let ((f7428
          (make-closure
           lam7539
           if
           (let (prov '1)
             ((a7328 '1))
             (let (prov
                   (lambda (a7329)
                     (let (prov
                           (lambda (a7330)
                             (app
                              (prov (+ 1 (length (cdr lst))))
                              +
                              kont7425
                              a7328
                              a7330)))
                       ((f7426
                         (lambda (a7330)
                           (app
                            (prov (+ 1 (length (cdr lst))))
                            +
                            kont7425
                            a7328
                            a7330))))
                       (app (prov (length (cdr lst))) length f7426 a7329))))
               ((f7427
                 (lambda (a7329)
                   (let (prov
                         (lambda (a7330)
                           (app
                            (prov (+ 1 (length (cdr lst))))
                            +
                            kont7425
                            a7328
                            a7330)))
                     ((f7426
                       (lambda (a7330)
                         (app
                          (prov (+ 1 (length (cdr lst))))
                          +
                          kont7425
                          a7328
                          a7330))))
                     (app (prov (length (cdr lst))) length f7426 a7329)))))
               (app (prov (cdr lst)) cdr f7427 lst)))
           (prov (if (null? lst) 0 (+ 1 (length (cdr lst)))))
           (let (prov '0) ((xy7327 '0)) (kont7425 xy7327)))))
     (clo-app app (prov (null? lst)) null? f7428 lst)))
  (proc
   (lam7542 env7543 a7331)
   (let (((let (prov
                (lambda (a7333)
                  (let (prov
                        (lambda (a7334)
                          (let (prov
                                (lambda (a7335)
                                  (let (prov
                                        (lambda (a7336)
                                          (app
                                           (prov
                                            (cons
                                             (proc (car lst))
                                             (map proc (cdr lst))))
                                           cons
                                           kont7429
                                           a7334
                                           a7336)))
                                    ((f7431
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336))))
                                    (app
                                     (prov (map proc (cdr lst)))
                                     map
                                     f7431
                                     proc
                                     a7335))))
                            ((f7432
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335)))))
                            (app (prov (cdr lst)) cdr f7432 lst))))
                    ((f7433
                      (lambda (a7334)
                        (let (prov
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335))))
                          ((f7432
                            (lambda (a7335)
                              (let (prov
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336)))
                                ((f7431
                                  (lambda (a7336)
                                    (app
                                     (prov
                                      (cons
                                       (proc (car lst))
                                       (map proc (cdr lst))))
                                     cons
                                     kont7429
                                     a7334
                                     a7336))))
                                (app
                                 (prov (map proc (cdr lst)))
                                 map
                                 f7431
                                 proc
                                 a7335)))))
                          (app (prov (cdr lst)) cdr f7432 lst)))))
                    (app (prov (proc (car lst))) proc f7433 a7333))))
            ((f7434
              (lambda (a7333)
                (let (prov
                      (lambda (a7334)
                        (let (prov
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335))))
                          ((f7432
                            (lambda (a7335)
                              (let (prov
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336)))
                                ((f7431
                                  (lambda (a7336)
                                    (app
                                     (prov
                                      (cons
                                       (proc (car lst))
                                       (map proc (cdr lst))))
                                     cons
                                     kont7429
                                     a7334
                                     a7336))))
                                (app
                                 (prov (map proc (cdr lst)))
                                 map
                                 f7431
                                 proc
                                 a7335)))))
                          (app (prov (cdr lst)) cdr f7432 lst))))
                  ((f7433
                    (lambda (a7334)
                      (let (prov
                            (lambda (a7335)
                              (let (prov
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336)))
                                ((f7431
                                  (lambda (a7336)
                                    (app
                                     (prov
                                      (cons
                                       (proc (car lst))
                                       (map proc (cdr lst))))
                                     cons
                                     kont7429
                                     a7334
                                     a7336))))
                                (app
                                 (prov (map proc (cdr lst)))
                                 map
                                 f7431
                                 proc
                                 a7335))))
                        ((f7432
                          (lambda (a7335)
                            (let (prov
                                  (lambda (a7336)
                                    (app
                                     (prov
                                      (cons
                                       (proc (car lst))
                                       (map proc (cdr lst))))
                                     cons
                                     kont7429
                                     a7334
                                     a7336)))
                              ((f7431
                                (lambda (a7336)
                                  (app
                                   (prov
                                    (cons
                                     (proc (car lst))
                                     (map proc (cdr lst))))
                                   cons
                                   kont7429
                                   a7334
                                   a7336))))
                              (app
                               (prov (map proc (cdr lst)))
                               map
                               f7431
                               proc
                               a7335)))))
                        (app (prov (cdr lst)) cdr f7432 lst)))))
                  (app (prov (proc (car lst))) proc f7433 a7333)))))
            (app (prov (car lst)) car f7434 lst))
          (env-ref env7543 4)))
     (let (((prov
             (if (null? lst)
               (list)
               (cons (proc (car lst)) (map proc (cdr lst)))))
            (env-ref env7543 3)))
       (let (((let (prov (lambda (xy7332) (kont7429 xy7332)))
                ((f7430 (lambda (xy7332) (kont7429 xy7332))))
                (app (prov (list)) list f7430))
              (env-ref env7543 2)))
         (let ((if (env-ref env7543 1)))
           (clo-app
            if
            (prov
             (if (null? lst)
               (list)
               (cons (proc (car lst)) (map proc (cdr lst)))))
            a7331
            (let (prov (lambda (xy7332) (kont7429 xy7332)))
              ((f7430 (lambda (xy7332) (kont7429 xy7332))))
              (app (prov (list)) list f7430))
            (let (prov
                  (lambda (a7333)
                    (let (prov
                          (lambda (a7334)
                            (let (prov
                                  (lambda (a7335)
                                    (let (prov
                                          (lambda (a7336)
                                            (app
                                             (prov
                                              (cons
                                               (proc (car lst))
                                               (map proc (cdr lst))))
                                             cons
                                             kont7429
                                             a7334
                                             a7336)))
                                      ((f7431
                                        (lambda (a7336)
                                          (app
                                           (prov
                                            (cons
                                             (proc (car lst))
                                             (map proc (cdr lst))))
                                           cons
                                           kont7429
                                           a7334
                                           a7336))))
                                      (app
                                       (prov (map proc (cdr lst)))
                                       map
                                       f7431
                                       proc
                                       a7335))))
                              ((f7432
                                (lambda (a7335)
                                  (let (prov
                                        (lambda (a7336)
                                          (app
                                           (prov
                                            (cons
                                             (proc (car lst))
                                             (map proc (cdr lst))))
                                           cons
                                           kont7429
                                           a7334
                                           a7336)))
                                    ((f7431
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336))))
                                    (app
                                     (prov (map proc (cdr lst)))
                                     map
                                     f7431
                                     proc
                                     a7335)))))
                              (app (prov (cdr lst)) cdr f7432 lst))))
                      ((f7433
                        (lambda (a7334)
                          (let (prov
                                (lambda (a7335)
                                  (let (prov
                                        (lambda (a7336)
                                          (app
                                           (prov
                                            (cons
                                             (proc (car lst))
                                             (map proc (cdr lst))))
                                           cons
                                           kont7429
                                           a7334
                                           a7336)))
                                    ((f7431
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336))))
                                    (app
                                     (prov (map proc (cdr lst)))
                                     map
                                     f7431
                                     proc
                                     a7335))))
                            ((f7432
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335)))))
                            (app (prov (cdr lst)) cdr f7432 lst)))))
                      (app (prov (proc (car lst))) proc f7433 a7333))))
              ((f7434
                (lambda (a7333)
                  (let (prov
                        (lambda (a7334)
                          (let (prov
                                (lambda (a7335)
                                  (let (prov
                                        (lambda (a7336)
                                          (app
                                           (prov
                                            (cons
                                             (proc (car lst))
                                             (map proc (cdr lst))))
                                           cons
                                           kont7429
                                           a7334
                                           a7336)))
                                    ((f7431
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336))))
                                    (app
                                     (prov (map proc (cdr lst)))
                                     map
                                     f7431
                                     proc
                                     a7335))))
                            ((f7432
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335)))))
                            (app (prov (cdr lst)) cdr f7432 lst))))
                    ((f7433
                      (lambda (a7334)
                        (let (prov
                              (lambda (a7335)
                                (let (prov
                                      (lambda (a7336)
                                        (app
                                         (prov
                                          (cons
                                           (proc (car lst))
                                           (map proc (cdr lst))))
                                         cons
                                         kont7429
                                         a7334
                                         a7336)))
                                  ((f7431
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336))))
                                  (app
                                   (prov (map proc (cdr lst)))
                                   map
                                   f7431
                                   proc
                                   a7335))))
                          ((f7432
                            (lambda (a7335)
                              (let (prov
                                    (lambda (a7336)
                                      (app
                                       (prov
                                        (cons
                                         (proc (car lst))
                                         (map proc (cdr lst))))
                                       cons
                                       kont7429
                                       a7334
                                       a7336)))
                                ((f7431
                                  (lambda (a7336)
                                    (app
                                     (prov
                                      (cons
                                       (proc (car lst))
                                       (map proc (cdr lst))))
                                     cons
                                     kont7429
                                     a7334
                                     a7336))))
                                (app
                                 (prov (map proc (cdr lst)))
                                 map
                                 f7431
                                 proc
                                 a7335)))))
                          (app (prov (cdr lst)) cdr f7432 lst)))))
                    (app (prov (proc (car lst))) proc f7433 a7333)))))
              (app (prov (car lst)) car f7434 lst))))))))
  (proc
   (prov
    (define (map proc lst)
      (if (null? lst) (list) (cons (proc (car lst)) (map proc (cdr lst))))))
   (map _7544 kont7429 proc lst)
   (let ((f7435
          (make-closure
           lam7542
           if
           (let (prov (lambda (xy7332) (kont7429 xy7332)))
             ((f7430 (lambda (xy7332) (kont7429 xy7332))))
             (app (prov (list)) list f7430))
           (prov
            (if (null? lst)
              (list)
              (cons (proc (car lst)) (map proc (cdr lst)))))
           (let (prov
                 (lambda (a7333)
                   (let (prov
                         (lambda (a7334)
                           (let (prov
                                 (lambda (a7335)
                                   (let (prov
                                         (lambda (a7336)
                                           (app
                                            (prov
                                             (cons
                                              (proc (car lst))
                                              (map proc (cdr lst))))
                                            cons
                                            kont7429
                                            a7334
                                            a7336)))
                                     ((f7431
                                       (lambda (a7336)
                                         (app
                                          (prov
                                           (cons
                                            (proc (car lst))
                                            (map proc (cdr lst))))
                                          cons
                                          kont7429
                                          a7334
                                          a7336))))
                                     (app
                                      (prov (map proc (cdr lst)))
                                      map
                                      f7431
                                      proc
                                      a7335))))
                             ((f7432
                               (lambda (a7335)
                                 (let (prov
                                       (lambda (a7336)
                                         (app
                                          (prov
                                           (cons
                                            (proc (car lst))
                                            (map proc (cdr lst))))
                                          cons
                                          kont7429
                                          a7334
                                          a7336)))
                                   ((f7431
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336))))
                                   (app
                                    (prov (map proc (cdr lst)))
                                    map
                                    f7431
                                    proc
                                    a7335)))))
                             (app (prov (cdr lst)) cdr f7432 lst))))
                     ((f7433
                       (lambda (a7334)
                         (let (prov
                               (lambda (a7335)
                                 (let (prov
                                       (lambda (a7336)
                                         (app
                                          (prov
                                           (cons
                                            (proc (car lst))
                                            (map proc (cdr lst))))
                                          cons
                                          kont7429
                                          a7334
                                          a7336)))
                                   ((f7431
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336))))
                                   (app
                                    (prov (map proc (cdr lst)))
                                    map
                                    f7431
                                    proc
                                    a7335))))
                           ((f7432
                             (lambda (a7335)
                               (let (prov
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336)))
                                 ((f7431
                                   (lambda (a7336)
                                     (app
                                      (prov
                                       (cons
                                        (proc (car lst))
                                        (map proc (cdr lst))))
                                      cons
                                      kont7429
                                      a7334
                                      a7336))))
                                 (app
                                  (prov (map proc (cdr lst)))
                                  map
                                  f7431
                                  proc
                                  a7335)))))
                           (app (prov (cdr lst)) cdr f7432 lst)))))
                     (app (prov (proc (car lst))) proc f7433 a7333))))
             ((f7434
               (lambda (a7333)
                 (let (prov
                       (lambda (a7334)
                         (let (prov
                               (lambda (a7335)
                                 (let (prov
                                       (lambda (a7336)
                                         (app
                                          (prov
                                           (cons
                                            (proc (car lst))
                                            (map proc (cdr lst))))
                                          cons
                                          kont7429
                                          a7334
                                          a7336)))
                                   ((f7431
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336))))
                                   (app
                                    (prov (map proc (cdr lst)))
                                    map
                                    f7431
                                    proc
                                    a7335))))
                           ((f7432
                             (lambda (a7335)
                               (let (prov
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336)))
                                 ((f7431
                                   (lambda (a7336)
                                     (app
                                      (prov
                                       (cons
                                        (proc (car lst))
                                        (map proc (cdr lst))))
                                      cons
                                      kont7429
                                      a7334
                                      a7336))))
                                 (app
                                  (prov (map proc (cdr lst)))
                                  map
                                  f7431
                                  proc
                                  a7335)))))
                           (app (prov (cdr lst)) cdr f7432 lst))))
                   ((f7433
                     (lambda (a7334)
                       (let (prov
                             (lambda (a7335)
                               (let (prov
                                     (lambda (a7336)
                                       (app
                                        (prov
                                         (cons
                                          (proc (car lst))
                                          (map proc (cdr lst))))
                                        cons
                                        kont7429
                                        a7334
                                        a7336)))
                                 ((f7431
                                   (lambda (a7336)
                                     (app
                                      (prov
                                       (cons
                                        (proc (car lst))
                                        (map proc (cdr lst))))
                                      cons
                                      kont7429
                                      a7334
                                      a7336))))
                                 (app
                                  (prov (map proc (cdr lst)))
                                  map
                                  f7431
                                  proc
                                  a7335))))
                         ((f7432
                           (lambda (a7335)
                             (let (prov
                                   (lambda (a7336)
                                     (app
                                      (prov
                                       (cons
                                        (proc (car lst))
                                        (map proc (cdr lst))))
                                      cons
                                      kont7429
                                      a7334
                                      a7336)))
                               ((f7431
                                 (lambda (a7336)
                                   (app
                                    (prov
                                     (cons
                                      (proc (car lst))
                                      (map proc (cdr lst))))
                                    cons
                                    kont7429
                                    a7334
                                    a7336))))
                               (app
                                (prov (map proc (cdr lst)))
                                map
                                f7431
                                proc
                                a7335)))))
                         (app (prov (cdr lst)) cdr f7432 lst)))))
                   (app (prov (proc (car lst))) proc f7433 a7333)))))
             (app (prov (car lst)) car f7434 lst)))))
     (clo-app app (prov (null? lst)) null? f7435 lst)))
  (proc
   (lam7545 env7546 a7337)
   (let (((let (prov
                (lambda (a7339)
                  (let (prov
                        (lambda (a7340)
                          (if (prov
                               (if (op (car lst))
                                 (cons (car lst) (filter op (cdr lst)))
                                 (filter op (cdr lst))))
                            a7340
                            (let (prov
                                  (lambda (a7341)
                                    (let (prov
                                          (lambda (a7342)
                                            (let (prov
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343)))
                                              ((f7438
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343))))
                                              (app
                                               (prov (filter op (cdr lst)))
                                               filter
                                               f7438
                                               op
                                               a7342))))
                                      ((f7439
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342)))))
                                      (app (prov (cdr lst)) cdr f7439 lst))))
                              ((f7440
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst)))))
                              (app (prov (car lst)) car f7440 lst))
                            (let (prov
                                  (lambda (a7344)
                                    (app
                                     (prov (filter op (cdr lst)))
                                     filter
                                     kont7436
                                     op
                                     a7344)))
                              ((f7441
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344))))
                              (app (prov (cdr lst)) cdr f7441 lst)))))
                    ((f7442
                      (lambda (a7340)
                        (if (prov
                             (if (op (car lst))
                               (cons (car lst) (filter op (cdr lst)))
                               (filter op (cdr lst))))
                          a7340
                          (let (prov
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst))))
                            ((f7440
                              (lambda (a7341)
                                (let (prov
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342))))
                                  ((f7439
                                    (lambda (a7342)
                                      (let (prov
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343)))
                                        ((f7438
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343))))
                                        (app
                                         (prov (filter op (cdr lst)))
                                         filter
                                         f7438
                                         op
                                         a7342)))))
                                  (app (prov (cdr lst)) cdr f7439 lst)))))
                            (app (prov (car lst)) car f7440 lst))
                          (let (prov
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344)))
                            ((f7441
                              (lambda (a7344)
                                (app
                                 (prov (filter op (cdr lst)))
                                 filter
                                 kont7436
                                 op
                                 a7344))))
                            (app (prov (cdr lst)) cdr f7441 lst))))))
                    (app (prov (op (car lst))) op f7442 a7339))))
            ((f7443
              (lambda (a7339)
                (let (prov
                      (lambda (a7340)
                        (if (prov
                             (if (op (car lst))
                               (cons (car lst) (filter op (cdr lst)))
                               (filter op (cdr lst))))
                          a7340
                          (let (prov
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst))))
                            ((f7440
                              (lambda (a7341)
                                (let (prov
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342))))
                                  ((f7439
                                    (lambda (a7342)
                                      (let (prov
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343)))
                                        ((f7438
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343))))
                                        (app
                                         (prov (filter op (cdr lst)))
                                         filter
                                         f7438
                                         op
                                         a7342)))))
                                  (app (prov (cdr lst)) cdr f7439 lst)))))
                            (app (prov (car lst)) car f7440 lst))
                          (let (prov
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344)))
                            ((f7441
                              (lambda (a7344)
                                (app
                                 (prov (filter op (cdr lst)))
                                 filter
                                 kont7436
                                 op
                                 a7344))))
                            (app (prov (cdr lst)) cdr f7441 lst)))))
                  ((f7442
                    (lambda (a7340)
                      (if (prov
                           (if (op (car lst))
                             (cons (car lst) (filter op (cdr lst)))
                             (filter op (cdr lst))))
                        a7340
                        (let (prov
                              (lambda (a7341)
                                (let (prov
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342))))
                                  ((f7439
                                    (lambda (a7342)
                                      (let (prov
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343)))
                                        ((f7438
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343))))
                                        (app
                                         (prov (filter op (cdr lst)))
                                         filter
                                         f7438
                                         op
                                         a7342)))))
                                  (app (prov (cdr lst)) cdr f7439 lst))))
                          ((f7440
                            (lambda (a7341)
                              (let (prov
                                    (lambda (a7342)
                                      (let (prov
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343)))
                                        ((f7438
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343))))
                                        (app
                                         (prov (filter op (cdr lst)))
                                         filter
                                         f7438
                                         op
                                         a7342))))
                                ((f7439
                                  (lambda (a7342)
                                    (let (prov
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343)))
                                      ((f7438
                                        (lambda (a7343)
                                          (app
                                           (prov
                                            (cons
                                             (car lst)
                                             (filter op (cdr lst))))
                                           cons
                                           kont7436
                                           a7341
                                           a7343))))
                                      (app
                                       (prov (filter op (cdr lst)))
                                       filter
                                       f7438
                                       op
                                       a7342)))))
                                (app (prov (cdr lst)) cdr f7439 lst)))))
                          (app (prov (car lst)) car f7440 lst))
                        (let (prov
                              (lambda (a7344)
                                (app
                                 (prov (filter op (cdr lst)))
                                 filter
                                 kont7436
                                 op
                                 a7344)))
                          ((f7441
                            (lambda (a7344)
                              (app
                               (prov (filter op (cdr lst)))
                               filter
                               kont7436
                               op
                               a7344))))
                          (app (prov (cdr lst)) cdr f7441 lst))))))
                  (app (prov (op (car lst))) op f7442 a7339)))))
            (app (prov (car lst)) car f7443 lst))
          (env-ref env7546 4)))
     (let ((if (env-ref env7546 3)))
       (let (((let (prov (lambda (xy7338) (kont7436 xy7338)))
                ((f7437 (lambda (xy7338) (kont7436 xy7338))))
                (app (prov (list)) list f7437))
              (env-ref env7546 2)))
         (let (((prov
                 (if (null? lst)
                   (list)
                   (if (op (car lst))
                     (cons (car lst) (filter op (cdr lst)))
                     (filter op (cdr lst)))))
                (env-ref env7546 1)))
           (clo-app
            if
            (prov
             (if (null? lst)
               (list)
               (if (op (car lst))
                 (cons (car lst) (filter op (cdr lst)))
                 (filter op (cdr lst)))))
            a7337
            (let (prov (lambda (xy7338) (kont7436 xy7338)))
              ((f7437 (lambda (xy7338) (kont7436 xy7338))))
              (app (prov (list)) list f7437))
            (let (prov
                  (lambda (a7339)
                    (let (prov
                          (lambda (a7340)
                            (if (prov
                                 (if (op (car lst))
                                   (cons (car lst) (filter op (cdr lst)))
                                   (filter op (cdr lst))))
                              a7340
                              (let (prov
                                    (lambda (a7341)
                                      (let (prov
                                            (lambda (a7342)
                                              (let (prov
                                                    (lambda (a7343)
                                                      (app
                                                       (prov
                                                        (cons
                                                         (car lst)
                                                         (filter
                                                          op
                                                          (cdr lst))))
                                                       cons
                                                       kont7436
                                                       a7341
                                                       a7343)))
                                                ((f7438
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343))))
                                                (app
                                                 (prov (filter op (cdr lst)))
                                                 filter
                                                 f7438
                                                 op
                                                 a7342))))
                                        ((f7439
                                          (lambda (a7342)
                                            (let (prov
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343)))
                                              ((f7438
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343))))
                                              (app
                                               (prov (filter op (cdr lst)))
                                               filter
                                               f7438
                                               op
                                               a7342)))))
                                        (app (prov (cdr lst)) cdr f7439 lst))))
                                ((f7440
                                  (lambda (a7341)
                                    (let (prov
                                          (lambda (a7342)
                                            (let (prov
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343)))
                                              ((f7438
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343))))
                                              (app
                                               (prov (filter op (cdr lst)))
                                               filter
                                               f7438
                                               op
                                               a7342))))
                                      ((f7439
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342)))))
                                      (app (prov (cdr lst)) cdr f7439 lst)))))
                                (app (prov (car lst)) car f7440 lst))
                              (let (prov
                                    (lambda (a7344)
                                      (app
                                       (prov (filter op (cdr lst)))
                                       filter
                                       kont7436
                                       op
                                       a7344)))
                                ((f7441
                                  (lambda (a7344)
                                    (app
                                     (prov (filter op (cdr lst)))
                                     filter
                                     kont7436
                                     op
                                     a7344))))
                                (app (prov (cdr lst)) cdr f7441 lst)))))
                      ((f7442
                        (lambda (a7340)
                          (if (prov
                               (if (op (car lst))
                                 (cons (car lst) (filter op (cdr lst)))
                                 (filter op (cdr lst))))
                            a7340
                            (let (prov
                                  (lambda (a7341)
                                    (let (prov
                                          (lambda (a7342)
                                            (let (prov
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343)))
                                              ((f7438
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343))))
                                              (app
                                               (prov (filter op (cdr lst)))
                                               filter
                                               f7438
                                               op
                                               a7342))))
                                      ((f7439
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342)))))
                                      (app (prov (cdr lst)) cdr f7439 lst))))
                              ((f7440
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst)))))
                              (app (prov (car lst)) car f7440 lst))
                            (let (prov
                                  (lambda (a7344)
                                    (app
                                     (prov (filter op (cdr lst)))
                                     filter
                                     kont7436
                                     op
                                     a7344)))
                              ((f7441
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344))))
                              (app (prov (cdr lst)) cdr f7441 lst))))))
                      (app (prov (op (car lst))) op f7442 a7339))))
              ((f7443
                (lambda (a7339)
                  (let (prov
                        (lambda (a7340)
                          (if (prov
                               (if (op (car lst))
                                 (cons (car lst) (filter op (cdr lst)))
                                 (filter op (cdr lst))))
                            a7340
                            (let (prov
                                  (lambda (a7341)
                                    (let (prov
                                          (lambda (a7342)
                                            (let (prov
                                                  (lambda (a7343)
                                                    (app
                                                     (prov
                                                      (cons
                                                       (car lst)
                                                       (filter op (cdr lst))))
                                                     cons
                                                     kont7436
                                                     a7341
                                                     a7343)))
                                              ((f7438
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343))))
                                              (app
                                               (prov (filter op (cdr lst)))
                                               filter
                                               f7438
                                               op
                                               a7342))))
                                      ((f7439
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342)))))
                                      (app (prov (cdr lst)) cdr f7439 lst))))
                              ((f7440
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst)))))
                              (app (prov (car lst)) car f7440 lst))
                            (let (prov
                                  (lambda (a7344)
                                    (app
                                     (prov (filter op (cdr lst)))
                                     filter
                                     kont7436
                                     op
                                     a7344)))
                              ((f7441
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344))))
                              (app (prov (cdr lst)) cdr f7441 lst)))))
                    ((f7442
                      (lambda (a7340)
                        (if (prov
                             (if (op (car lst))
                               (cons (car lst) (filter op (cdr lst)))
                               (filter op (cdr lst))))
                          a7340
                          (let (prov
                                (lambda (a7341)
                                  (let (prov
                                        (lambda (a7342)
                                          (let (prov
                                                (lambda (a7343)
                                                  (app
                                                   (prov
                                                    (cons
                                                     (car lst)
                                                     (filter op (cdr lst))))
                                                   cons
                                                   kont7436
                                                   a7341
                                                   a7343)))
                                            ((f7438
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343))))
                                            (app
                                             (prov (filter op (cdr lst)))
                                             filter
                                             f7438
                                             op
                                             a7342))))
                                    ((f7439
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342)))))
                                    (app (prov (cdr lst)) cdr f7439 lst))))
                            ((f7440
                              (lambda (a7341)
                                (let (prov
                                      (lambda (a7342)
                                        (let (prov
                                              (lambda (a7343)
                                                (app
                                                 (prov
                                                  (cons
                                                   (car lst)
                                                   (filter op (cdr lst))))
                                                 cons
                                                 kont7436
                                                 a7341
                                                 a7343)))
                                          ((f7438
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343))))
                                          (app
                                           (prov (filter op (cdr lst)))
                                           filter
                                           f7438
                                           op
                                           a7342))))
                                  ((f7439
                                    (lambda (a7342)
                                      (let (prov
                                            (lambda (a7343)
                                              (app
                                               (prov
                                                (cons
                                                 (car lst)
                                                 (filter op (cdr lst))))
                                               cons
                                               kont7436
                                               a7341
                                               a7343)))
                                        ((f7438
                                          (lambda (a7343)
                                            (app
                                             (prov
                                              (cons
                                               (car lst)
                                               (filter op (cdr lst))))
                                             cons
                                             kont7436
                                             a7341
                                             a7343))))
                                        (app
                                         (prov (filter op (cdr lst)))
                                         filter
                                         f7438
                                         op
                                         a7342)))))
                                  (app (prov (cdr lst)) cdr f7439 lst)))))
                            (app (prov (car lst)) car f7440 lst))
                          (let (prov
                                (lambda (a7344)
                                  (app
                                   (prov (filter op (cdr lst)))
                                   filter
                                   kont7436
                                   op
                                   a7344)))
                            ((f7441
                              (lambda (a7344)
                                (app
                                 (prov (filter op (cdr lst)))
                                 filter
                                 kont7436
                                 op
                                 a7344))))
                            (app (prov (cdr lst)) cdr f7441 lst))))))
                    (app (prov (op (car lst))) op f7442 a7339)))))
              (app (prov (car lst)) car f7443 lst))))))))
  (proc
   (prov
    (define (filter op lst)
      (if (null? lst)
        (list)
        (if (op (car lst))
          (cons (car lst) (filter op (cdr lst)))
          (filter op (cdr lst))))))
   (filter _7547 kont7436 op lst)
   (let ((f7444
          (make-closure
           lam7545
           (prov
            (if (null? lst)
              (list)
              (if (op (car lst))
                (cons (car lst) (filter op (cdr lst)))
                (filter op (cdr lst)))))
           (let (prov (lambda (xy7338) (kont7436 xy7338)))
             ((f7437 (lambda (xy7338) (kont7436 xy7338))))
             (app (prov (list)) list f7437))
           if
           (let (prov
                 (lambda (a7339)
                   (let (prov
                         (lambda (a7340)
                           (if (prov
                                (if (op (car lst))
                                  (cons (car lst) (filter op (cdr lst)))
                                  (filter op (cdr lst))))
                             a7340
                             (let (prov
                                   (lambda (a7341)
                                     (let (prov
                                           (lambda (a7342)
                                             (let (prov
                                                   (lambda (a7343)
                                                     (app
                                                      (prov
                                                       (cons
                                                        (car lst)
                                                        (filter op (cdr lst))))
                                                      cons
                                                      kont7436
                                                      a7341
                                                      a7343)))
                                               ((f7438
                                                 (lambda (a7343)
                                                   (app
                                                    (prov
                                                     (cons
                                                      (car lst)
                                                      (filter op (cdr lst))))
                                                    cons
                                                    kont7436
                                                    a7341
                                                    a7343))))
                                               (app
                                                (prov (filter op (cdr lst)))
                                                filter
                                                f7438
                                                op
                                                a7342))))
                                       ((f7439
                                         (lambda (a7342)
                                           (let (prov
                                                 (lambda (a7343)
                                                   (app
                                                    (prov
                                                     (cons
                                                      (car lst)
                                                      (filter op (cdr lst))))
                                                    cons
                                                    kont7436
                                                    a7341
                                                    a7343)))
                                             ((f7438
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343))))
                                             (app
                                              (prov (filter op (cdr lst)))
                                              filter
                                              f7438
                                              op
                                              a7342)))))
                                       (app (prov (cdr lst)) cdr f7439 lst))))
                               ((f7440
                                 (lambda (a7341)
                                   (let (prov
                                         (lambda (a7342)
                                           (let (prov
                                                 (lambda (a7343)
                                                   (app
                                                    (prov
                                                     (cons
                                                      (car lst)
                                                      (filter op (cdr lst))))
                                                    cons
                                                    kont7436
                                                    a7341
                                                    a7343)))
                                             ((f7438
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343))))
                                             (app
                                              (prov (filter op (cdr lst)))
                                              filter
                                              f7438
                                              op
                                              a7342))))
                                     ((f7439
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342)))))
                                     (app (prov (cdr lst)) cdr f7439 lst)))))
                               (app (prov (car lst)) car f7440 lst))
                             (let (prov
                                   (lambda (a7344)
                                     (app
                                      (prov (filter op (cdr lst)))
                                      filter
                                      kont7436
                                      op
                                      a7344)))
                               ((f7441
                                 (lambda (a7344)
                                   (app
                                    (prov (filter op (cdr lst)))
                                    filter
                                    kont7436
                                    op
                                    a7344))))
                               (app (prov (cdr lst)) cdr f7441 lst)))))
                     ((f7442
                       (lambda (a7340)
                         (if (prov
                              (if (op (car lst))
                                (cons (car lst) (filter op (cdr lst)))
                                (filter op (cdr lst))))
                           a7340
                           (let (prov
                                 (lambda (a7341)
                                   (let (prov
                                         (lambda (a7342)
                                           (let (prov
                                                 (lambda (a7343)
                                                   (app
                                                    (prov
                                                     (cons
                                                      (car lst)
                                                      (filter op (cdr lst))))
                                                    cons
                                                    kont7436
                                                    a7341
                                                    a7343)))
                                             ((f7438
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343))))
                                             (app
                                              (prov (filter op (cdr lst)))
                                              filter
                                              f7438
                                              op
                                              a7342))))
                                     ((f7439
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342)))))
                                     (app (prov (cdr lst)) cdr f7439 lst))))
                             ((f7440
                               (lambda (a7341)
                                 (let (prov
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342))))
                                   ((f7439
                                     (lambda (a7342)
                                       (let (prov
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343)))
                                         ((f7438
                                           (lambda (a7343)
                                             (app
                                              (prov
                                               (cons
                                                (car lst)
                                                (filter op (cdr lst))))
                                              cons
                                              kont7436
                                              a7341
                                              a7343))))
                                         (app
                                          (prov (filter op (cdr lst)))
                                          filter
                                          f7438
                                          op
                                          a7342)))))
                                   (app (prov (cdr lst)) cdr f7439 lst)))))
                             (app (prov (car lst)) car f7440 lst))
                           (let (prov
                                 (lambda (a7344)
                                   (app
                                    (prov (filter op (cdr lst)))
                                    filter
                                    kont7436
                                    op
                                    a7344)))
                             ((f7441
                               (lambda (a7344)
                                 (app
                                  (prov (filter op (cdr lst)))
                                  filter
                                  kont7436
                                  op
                                  a7344))))
                             (app (prov (cdr lst)) cdr f7441 lst))))))
                     (app (prov (op (car lst))) op f7442 a7339))))
             ((f7443
               (lambda (a7339)
                 (let (prov
                       (lambda (a7340)
                         (if (prov
                              (if (op (car lst))
                                (cons (car lst) (filter op (cdr lst)))
                                (filter op (cdr lst))))
                           a7340
                           (let (prov
                                 (lambda (a7341)
                                   (let (prov
                                         (lambda (a7342)
                                           (let (prov
                                                 (lambda (a7343)
                                                   (app
                                                    (prov
                                                     (cons
                                                      (car lst)
                                                      (filter op (cdr lst))))
                                                    cons
                                                    kont7436
                                                    a7341
                                                    a7343)))
                                             ((f7438
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343))))
                                             (app
                                              (prov (filter op (cdr lst)))
                                              filter
                                              f7438
                                              op
                                              a7342))))
                                     ((f7439
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342)))))
                                     (app (prov (cdr lst)) cdr f7439 lst))))
                             ((f7440
                               (lambda (a7341)
                                 (let (prov
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342))))
                                   ((f7439
                                     (lambda (a7342)
                                       (let (prov
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343)))
                                         ((f7438
                                           (lambda (a7343)
                                             (app
                                              (prov
                                               (cons
                                                (car lst)
                                                (filter op (cdr lst))))
                                              cons
                                              kont7436
                                              a7341
                                              a7343))))
                                         (app
                                          (prov (filter op (cdr lst)))
                                          filter
                                          f7438
                                          op
                                          a7342)))))
                                   (app (prov (cdr lst)) cdr f7439 lst)))))
                             (app (prov (car lst)) car f7440 lst))
                           (let (prov
                                 (lambda (a7344)
                                   (app
                                    (prov (filter op (cdr lst)))
                                    filter
                                    kont7436
                                    op
                                    a7344)))
                             ((f7441
                               (lambda (a7344)
                                 (app
                                  (prov (filter op (cdr lst)))
                                  filter
                                  kont7436
                                  op
                                  a7344))))
                             (app (prov (cdr lst)) cdr f7441 lst)))))
                   ((f7442
                     (lambda (a7340)
                       (if (prov
                            (if (op (car lst))
                              (cons (car lst) (filter op (cdr lst)))
                              (filter op (cdr lst))))
                         a7340
                         (let (prov
                               (lambda (a7341)
                                 (let (prov
                                       (lambda (a7342)
                                         (let (prov
                                               (lambda (a7343)
                                                 (app
                                                  (prov
                                                   (cons
                                                    (car lst)
                                                    (filter op (cdr lst))))
                                                  cons
                                                  kont7436
                                                  a7341
                                                  a7343)))
                                           ((f7438
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343))))
                                           (app
                                            (prov (filter op (cdr lst)))
                                            filter
                                            f7438
                                            op
                                            a7342))))
                                   ((f7439
                                     (lambda (a7342)
                                       (let (prov
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343)))
                                         ((f7438
                                           (lambda (a7343)
                                             (app
                                              (prov
                                               (cons
                                                (car lst)
                                                (filter op (cdr lst))))
                                              cons
                                              kont7436
                                              a7341
                                              a7343))))
                                         (app
                                          (prov (filter op (cdr lst)))
                                          filter
                                          f7438
                                          op
                                          a7342)))))
                                   (app (prov (cdr lst)) cdr f7439 lst))))
                           ((f7440
                             (lambda (a7341)
                               (let (prov
                                     (lambda (a7342)
                                       (let (prov
                                             (lambda (a7343)
                                               (app
                                                (prov
                                                 (cons
                                                  (car lst)
                                                  (filter op (cdr lst))))
                                                cons
                                                kont7436
                                                a7341
                                                a7343)))
                                         ((f7438
                                           (lambda (a7343)
                                             (app
                                              (prov
                                               (cons
                                                (car lst)
                                                (filter op (cdr lst))))
                                              cons
                                              kont7436
                                              a7341
                                              a7343))))
                                         (app
                                          (prov (filter op (cdr lst)))
                                          filter
                                          f7438
                                          op
                                          a7342))))
                                 ((f7439
                                   (lambda (a7342)
                                     (let (prov
                                           (lambda (a7343)
                                             (app
                                              (prov
                                               (cons
                                                (car lst)
                                                (filter op (cdr lst))))
                                              cons
                                              kont7436
                                              a7341
                                              a7343)))
                                       ((f7438
                                         (lambda (a7343)
                                           (app
                                            (prov
                                             (cons
                                              (car lst)
                                              (filter op (cdr lst))))
                                            cons
                                            kont7436
                                            a7341
                                            a7343))))
                                       (app
                                        (prov (filter op (cdr lst)))
                                        filter
                                        f7438
                                        op
                                        a7342)))))
                                 (app (prov (cdr lst)) cdr f7439 lst)))))
                           (app (prov (car lst)) car f7440 lst))
                         (let (prov
                               (lambda (a7344)
                                 (app
                                  (prov (filter op (cdr lst)))
                                  filter
                                  kont7436
                                  op
                                  a7344)))
                           ((f7441
                             (lambda (a7344)
                               (app
                                (prov (filter op (cdr lst)))
                                filter
                                kont7436
                                op
                                a7344))))
                           (app (prov (cdr lst)) cdr f7441 lst))))))
                   (app (prov (op (car lst))) op f7442 a7339)))))
             (app (prov (car lst)) car f7443 lst)))))
     (clo-app app (prov (null? lst)) null? f7444 lst)))
  (proc
   (lam7548 env7549 a7346)
   (let ((if (env-ref env7549 4)))
     (let (((prov (if (= n 0) lst (drop (cdr lst) (- n 1))))
            (env-ref env7549 3)))
       (let (((kont7445 lst) (env-ref env7549 2)))
         (let (((let (prov
                      (lambda (a7347)
                        (let (prov '1)
                          ((a7348 '1))
                          (let (prov
                                (lambda (a7349)
                                  (app
                                   (prov (drop (cdr lst) (- n 1)))
                                   drop
                                   kont7445
                                   a7347
                                   a7349)))
                            ((f7446
                              (lambda (a7349)
                                (app
                                 (prov (drop (cdr lst) (- n 1)))
                                 drop
                                 kont7445
                                 a7347
                                 a7349))))
                            (app (prov (- n 1)) - f7446 n a7348)))))
                  ((f7447
                    (lambda (a7347)
                      (let (prov '1)
                        ((a7348 '1))
                        (let (prov
                              (lambda (a7349)
                                (app
                                 (prov (drop (cdr lst) (- n 1)))
                                 drop
                                 kont7445
                                 a7347
                                 a7349)))
                          ((f7446
                            (lambda (a7349)
                              (app
                               (prov (drop (cdr lst) (- n 1)))
                               drop
                               kont7445
                               a7347
                               a7349))))
                          (app (prov (- n 1)) - f7446 n a7348))))))
                  (app (prov (cdr lst)) cdr f7447 lst))
                (env-ref env7549 1)))
           (clo-app
            if
            (prov (if (= n 0) lst (drop (cdr lst) (- n 1))))
            a7346
            (kont7445 lst)
            (let (prov
                  (lambda (a7347)
                    (let (prov '1)
                      ((a7348 '1))
                      (let (prov
                            (lambda (a7349)
                              (app
                               (prov (drop (cdr lst) (- n 1)))
                               drop
                               kont7445
                               a7347
                               a7349)))
                        ((f7446
                          (lambda (a7349)
                            (app
                             (prov (drop (cdr lst) (- n 1)))
                             drop
                             kont7445
                             a7347
                             a7349))))
                        (app (prov (- n 1)) - f7446 n a7348)))))
              ((f7447
                (lambda (a7347)
                  (let (prov '1)
                    ((a7348 '1))
                    (let (prov
                          (lambda (a7349)
                            (app
                             (prov (drop (cdr lst) (- n 1)))
                             drop
                             kont7445
                             a7347
                             a7349)))
                      ((f7446
                        (lambda (a7349)
                          (app
                           (prov (drop (cdr lst) (- n 1)))
                           drop
                           kont7445
                           a7347
                           a7349))))
                      (app (prov (- n 1)) - f7446 n a7348))))))
              (app (prov (cdr lst)) cdr f7447 lst))))))))
  (proc
   (prov (define (drop lst n) (if (= n 0) lst (drop (cdr lst) (- n 1)))))
   (drop _7551 kont7445 lst n)
   (let ((a7345 '0))
     (let ((f7448
            (make-closure
             lam7548
             (let (prov
                   (lambda (a7347)
                     (let (prov '1)
                       ((a7348 '1))
                       (let (prov
                             (lambda (a7349)
                               (app
                                (prov (drop (cdr lst) (- n 1)))
                                drop
                                kont7445
                                a7347
                                a7349)))
                         ((f7446
                           (lambda (a7349)
                             (app
                              (prov (drop (cdr lst) (- n 1)))
                              drop
                              kont7445
                              a7347
                              a7349))))
                         (app (prov (- n 1)) - f7446 n a7348)))))
               ((f7447
                 (lambda (a7347)
                   (let (prov '1)
                     ((a7348 '1))
                     (let (prov
                           (lambda (a7349)
                             (app
                              (prov (drop (cdr lst) (- n 1)))
                              drop
                              kont7445
                              a7347
                              a7349)))
                       ((f7446
                         (lambda (a7349)
                           (app
                            (prov (drop (cdr lst) (- n 1)))
                            drop
                            kont7445
                            a7347
                            a7349))))
                       (app (prov (- n 1)) - f7446 n a7348))))))
               (app (prov (cdr lst)) cdr f7447 lst))
             (kont7445 lst)
             (prov (if (= n 0) lst (drop (cdr lst) (- n 1))))
             if)))
       (clo-app app (prov (= n 0)) = f7448 n a7345))))
  (proc
   (lam7552 env7553 a7350)
   (let (((prov
           (if (null? lst) acc (proc (car lst) (foldr proc acc (cdr lst)))))
          (env-ref env7553 4)))
     (let ((if (env-ref env7553 3)))
       (let (((let (prov
                    (lambda (a7351)
                      (let (prov
                            (lambda (a7352)
                              (let (prov
                                    (lambda (a7353)
                                      (app
                                       (prov
                                        (proc
                                         (car lst)
                                         (foldr proc acc (cdr lst))))
                                       proc
                                       kont7449
                                       a7351
                                       a7353)))
                                ((f7450
                                  (lambda (a7353)
                                    (app
                                     (prov
                                      (proc
                                       (car lst)
                                       (foldr proc acc (cdr lst))))
                                     proc
                                     kont7449
                                     a7351
                                     a7353))))
                                (app
                                 (prov (foldr proc acc (cdr lst)))
                                 foldr
                                 f7450
                                 proc
                                 acc
                                 a7352))))
                        ((f7451
                          (lambda (a7352)
                            (let (prov
                                  (lambda (a7353)
                                    (app
                                     (prov
                                      (proc
                                       (car lst)
                                       (foldr proc acc (cdr lst))))
                                     proc
                                     kont7449
                                     a7351
                                     a7353)))
                              ((f7450
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353))))
                              (app
                               (prov (foldr proc acc (cdr lst)))
                               foldr
                               f7450
                               proc
                               acc
                               a7352)))))
                        (app (prov (cdr lst)) cdr f7451 lst))))
                ((f7452
                  (lambda (a7351)
                    (let (prov
                          (lambda (a7352)
                            (let (prov
                                  (lambda (a7353)
                                    (app
                                     (prov
                                      (proc
                                       (car lst)
                                       (foldr proc acc (cdr lst))))
                                     proc
                                     kont7449
                                     a7351
                                     a7353)))
                              ((f7450
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353))))
                              (app
                               (prov (foldr proc acc (cdr lst)))
                               foldr
                               f7450
                               proc
                               acc
                               a7352))))
                      ((f7451
                        (lambda (a7352)
                          (let (prov
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353)))
                            ((f7450
                              (lambda (a7353)
                                (app
                                 (prov
                                  (proc (car lst) (foldr proc acc (cdr lst))))
                                 proc
                                 kont7449
                                 a7351
                                 a7353))))
                            (app
                             (prov (foldr proc acc (cdr lst)))
                             foldr
                             f7450
                             proc
                             acc
                             a7352)))))
                      (app (prov (cdr lst)) cdr f7451 lst)))))
                (app (prov (car lst)) car f7452 lst))
              (env-ref env7553 2)))
         (let (((kont7449 acc) (env-ref env7553 1)))
           (clo-app
            if
            (prov
             (if (null? lst) acc (proc (car lst) (foldr proc acc (cdr lst)))))
            a7350
            (kont7449 acc)
            (let (prov
                  (lambda (a7351)
                    (let (prov
                          (lambda (a7352)
                            (let (prov
                                  (lambda (a7353)
                                    (app
                                     (prov
                                      (proc
                                       (car lst)
                                       (foldr proc acc (cdr lst))))
                                     proc
                                     kont7449
                                     a7351
                                     a7353)))
                              ((f7450
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353))))
                              (app
                               (prov (foldr proc acc (cdr lst)))
                               foldr
                               f7450
                               proc
                               acc
                               a7352))))
                      ((f7451
                        (lambda (a7352)
                          (let (prov
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353)))
                            ((f7450
                              (lambda (a7353)
                                (app
                                 (prov
                                  (proc (car lst) (foldr proc acc (cdr lst))))
                                 proc
                                 kont7449
                                 a7351
                                 a7353))))
                            (app
                             (prov (foldr proc acc (cdr lst)))
                             foldr
                             f7450
                             proc
                             acc
                             a7352)))))
                      (app (prov (cdr lst)) cdr f7451 lst))))
              ((f7452
                (lambda (a7351)
                  (let (prov
                        (lambda (a7352)
                          (let (prov
                                (lambda (a7353)
                                  (app
                                   (prov
                                    (proc
                                     (car lst)
                                     (foldr proc acc (cdr lst))))
                                   proc
                                   kont7449
                                   a7351
                                   a7353)))
                            ((f7450
                              (lambda (a7353)
                                (app
                                 (prov
                                  (proc (car lst) (foldr proc acc (cdr lst))))
                                 proc
                                 kont7449
                                 a7351
                                 a7353))))
                            (app
                             (prov (foldr proc acc (cdr lst)))
                             foldr
                             f7450
                             proc
                             acc
                             a7352))))
                    ((f7451
                      (lambda (a7352)
                        (let (prov
                              (lambda (a7353)
                                (app
                                 (prov
                                  (proc (car lst) (foldr proc acc (cdr lst))))
                                 proc
                                 kont7449
                                 a7351
                                 a7353)))
                          ((f7450
                            (lambda (a7353)
                              (app
                               (prov
                                (proc (car lst) (foldr proc acc (cdr lst))))
                               proc
                               kont7449
                               a7351
                               a7353))))
                          (app
                           (prov (foldr proc acc (cdr lst)))
                           foldr
                           f7450
                           proc
                           acc
                           a7352)))))
                    (app (prov (cdr lst)) cdr f7451 lst)))))
              (app (prov (car lst)) car f7452 lst))))))))
  (proc
   (prov
    (define (foldr proc acc lst)
      (if (null? lst) acc (proc (car lst) (foldr proc acc (cdr lst))))))
   (foldr _7554 kont7449 proc acc lst)
   (let ((f7453
          (make-closure
           lam7552
           (kont7449 acc)
           (let (prov
                 (lambda (a7351)
                   (let (prov
                         (lambda (a7352)
                           (let (prov
                                 (lambda (a7353)
                                   (app
                                    (prov
                                     (proc
                                      (car lst)
                                      (foldr proc acc (cdr lst))))
                                    proc
                                    kont7449
                                    a7351
                                    a7353)))
                             ((f7450
                               (lambda (a7353)
                                 (app
                                  (prov
                                   (proc (car lst) (foldr proc acc (cdr lst))))
                                  proc
                                  kont7449
                                  a7351
                                  a7353))))
                             (app
                              (prov (foldr proc acc (cdr lst)))
                              foldr
                              f7450
                              proc
                              acc
                              a7352))))
                     ((f7451
                       (lambda (a7352)
                         (let (prov
                               (lambda (a7353)
                                 (app
                                  (prov
                                   (proc (car lst) (foldr proc acc (cdr lst))))
                                  proc
                                  kont7449
                                  a7351
                                  a7353)))
                           ((f7450
                             (lambda (a7353)
                               (app
                                (prov
                                 (proc (car lst) (foldr proc acc (cdr lst))))
                                proc
                                kont7449
                                a7351
                                a7353))))
                           (app
                            (prov (foldr proc acc (cdr lst)))
                            foldr
                            f7450
                            proc
                            acc
                            a7352)))))
                     (app (prov (cdr lst)) cdr f7451 lst))))
             ((f7452
               (lambda (a7351)
                 (let (prov
                       (lambda (a7352)
                         (let (prov
                               (lambda (a7353)
                                 (app
                                  (prov
                                   (proc (car lst) (foldr proc acc (cdr lst))))
                                  proc
                                  kont7449
                                  a7351
                                  a7353)))
                           ((f7450
                             (lambda (a7353)
                               (app
                                (prov
                                 (proc (car lst) (foldr proc acc (cdr lst))))
                                proc
                                kont7449
                                a7351
                                a7353))))
                           (app
                            (prov (foldr proc acc (cdr lst)))
                            foldr
                            f7450
                            proc
                            acc
                            a7352))))
                   ((f7451
                     (lambda (a7352)
                       (let (prov
                             (lambda (a7353)
                               (app
                                (prov
                                 (proc (car lst) (foldr proc acc (cdr lst))))
                                proc
                                kont7449
                                a7351
                                a7353)))
                         ((f7450
                           (lambda (a7353)
                             (app
                              (prov
                               (proc (car lst) (foldr proc acc (cdr lst))))
                              proc
                              kont7449
                              a7351
                              a7353))))
                         (app
                          (prov (foldr proc acc (cdr lst)))
                          foldr
                          f7450
                          proc
                          acc
                          a7352)))))
                   (app (prov (cdr lst)) cdr f7451 lst)))))
             (app (prov (car lst)) car f7452 lst))
           if
           (prov
            (if (null? lst)
              acc
              (proc (car lst) (foldr proc acc (cdr lst))))))))
     (clo-app app (prov (null? lst)) null? f7453 lst)))
  (proc
   (lam7555 env7556 a7354)
   (let (((kont7454 lst2) (env-ref env7556 4)))
     (let ((if (env-ref env7556 3)))
       (let (((let (prov
                    (lambda (a7355)
                      (let (prov
                            (lambda (a7356)
                              (let (prov
                                    (lambda (a7357)
                                      (app
                                       (prov
                                        (cons
                                         (car lst1)
                                         (append (cdr lst1) lst2)))
                                       cons
                                       kont7454
                                       a7355
                                       a7357)))
                                ((f7455
                                  (lambda (a7357)
                                    (app
                                     (prov
                                      (cons
                                       (car lst1)
                                       (append (cdr lst1) lst2)))
                                     cons
                                     kont7454
                                     a7355
                                     a7357))))
                                (app
                                 (prov (append (cdr lst1) lst2))
                                 append
                                 f7455
                                 a7356
                                 lst2))))
                        ((f7456
                          (lambda (a7356)
                            (let (prov
                                  (lambda (a7357)
                                    (app
                                     (prov
                                      (cons
                                       (car lst1)
                                       (append (cdr lst1) lst2)))
                                     cons
                                     kont7454
                                     a7355
                                     a7357)))
                              ((f7455
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357))))
                              (app
                               (prov (append (cdr lst1) lst2))
                               append
                               f7455
                               a7356
                               lst2)))))
                        (app (prov (cdr lst1)) cdr f7456 lst1))))
                ((f7457
                  (lambda (a7355)
                    (let (prov
                          (lambda (a7356)
                            (let (prov
                                  (lambda (a7357)
                                    (app
                                     (prov
                                      (cons
                                       (car lst1)
                                       (append (cdr lst1) lst2)))
                                     cons
                                     kont7454
                                     a7355
                                     a7357)))
                              ((f7455
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357))))
                              (app
                               (prov (append (cdr lst1) lst2))
                               append
                               f7455
                               a7356
                               lst2))))
                      ((f7456
                        (lambda (a7356)
                          (let (prov
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357)))
                            ((f7455
                              (lambda (a7357)
                                (app
                                 (prov
                                  (cons (car lst1) (append (cdr lst1) lst2)))
                                 cons
                                 kont7454
                                 a7355
                                 a7357))))
                            (app
                             (prov (append (cdr lst1) lst2))
                             append
                             f7455
                             a7356
                             lst2)))))
                      (app (prov (cdr lst1)) cdr f7456 lst1)))))
                (app (prov (car lst1)) car f7457 lst1))
              (env-ref env7556 2)))
         (let (((prov
                 (if (null? lst1)
                   lst2
                   (cons (car lst1) (append (cdr lst1) lst2))))
                (env-ref env7556 1)))
           (clo-app
            if
            (prov
             (if (null? lst1) lst2 (cons (car lst1) (append (cdr lst1) lst2))))
            a7354
            (kont7454 lst2)
            (let (prov
                  (lambda (a7355)
                    (let (prov
                          (lambda (a7356)
                            (let (prov
                                  (lambda (a7357)
                                    (app
                                     (prov
                                      (cons
                                       (car lst1)
                                       (append (cdr lst1) lst2)))
                                     cons
                                     kont7454
                                     a7355
                                     a7357)))
                              ((f7455
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357))))
                              (app
                               (prov (append (cdr lst1) lst2))
                               append
                               f7455
                               a7356
                               lst2))))
                      ((f7456
                        (lambda (a7356)
                          (let (prov
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357)))
                            ((f7455
                              (lambda (a7357)
                                (app
                                 (prov
                                  (cons (car lst1) (append (cdr lst1) lst2)))
                                 cons
                                 kont7454
                                 a7355
                                 a7357))))
                            (app
                             (prov (append (cdr lst1) lst2))
                             append
                             f7455
                             a7356
                             lst2)))))
                      (app (prov (cdr lst1)) cdr f7456 lst1))))
              ((f7457
                (lambda (a7355)
                  (let (prov
                        (lambda (a7356)
                          (let (prov
                                (lambda (a7357)
                                  (app
                                   (prov
                                    (cons (car lst1) (append (cdr lst1) lst2)))
                                   cons
                                   kont7454
                                   a7355
                                   a7357)))
                            ((f7455
                              (lambda (a7357)
                                (app
                                 (prov
                                  (cons (car lst1) (append (cdr lst1) lst2)))
                                 cons
                                 kont7454
                                 a7355
                                 a7357))))
                            (app
                             (prov (append (cdr lst1) lst2))
                             append
                             f7455
                             a7356
                             lst2))))
                    ((f7456
                      (lambda (a7356)
                        (let (prov
                              (lambda (a7357)
                                (app
                                 (prov
                                  (cons (car lst1) (append (cdr lst1) lst2)))
                                 cons
                                 kont7454
                                 a7355
                                 a7357)))
                          ((f7455
                            (lambda (a7357)
                              (app
                               (prov
                                (cons (car lst1) (append (cdr lst1) lst2)))
                               cons
                               kont7454
                               a7355
                               a7357))))
                          (app
                           (prov (append (cdr lst1) lst2))
                           append
                           f7455
                           a7356
                           lst2)))))
                    (app (prov (cdr lst1)) cdr f7456 lst1)))))
              (app (prov (car lst1)) car f7457 lst1))))))))
  (proc
   (prov
    (define (append lst1 lst2)
      (if (null? lst1) lst2 (cons (car lst1) (append (cdr lst1) lst2)))))
   (append _7557 kont7454 lst1 lst2)
   (let ((f7458
          (make-closure
           lam7555
           (prov
            (if (null? lst1) lst2 (cons (car lst1) (append (cdr lst1) lst2))))
           (let (prov
                 (lambda (a7355)
                   (let (prov
                         (lambda (a7356)
                           (let (prov
                                 (lambda (a7357)
                                   (app
                                    (prov
                                     (cons
                                      (car lst1)
                                      (append (cdr lst1) lst2)))
                                    cons
                                    kont7454
                                    a7355
                                    a7357)))
                             ((f7455
                               (lambda (a7357)
                                 (app
                                  (prov
                                   (cons (car lst1) (append (cdr lst1) lst2)))
                                  cons
                                  kont7454
                                  a7355
                                  a7357))))
                             (app
                              (prov (append (cdr lst1) lst2))
                              append
                              f7455
                              a7356
                              lst2))))
                     ((f7456
                       (lambda (a7356)
                         (let (prov
                               (lambda (a7357)
                                 (app
                                  (prov
                                   (cons (car lst1) (append (cdr lst1) lst2)))
                                  cons
                                  kont7454
                                  a7355
                                  a7357)))
                           ((f7455
                             (lambda (a7357)
                               (app
                                (prov
                                 (cons (car lst1) (append (cdr lst1) lst2)))
                                cons
                                kont7454
                                a7355
                                a7357))))
                           (app
                            (prov (append (cdr lst1) lst2))
                            append
                            f7455
                            a7356
                            lst2)))))
                     (app (prov (cdr lst1)) cdr f7456 lst1))))
             ((f7457
               (lambda (a7355)
                 (let (prov
                       (lambda (a7356)
                         (let (prov
                               (lambda (a7357)
                                 (app
                                  (prov
                                   (cons (car lst1) (append (cdr lst1) lst2)))
                                  cons
                                  kont7454
                                  a7355
                                  a7357)))
                           ((f7455
                             (lambda (a7357)
                               (app
                                (prov
                                 (cons (car lst1) (append (cdr lst1) lst2)))
                                cons
                                kont7454
                                a7355
                                a7357))))
                           (app
                            (prov (append (cdr lst1) lst2))
                            append
                            f7455
                            a7356
                            lst2))))
                   ((f7456
                     (lambda (a7356)
                       (let (prov
                             (lambda (a7357)
                               (app
                                (prov
                                 (cons (car lst1) (append (cdr lst1) lst2)))
                                cons
                                kont7454
                                a7355
                                a7357)))
                         ((f7455
                           (lambda (a7357)
                             (app
                              (prov (cons (car lst1) (append (cdr lst1) lst2)))
                              cons
                              kont7454
                              a7355
                              a7357))))
                         (app
                          (prov (append (cdr lst1) lst2))
                          append
                          f7455
                          a7356
                          lst2)))))
                   (app (prov (cdr lst1)) cdr f7456 lst1)))))
             (app (prov (car lst1)) car f7457 lst1))
           if
           (kont7454 lst2))))
     (clo-app app (prov (null? lst1)) null? f7458 lst1)))
  (proc
   (prov (define (hash . lst) (apply-prim hash lst)))
   (hash _7558 . lst)
   (clo-app
    let
    (prov (define (hash . lst) (apply-prim hash lst)))
    ((kont7459 (prim car lst)))
    (let (prov (define (hash . lst) (apply-prim hash lst)))
      ((lst7489 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim hash lst)) hash lst))
        ((xy7358 (apply-prim (prov (apply-prim hash lst)) hash lst7489)))
        (kont7459 xy7358)))))
  (proc
   (prov (define (hash-ref h k) (prim hash-ref h k)))
   (hash-ref _7559 kont7460 h k)
   (clo-app
    let
    (prov (prim (prov (prim hash-ref h k)) hash-ref h k))
    ((xy7359 (prim (prov (prim hash-ref h k)) hash-ref h k)))
    (kont7460 xy7359)))
  (proc
   (prov (define (hash-set h k v) (prim hash-set h k v)))
   (hash-set _7560 kont7461 h k v)
   (clo-app
    let
    (prov (prim (prov (prim hash-set h k v)) hash-set h k v))
    ((xy7360 (prim (prov (prim hash-set h k v)) hash-set h k v)))
    (kont7461 xy7360)))
  (proc
   (prov (define (hash-keys h) (prim hash-keys h)))
   (hash-keys _7561 kont7462 h)
   (clo-app
    let
    (prov (prim (prov (prim hash-keys h)) hash-keys h))
    ((xy7361 (prim (prov (prim hash-keys h)) hash-keys h)))
    (kont7462 xy7361)))
  (proc
   (prov (define (hash-has-key? h k) (prim hash-has-key? h k)))
   (hash-has-key? _7562 kont7463 h k)
   (clo-app
    let
    (prov (prim (prov (prim hash-has-key? h k)) hash-has-key? h k))
    ((xy7362 (prim (prov (prim hash-has-key? h k)) hash-has-key? h k)))
    (kont7463 xy7362)))
  (proc
   (prov (define (hash-count h) (prim hash-count h)))
   (hash-count _7563 kont7464 h)
   (clo-app
    let
    (prov (prim (prov (prim hash-count h)) hash-count h))
    ((xy7363 (prim (prov (prim hash-count h)) hash-count h)))
    (kont7464 xy7363)))
  (proc
   (prov (define (set . lst) (apply-prim set lst)))
   (set _7564 . lst)
   (clo-app
    let
    (prov (define (set . lst) (apply-prim set lst)))
    ((kont7465 (prim car lst)))
    (let (prov (define (set . lst) (apply-prim set lst)))
      ((lst7490 (prim cdr lst)))
      (let (prov (apply-prim (prov (apply-prim set lst)) set lst))
        ((xy7364 (apply-prim (prov (apply-prim set lst)) set lst7490)))
        (kont7465 xy7364)))))
  (proc
   (prov (define (set->list h) (prim set->list h)))
   (set->list _7565 kont7466 h)
   (clo-app
    let
    (prov (prim (prov (prim set->list h)) set->list h))
    ((xy7365 (prim (prov (prim set->list h)) set->list h)))
    (kont7466 xy7365)))
  (proc
   (prov (define (list->set lst) (prim list->set lst)))
   (list->set _7566 kont7467 lst)
   (clo-app
    let
    (prov (prim (prov (prim list->set lst)) list->set lst))
    ((xy7366 (prim (prov (prim list->set lst)) list->set lst)))
    (kont7467 xy7366)))
  (proc
   (prov (define (set-add s val) (prim set-add s val)))
   (set-add _7567 kont7468 s val)
   (clo-app
    let
    (prov (prim (prov (prim set-add s val)) set-add s val))
    ((xy7367 (prim (prov (prim set-add s val)) set-add s val)))
    (kont7468 xy7367)))
  (proc
   (prov (define (string? str) (prim string? str)))
   (string? _7568 kont7469 str)
   (clo-app
    let
    (prov (prim (prov (prim string? str)) string? str))
    ((xy7368 (prim (prov (prim string? str)) string? str)))
    (kont7469 xy7368)))
  (proc
   (prov (define (string-length str) (prim string-length str)))
   (string-length _7569 kont7470 str)
   (clo-app
    let
    (prov (prim (prov (prim string-length str)) string-length str))
    ((xy7369 (prim (prov (prim string-length str)) string-length str)))
    (kont7470 xy7369)))
  (proc
   (prov (define (string-ref str pos) (prim string-ref str pos)))
   (string-ref _7570 kont7471 str pos)
   (clo-app
    let
    (prov (prim (prov (prim string-ref str pos)) string-ref str pos))
    ((xy7370 (prim (prov (prim string-ref str pos)) string-ref str pos)))
    (kont7471 xy7370)))
  (proc
   (prov (define (substring str start end) (prim substring str start end)))
   (substring _7571 kont7472 str start end)
   (clo-app
    let
    (prov (prim (prov (prim substring str start end)) substring str start end))
    ((xy7371
      (prim (prov (prim substring str start end)) substring str start end)))
    (kont7472 xy7371)))
  (proc
   (prov (define (string-append s1 s2) (prim string-append s1 s2)))
   (string-append _7572 kont7473 s1 s2)
   (clo-app
    let
    (prov (prim (prov (prim string-append s1 s2)) string-append s1 s2))
    ((xy7372 (prim (prov (prim string-append s1 s2)) string-append s1 s2)))
    (kont7473 xy7372)))
  (proc
   (prov (define (string->list str) (prim string->list str)))
   (string->list _7573 kont7474 str)
   (clo-app
    let
    (prov (prim (prov (prim string->list str)) string->list str))
    ((xy7373 (prim (prov (prim string->list str)) string->list str)))
    (kont7474 xy7373)))
  (proc
   (lam7574 env7575 y)
   (let ((x (env-ref env7575 2)))
     (let ((kont7475 (env-ref env7575 1))) (clo-app kont7475 x))))
  (proc
   (lam7576 env7577 x)
   (let ((num2 (env-ref env7577 2)))
     (let ((kont7475 (env-ref env7577 1)))
       (let ((f7476 (make-closure lam7574 kont7475 x)))
         (clo-app f7476 num2)))))
  (proc
   (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
   (call _7578 kont7475 num1 num2)
   (let ((f7477 (make-closure lam7576 kont7475 num2))) (clo-app f7477 num1)))
  (proc
   (prov (define (brouhaha_main) (call 5 42)))
   (brouhaha_main _7581 kont7478)
   (let ((a7374 '5))
     (let ((a7375 '42))
       (clo-app app (prov (call 5 42)) call kont7478 a7374 a7375)))))
)
; (require "interp-closure.rkt")
; (interp-closure our-call)

; (define our-call
;   '((define (+ . lst) (apply-prim + lst))
;   (define (- . lst) (apply-prim - lst))
;   (define (* . lst) (apply-prim * lst))
;   (define (modulo a b) (prim modulo a b))
;   (define (/ . lst) (apply-prim / lst))
;   (define (= . lst) (apply-prim = lst))
;   (define (> . lst) (apply-prim > lst))
;   (define (< . lst) (apply-prim < lst))
;   (define (<= . lst) (apply-prim <= lst))
;   (define (>= . lst) (apply-prim >= lst))
;   (define (null? x) (prim null? x))
;   (define (equal? x y) (prim equal? x y))
;   (define (eq? x y) (prim eq? x y))
;   (define (cons a b) (prim cons a b))
;   (define (car lst) (prim car lst))
;   (define (cdr lst) (prim cdr lst))
;   (define (even? x) (equal? 0 (modulo x 2)))
;   (define (odd? x) (equal? 1 (modulo x 2)))
;   (define (list . x) x)
;   (define (float->int val) (prim inexact->exact val))
;   (define (int->float val) (prim exact->inexact val))
;   (define (member? x lst)
;     (if (null? lst) '#f (if (equal? (car lst) x) '#t (member? x (cdr lst)))))
;   (define (foldl fun acc lst)
;     (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst))))
;   (define (reverse-helper lst lst2)
;     (if (null? lst) lst2 (reverse-helper (cdr lst) (cons (car lst) lst2))))
;   (define (reverse lst) (reverse-helper lst (list)))
;   (define (take-helper lst n lst2)
;     (if (= n 0)
;       (reverse lst2)
;       (take-helper (cdr lst) (- n 1) (cons (car lst) lst2))))
;   (define (take lst n) (take-helper lst n (list)))
;   (define (length lst) (if (null? lst) 0 (+ 1 (length (cdr lst)))))
;   (define (map proc lst)
;     (if (null? lst) (list) (cons (proc (car lst)) (map proc (cdr lst)))))
;   (define (filter op lst)
;     (if (null? lst)
;       (list)
;       (if (op (car lst))
;         (cons (car lst) (filter op (cdr lst)))
;         (filter op (cdr lst)))))
;   (define (drop lst n) (if (= n 0) lst (drop (cdr lst) (- n 1))))
;   (define (foldr proc acc lst)
;     (if (null? lst) acc (proc (car lst) (foldr proc acc (cdr lst)))))
;   (define (append lst1 lst2)
;     (if (null? lst1) lst2 (cons (car lst1) (append (cdr lst1) lst2))))
;   (define (hash . lst) (apply-prim hash lst))
;   (define (hash-ref h k) (prim hash-ref h k))
;   (define (hash-set h k v) (prim hash-set h k v))
;   (define (hash-keys h) (prim hash-keys h))
;   (define (hash-has-key? h k) (prim hash-has-key? h k))
;   (define (hash-count h) (prim hash-count h))
;   (define (set . lst) (apply-prim set lst))
;   (define (set->list h) (prim set->list h))
;   (define (list->set lst) (prim list->set lst))
;   (define (set-add s val) (prim set-add s val))
;   (define (string? str) (prim string? str))
;   (define (string-length str) (prim string-length str))
;   (define (string-ref str pos) (prim string-ref str pos))
;   (define (substring str start end) (prim substring str start end))
;   (define (string-append s1 s2) (prim string-append s1 s2))
;   (define (string->list str) (prim string->list str))
;   (define (call num1 num2) (let ((x num1) (y num2)) x))
;   (define (brouhaha_main) (call 5 42)))
; )
; (pretty-print (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))))
; (interp (count-params (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))) "tests/let/output/1fc3f8451aec79ec257c4f0bcfa345efc80613601edec4961441cda3/facts.txt"))

; (count-params (closure-convert (alphatize (cps-convert (anf-convert (add-tags (alphatize (desugar our-call))))))) "tests/let/output/1fc3f8451aec79ec257c4f0bcfa345efc80613601edec4961441cda3/facts.txt")


; (alphatize (desugar our-call))
; (anf-convert (add-tags (alphatize (desugar our-call))))
; (interp-cps '((define (+ . lst)
;     (let ((f7403
;            (lambda (kont7400)
;              (let ((f7402
;                     (lambda (lst)
;                       (let kont7400 (prov
;                                      (apply-prim
;                                       (prov (apply-prim + lst))
;                                       +
;                                       lst))
;                         ((x7274 (apply-prim (prov (apply-prim + lst)) + lst)))
;                         x7274))))
;                (prim f7402 cdr lst)))))
;       (prim f7403 car lst)))
;   (define (- . lst)
;     (let ((f7407
;            (lambda (kont7404)
;              (let ((f7406
;                     (lambda (lst)
;                       (let kont7404 (prov
;                                      (apply-prim
;                                       (prov (apply-prim - lst))
;                                       -
;                                       lst))
;                         ((x7275 (apply-prim (prov (apply-prim - lst)) - lst)))
;                         x7275))))
;                (prim f7406 cdr lst)))))
;       (prim f7407 car lst)))
;   (define (* . lst)
;     (let ((f7411
;            (lambda (kont7408)
;              (let ((f7410
;                     (lambda (lst)
;                       (let kont7408 (prov
;                                      (apply-prim
;                                       (prov (apply-prim * lst))
;                                       *
;                                       lst))
;                         ((x7276 (apply-prim (prov (apply-prim * lst)) * lst)))
;                         x7276))))
;                (prim f7410 cdr lst)))))
;       (prim f7411 car lst)))
;   (define (modulo kont7412 a b)
;     (let (prov (prim (prov (prim modulo a b)) modulo a b))
;       ((x7277 (prim (prov (prim modulo a b)) modulo a b)))
;       (kont7412 x7277)))
;   (define (/ . lst)
;     (let ((f7416
;            (lambda (kont7413)
;              (let ((f7415
;                     (lambda (lst)
;                       (let kont7413 (prov
;                                      (apply-prim
;                                       (prov (apply-prim / lst))
;                                       /
;                                       lst))
;                         ((x7278 (apply-prim (prov (apply-prim / lst)) / lst)))
;                         x7278))))
;                (prim f7415 cdr lst)))))
;       (prim f7416 car lst)))
;   (define (= . lst)
;     (let ((f7420
;            (lambda (kont7417)
;              (let ((f7419
;                     (lambda (lst)
;                       (let kont7417 (prov
;                                      (apply-prim
;                                       (prov (apply-prim = lst))
;                                       =
;                                       lst))
;                         ((x7279 (apply-prim (prov (apply-prim = lst)) = lst)))
;                         x7279))))
;                (prim f7419 cdr lst)))))
;       (prim f7420 car lst)))
;   (define (> . lst)
;     (let ((f7424
;            (lambda (kont7421)
;              (let ((f7423
;                     (lambda (lst)
;                       (let kont7421 (prov
;                                      (apply-prim
;                                       (prov (apply-prim > lst))
;                                       >
;                                       lst))
;                         ((x7280 (apply-prim (prov (apply-prim > lst)) > lst)))
;                         x7280))))
;                (prim f7423 cdr lst)))))
;       (prim f7424 car lst)))
;   (define (< . lst)
;     (let ((f7428
;            (lambda (kont7425)
;              (let ((f7427
;                     (lambda (lst)
;                       (let kont7425 (prov
;                                      (apply-prim
;                                       (prov (apply-prim < lst))
;                                       <
;                                       lst))
;                         ((x7281 (apply-prim (prov (apply-prim < lst)) < lst)))
;                         x7281))))
;                (prim f7427 cdr lst)))))
;       (prim f7428 car lst)))
;   (define (<= . lst)
;     (let ((f7432
;            (lambda (kont7429)
;              (let ((f7431
;                     (lambda (lst)
;                       (let kont7429 (prov
;                                      (apply-prim
;                                       (prov (apply-prim <= lst))
;                                       <=
;                                       lst))
;                         ((x7282
;                           (apply-prim (prov (apply-prim <= lst)) <= lst)))
;                         x7282))))
;                (prim f7431 cdr lst)))))
;       (prim f7432 car lst)))
;   (define (>= . lst)
;     (let ((f7436
;            (lambda (kont7433)
;              (let ((f7435
;                     (lambda (lst)
;                       (let kont7433 (prov
;                                      (apply-prim
;                                       (prov (apply-prim >= lst))
;                                       >=
;                                       lst))
;                         ((x7283
;                           (apply-prim (prov (apply-prim >= lst)) >= lst)))
;                         x7283))))
;                (prim f7435 cdr lst)))))
;       (prim f7436 car lst)))
;   (define (null? kont7437 x)
;     (let (prov (prim (prov (prim null? x)) null? x))
;       ((x7284 (prim (prov (prim null? x)) null? x)))
;       (kont7437 x7284)))
;   (define (equal? kont7438 x y)
;     (let (prov (prim (prov (prim equal? x y)) equal? x y))
;       ((x7285 (prim (prov (prim equal? x y)) equal? x y)))
;       (kont7438 x7285)))
;   (define (eq? kont7439 x y)
;     (let (prov (prim (prov (prim eq? x y)) eq? x y))
;       ((x7286 (prim (prov (prim eq? x y)) eq? x y)))
;       (kont7439 x7286)))
;   (define (cons kont7440 a b)
;     (let (prov (prim (prov (prim cons a b)) cons a b))
;       ((x7287 (prim (prov (prim cons a b)) cons a b)))
;       (kont7440 x7287)))
;   (define (car kont7441 lst)
;     (let (prov (prim (prov (prim car lst)) car lst))
;       ((x7288 (prim (prov (prim car lst)) car lst)))
;       (kont7441 x7288)))
;   (define (cdr kont7442 lst)
;     (let (prov (prim (prov (prim cdr lst)) cdr lst))
;       ((x7289 (prim (prov (prim cdr lst)) cdr lst)))
;       (kont7442 x7289)))
;   (define (even? kont7443 x)
;     (let kont7443 (prov
;                    (let ((a7290 '0))
;                      (let ((a7291 '2))
;                        (let ((a7292 (app (prov (modulo x 2)) modulo x a7291)))
;                          (app
;                           (prov (equal? 0 (modulo x 2)))
;                           equal?
;                           a7290
;                           a7292)))))
;       ((x7293
;         (let ((a7290 '0))
;           (let ((a7291 '2))
;             (let ((a7292 (app (prov (modulo x 2)) modulo x a7291)))
;               (app (prov (equal? 0 (modulo x 2))) equal? a7290 a7292))))))
;       x7293))
;   (define (odd? kont7444 x)
;     (let kont7444 (prov
;                    (let ((a7294 '1))
;                      (let ((a7295 '2))
;                        (let ((a7296 (app (prov (modulo x 2)) modulo x a7295)))
;                          (app
;                           (prov (equal? 1 (modulo x 2)))
;                           equal?
;                           a7294
;                           a7296)))))
;       ((x7297
;         (let ((a7294 '1))
;           (let ((a7295 '2))
;             (let ((a7296 (app (prov (modulo x 2)) modulo x a7295)))
;               (app (prov (equal? 1 (modulo x 2))) equal? a7294 a7296))))))
;       x7297))
;   (define (list . x)
;     (let ((f7448
;            (lambda (kont7445)
;              (let ((f7447 (lambda (x) (kont7445 x)))) (prim f7447 cdr x)))))
;       (prim f7448 car x)))
;   (define (float->int kont7449 val)
;     (let (prov (prim (prov (prim inexact->exact val)) inexact->exact val))
;       ((x7298 (prim (prov (prim inexact->exact val)) inexact->exact val)))
;       (kont7449 x7298)))
;   (define (int->float kont7450 val)
;     (let (prov (prim (prov (prim exact->inexact val)) exact->inexact val))
;       ((x7299 (prim (prov (prim exact->inexact val)) exact->inexact val)))
;       (kont7450 x7299)))
;   (define (member? kont7451 x lst)
;     (let kont7451 (prov
;                    (let ((a7300 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             #f
;                             (if (equal? (car lst) x)
;                               #t
;                               (member? x (cdr lst)))))
;                        a7300
;                        (let (prov '#f) ((x7301 '#f)) x7301)
;                        (let (prov
;                              (let ((a7302 (app (prov (car lst)) car lst)))
;                                (let ((a7303
;                                       (app
;                                        (prov (equal? (car lst) x))
;                                        equal?
;                                        a7302
;                                        x)))
;                                  (if (prov
;                                       (if (equal? (car lst) x)
;                                         #t
;                                         (member? x (cdr lst))))
;                                    a7303
;                                    (let (prov '#t) ((x7304 '#t)) x7304)
;                                    (let (prov
;                                          (let ((a7305
;                                                 (app
;                                                  (prov (cdr lst))
;                                                  cdr
;                                                  lst)))
;                                            (app
;                                             (prov (member? x (cdr lst)))
;                                             member?
;                                             x
;                                             a7305)))
;                                      ((x7306
;                                        (let ((a7305
;                                               (app (prov (cdr lst)) cdr lst)))
;                                          (app
;                                           (prov (member? x (cdr lst)))
;                                           member?
;                                           x
;                                           a7305))))
;                                      x7306)))))
;                          ((x7307
;                            (let ((a7302 (app (prov (car lst)) car lst)))
;                              (let ((a7303
;                                     (app
;                                      (prov (equal? (car lst) x))
;                                      equal?
;                                      a7302
;                                      x)))
;                                (if (prov
;                                     (if (equal? (car lst) x)
;                                       #t
;                                       (member? x (cdr lst))))
;                                  a7303
;                                  (let (prov '#t) ((x7304 '#t)) x7304)
;                                  (let (prov
;                                        (let ((a7305
;                                               (app (prov (cdr lst)) cdr lst)))
;                                          (app
;                                           (prov (member? x (cdr lst)))
;                                           member?
;                                           x
;                                           a7305)))
;                                    ((x7306
;                                      (let ((a7305
;                                             (app (prov (cdr lst)) cdr lst)))
;                                        (app
;                                         (prov (member? x (cdr lst)))
;                                         member?
;                                         x
;                                         a7305))))
;                                    x7306))))))
;                          x7307))))
;       ((x7308
;         (let ((a7300 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst)
;                  #f
;                  (if (equal? (car lst) x) #t (member? x (cdr lst)))))
;             a7300
;             (let (prov '#f) ((x7301 '#f)) x7301)
;             (let (prov
;                   (let ((a7302 (app (prov (car lst)) car lst)))
;                     (let ((a7303
;                            (app (prov (equal? (car lst) x)) equal? a7302 x)))
;                       (if (prov
;                            (if (equal? (car lst) x) #t (member? x (cdr lst))))
;                         a7303
;                         (let (prov '#t) ((x7304 '#t)) x7304)
;                         (let (prov
;                               (let ((a7305 (app (prov (cdr lst)) cdr lst)))
;                                 (app
;                                  (prov (member? x (cdr lst)))
;                                  member?
;                                  x
;                                  a7305)))
;                           ((x7306
;                             (let ((a7305 (app (prov (cdr lst)) cdr lst)))
;                               (app
;                                (prov (member? x (cdr lst)))
;                                member?
;                                x
;                                a7305))))
;                           x7306)))))
;               ((x7307
;                 (let ((a7302 (app (prov (car lst)) car lst)))
;                   (let ((a7303
;                          (app (prov (equal? (car lst) x)) equal? a7302 x)))
;                     (if (prov
;                          (if (equal? (car lst) x) #t (member? x (cdr lst))))
;                       a7303
;                       (let (prov '#t) ((x7304 '#t)) x7304)
;                       (let (prov
;                             (let ((a7305 (app (prov (cdr lst)) cdr lst)))
;                               (app
;                                (prov (member? x (cdr lst)))
;                                member?
;                                x
;                                a7305)))
;                         ((x7306
;                           (let ((a7305 (app (prov (cdr lst)) cdr lst)))
;                             (app
;                              (prov (member? x (cdr lst)))
;                              member?
;                              x
;                              a7305))))
;                         x7306))))))
;               x7307)))))
;       x7308))
;   (define (foldl kont7452 fun acc lst)
;     (let kont7452 (prov
;                    (let ((a7309 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             acc
;                             (foldl fun (fun (car lst) acc) (cdr lst))))
;                        a7309
;                        acc
;                        (let (prov
;                              (let ((a7310 (app (prov (car lst)) car lst)))
;                                (let ((a7311
;                                       (app
;                                        (prov (fun (car lst) acc))
;                                        fun
;                                        a7310
;                                        acc)))
;                                  (let ((a7312 (app (prov (cdr lst)) cdr lst)))
;                                    (app
;                                     (prov
;                                      (foldl fun (fun (car lst) acc) (cdr lst)))
;                                     foldl
;                                     fun
;                                     a7311
;                                     a7312)))))
;                          ((x7313
;                            (let ((a7310 (app (prov (car lst)) car lst)))
;                              (let ((a7311
;                                     (app
;                                      (prov (fun (car lst) acc))
;                                      fun
;                                      a7310
;                                      acc)))
;                                (let ((a7312 (app (prov (cdr lst)) cdr lst)))
;                                  (app
;                                   (prov
;                                    (foldl fun (fun (car lst) acc) (cdr lst)))
;                                   foldl
;                                   fun
;                                   a7311
;                                   a7312))))))
;                          x7313))))
;       ((x7314
;         (let ((a7309 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst) acc (foldl fun (fun (car lst) acc) (cdr lst))))
;             a7309
;             acc
;             (let (prov
;                   (let ((a7310 (app (prov (car lst)) car lst)))
;                     (let ((a7311
;                            (app (prov (fun (car lst) acc)) fun a7310 acc)))
;                       (let ((a7312 (app (prov (cdr lst)) cdr lst)))
;                         (app
;                          (prov (foldl fun (fun (car lst) acc) (cdr lst)))
;                          foldl
;                          fun
;                          a7311
;                          a7312)))))
;               ((x7313
;                 (let ((a7310 (app (prov (car lst)) car lst)))
;                   (let ((a7311 (app (prov (fun (car lst) acc)) fun a7310 acc)))
;                     (let ((a7312 (app (prov (cdr lst)) cdr lst)))
;                       (app
;                        (prov (foldl fun (fun (car lst) acc) (cdr lst)))
;                        foldl
;                        fun
;                        a7311
;                        a7312))))))
;               x7313)))))
;       x7314))
;   (define (reverse-helper kont7453 lst lst2)
;     (let kont7453 (prov
;                    (let ((a7315 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             lst2
;                             (reverse-helper (cdr lst) (cons (car lst) lst2))))
;                        a7315
;                        lst2
;                        (let (prov
;                              (let ((a7316 (app (prov (cdr lst)) cdr lst)))
;                                (let ((a7317 (app (prov (car lst)) car lst)))
;                                  (let ((a7318
;                                         (app
;                                          (prov (cons (car lst) lst2))
;                                          cons
;                                          a7317
;                                          lst2)))
;                                    (app
;                                     (prov
;                                      (reverse-helper
;                                       (cdr lst)
;                                       (cons (car lst) lst2)))
;                                     reverse-helper
;                                     a7316
;                                     a7318)))))
;                          ((x7319
;                            (let ((a7316 (app (prov (cdr lst)) cdr lst)))
;                              (let ((a7317 (app (prov (car lst)) car lst)))
;                                (let ((a7318
;                                       (app
;                                        (prov (cons (car lst) lst2))
;                                        cons
;                                        a7317
;                                        lst2)))
;                                  (app
;                                   (prov
;                                    (reverse-helper
;                                     (cdr lst)
;                                     (cons (car lst) lst2)))
;                                   reverse-helper
;                                   a7316
;                                   a7318))))))
;                          x7319))))
;       ((x7320
;         (let ((a7315 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst)
;                  lst2
;                  (reverse-helper (cdr lst) (cons (car lst) lst2))))
;             a7315
;             lst2
;             (let (prov
;                   (let ((a7316 (app (prov (cdr lst)) cdr lst)))
;                     (let ((a7317 (app (prov (car lst)) car lst)))
;                       (let ((a7318
;                              (app
;                               (prov (cons (car lst) lst2))
;                               cons
;                               a7317
;                               lst2)))
;                         (app
;                          (prov
;                           (reverse-helper (cdr lst) (cons (car lst) lst2)))
;                          reverse-helper
;                          a7316
;                          a7318)))))
;               ((x7319
;                 (let ((a7316 (app (prov (cdr lst)) cdr lst)))
;                   (let ((a7317 (app (prov (car lst)) car lst)))
;                     (let ((a7318
;                            (app (prov (cons (car lst) lst2)) cons a7317 lst2)))
;                       (app
;                        (prov (reverse-helper (cdr lst) (cons (car lst) lst2)))
;                        reverse-helper
;                        a7316
;                        a7318))))))
;               x7319)))))
;       x7320))
;   (define (reverse kont7454 lst)
;     (let kont7454 (prov
;                    (let ((a7321 (app (prov (list)) list)))
;                      (app
;                       (prov (reverse-helper lst (list)))
;                       reverse-helper
;                       lst
;                       a7321)))
;       ((x7322
;         (let ((a7321 (app (prov (list)) list)))
;           (app (prov (reverse-helper lst (list))) reverse-helper lst a7321))))
;       x7322))
;   (define (take-helper kont7455 lst n lst2)
;     (let kont7455 (prov
;                    (let ((a7323 '0))
;                      (let ((a7324 (app (prov (= n 0)) = n a7323)))
;                        (if (prov
;                             (if (= n 0)
;                               (reverse lst2)
;                               (take-helper
;                                (cdr lst)
;                                (- n 1)
;                                (cons (car lst) lst2))))
;                          a7324
;                          (let (prov (app (prov (reverse lst2)) reverse lst2))
;                            ((x7325 (app (prov (reverse lst2)) reverse lst2)))
;                            x7325)
;                          (let (prov
;                                (let ((a7326 (app (prov (cdr lst)) cdr lst)))
;                                  (let ((a7327 '1))
;                                    (let ((a7328
;                                           (app (prov (- n 1)) - n a7327)))
;                                      (let ((a7329
;                                             (app (prov (car lst)) car lst)))
;                                        (let ((a7330
;                                               (app
;                                                (prov (cons (car lst) lst2))
;                                                cons
;                                                a7329
;                                                lst2)))
;                                          (app
;                                           (prov
;                                            (take-helper
;                                             (cdr lst)
;                                             (- n 1)
;                                             (cons (car lst) lst2)))
;                                           take-helper
;                                           a7326
;                                           a7328
;                                           a7330)))))))
;                            ((x7331
;                              (let ((a7326 (app (prov (cdr lst)) cdr lst)))
;                                (let ((a7327 '1))
;                                  (let ((a7328 (app (prov (- n 1)) - n a7327)))
;                                    (let ((a7329
;                                           (app (prov (car lst)) car lst)))
;                                      (let ((a7330
;                                             (app
;                                              (prov (cons (car lst) lst2))
;                                              cons
;                                              a7329
;                                              lst2)))
;                                        (app
;                                         (prov
;                                          (take-helper
;                                           (cdr lst)
;                                           (- n 1)
;                                           (cons (car lst) lst2)))
;                                         take-helper
;                                         a7326
;                                         a7328
;                                         a7330))))))))
;                            x7331)))))
;       ((x7332
;         (let ((a7323 '0))
;           (let ((a7324 (app (prov (= n 0)) = n a7323)))
;             (if (prov
;                  (if (= n 0)
;                    (reverse lst2)
;                    (take-helper (cdr lst) (- n 1) (cons (car lst) lst2))))
;               a7324
;               (let (prov (app (prov (reverse lst2)) reverse lst2))
;                 ((x7325 (app (prov (reverse lst2)) reverse lst2)))
;                 x7325)
;               (let (prov
;                     (let ((a7326 (app (prov (cdr lst)) cdr lst)))
;                       (let ((a7327 '1))
;                         (let ((a7328 (app (prov (- n 1)) - n a7327)))
;                           (let ((a7329 (app (prov (car lst)) car lst)))
;                             (let ((a7330
;                                    (app
;                                     (prov (cons (car lst) lst2))
;                                     cons
;                                     a7329
;                                     lst2)))
;                               (app
;                                (prov
;                                 (take-helper
;                                  (cdr lst)
;                                  (- n 1)
;                                  (cons (car lst) lst2)))
;                                take-helper
;                                a7326
;                                a7328
;                                a7330)))))))
;                 ((x7331
;                   (let ((a7326 (app (prov (cdr lst)) cdr lst)))
;                     (let ((a7327 '1))
;                       (let ((a7328 (app (prov (- n 1)) - n a7327)))
;                         (let ((a7329 (app (prov (car lst)) car lst)))
;                           (let ((a7330
;                                  (app
;                                   (prov (cons (car lst) lst2))
;                                   cons
;                                   a7329
;                                   lst2)))
;                             (app
;                              (prov
;                               (take-helper
;                                (cdr lst)
;                                (- n 1)
;                                (cons (car lst) lst2)))
;                              take-helper
;                              a7326
;                              a7328
;                              a7330))))))))
;                 x7331))))))
;       x7332))
;   (define (take kont7456 lst n)
;     (let kont7456 (prov
;                    (let ((a7333 (app (prov (list)) list)))
;                      (app
;                       (prov (take-helper lst n (list)))
;                       take-helper
;                       lst
;                       n
;                       a7333)))
;       ((x7334
;         (let ((a7333 (app (prov (list)) list)))
;           (app (prov (take-helper lst n (list))) take-helper lst n a7333))))
;       x7334))
;   (define (length kont7457 lst)
;     (let kont7457 (prov
;                    (let ((a7335 (app (prov (null? lst)) null? lst)))
;                      (if (prov (if (null? lst) 0 (+ 1 (length (cdr lst)))))
;                        a7335
;                        (let (prov '0) ((x7336 '0)) x7336)
;                        (let (prov
;                              (let ((a7337 '1))
;                                (let ((a7338 (app (prov (cdr lst)) cdr lst)))
;                                  (let ((a7339
;                                         (app
;                                          (prov (length (cdr lst)))
;                                          length
;                                          a7338)))
;                                    (app
;                                     (prov (+ 1 (length (cdr lst))))
;                                     +
;                                     a7337
;                                     a7339)))))
;                          ((x7340
;                            (let ((a7337 '1))
;                              (let ((a7338 (app (prov (cdr lst)) cdr lst)))
;                                (let ((a7339
;                                       (app
;                                        (prov (length (cdr lst)))
;                                        length
;                                        a7338)))
;                                  (app
;                                   (prov (+ 1 (length (cdr lst))))
;                                   +
;                                   a7337
;                                   a7339))))))
;                          x7340))))
;       ((x7341
;         (let ((a7335 (app (prov (null? lst)) null? lst)))
;           (if (prov (if (null? lst) 0 (+ 1 (length (cdr lst)))))
;             a7335
;             (let (prov '0) ((x7336 '0)) x7336)
;             (let (prov
;                   (let ((a7337 '1))
;                     (let ((a7338 (app (prov (cdr lst)) cdr lst)))
;                       (let ((a7339
;                              (app (prov (length (cdr lst))) length a7338)))
;                         (app (prov (+ 1 (length (cdr lst)))) + a7337 a7339)))))
;               ((x7340
;                 (let ((a7337 '1))
;                   (let ((a7338 (app (prov (cdr lst)) cdr lst)))
;                     (let ((a7339 (app (prov (length (cdr lst))) length a7338)))
;                       (app (prov (+ 1 (length (cdr lst)))) + a7337 a7339))))))
;               x7340)))))
;       x7341))
;   (define (map kont7458 proc lst)
;     (let kont7458 (prov
;                    (let ((a7342 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             (list)
;                             (cons (proc (car lst)) (map proc (cdr lst)))))
;                        a7342
;                        (let (prov (app (prov (list)) list))
;                          ((x7343 (app (prov (list)) list)))
;                          x7343)
;                        (let (prov
;                              (let ((a7344 (app (prov (car lst)) car lst)))
;                                (let ((a7345
;                                       (app
;                                        (prov (proc (car lst)))
;                                        proc
;                                        a7344)))
;                                  (let ((a7346 (app (prov (cdr lst)) cdr lst)))
;                                    (let ((a7347
;                                           (app
;                                            (prov (map proc (cdr lst)))
;                                            map
;                                            proc
;                                            a7346)))
;                                      (app
;                                       (prov
;                                        (cons
;                                         (proc (car lst))
;                                         (map proc (cdr lst))))
;                                       cons
;                                       a7345
;                                       a7347))))))
;                          ((x7348
;                            (let ((a7344 (app (prov (car lst)) car lst)))
;                              (let ((a7345
;                                     (app (prov (proc (car lst))) proc a7344)))
;                                (let ((a7346 (app (prov (cdr lst)) cdr lst)))
;                                  (let ((a7347
;                                         (app
;                                          (prov (map proc (cdr lst)))
;                                          map
;                                          proc
;                                          a7346)))
;                                    (app
;                                     (prov
;                                      (cons
;                                       (proc (car lst))
;                                       (map proc (cdr lst))))
;                                     cons
;                                     a7345
;                                     a7347)))))))
;                          x7348))))
;       ((x7349
;         (let ((a7342 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst)
;                  (list)
;                  (cons (proc (car lst)) (map proc (cdr lst)))))
;             a7342
;             (let (prov (app (prov (list)) list))
;               ((x7343 (app (prov (list)) list)))
;               x7343)
;             (let (prov
;                   (let ((a7344 (app (prov (car lst)) car lst)))
;                     (let ((a7345 (app (prov (proc (car lst))) proc a7344)))
;                       (let ((a7346 (app (prov (cdr lst)) cdr lst)))
;                         (let ((a7347
;                                (app
;                                 (prov (map proc (cdr lst)))
;                                 map
;                                 proc
;                                 a7346)))
;                           (app
;                            (prov (cons (proc (car lst)) (map proc (cdr lst))))
;                            cons
;                            a7345
;                            a7347))))))
;               ((x7348
;                 (let ((a7344 (app (prov (car lst)) car lst)))
;                   (let ((a7345 (app (prov (proc (car lst))) proc a7344)))
;                     (let ((a7346 (app (prov (cdr lst)) cdr lst)))
;                       (let ((a7347
;                              (app (prov (map proc (cdr lst))) map proc a7346)))
;                         (app
;                          (prov (cons (proc (car lst)) (map proc (cdr lst))))
;                          cons
;                          a7345
;                          a7347)))))))
;               x7348)))))
;       x7349))
;   (define (filter kont7459 op lst)
;     (let kont7459 (prov
;                    (let ((a7350 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             (list)
;                             (if (op (car lst))
;                               (cons (car lst) (filter op (cdr lst)))
;                               (filter op (cdr lst)))))
;                        a7350
;                        (let (prov (app (prov (list)) list))
;                          ((x7351 (app (prov (list)) list)))
;                          x7351)
;                        (let (prov
;                              (let ((a7352 (app (prov (car lst)) car lst)))
;                                (let ((a7353
;                                       (app (prov (op (car lst))) op a7352)))
;                                  (if (prov
;                                       (if (op (car lst))
;                                         (cons (car lst) (filter op (cdr lst)))
;                                         (filter op (cdr lst))))
;                                    a7353
;                                    (let (prov
;                                          (let ((a7354
;                                                 (app
;                                                  (prov (car lst))
;                                                  car
;                                                  lst)))
;                                            (let ((a7355
;                                                   (app
;                                                    (prov (cdr lst))
;                                                    cdr
;                                                    lst)))
;                                              (let ((a7356
;                                                     (app
;                                                      (prov
;                                                       (filter op (cdr lst)))
;                                                      filter
;                                                      op
;                                                      a7355)))
;                                                (app
;                                                 (prov
;                                                  (cons
;                                                   (car lst)
;                                                   (filter op (cdr lst))))
;                                                 cons
;                                                 a7354
;                                                 a7356)))))
;                                      ((x7357
;                                        (let ((a7354
;                                               (app (prov (car lst)) car lst)))
;                                          (let ((a7355
;                                                 (app
;                                                  (prov (cdr lst))
;                                                  cdr
;                                                  lst)))
;                                            (let ((a7356
;                                                   (app
;                                                    (prov (filter op (cdr lst)))
;                                                    filter
;                                                    op
;                                                    a7355)))
;                                              (app
;                                               (prov
;                                                (cons
;                                                 (car lst)
;                                                 (filter op (cdr lst))))
;                                               cons
;                                               a7354
;                                               a7356))))))
;                                      x7357)
;                                    (let (prov
;                                          (let ((a7358
;                                                 (app
;                                                  (prov (cdr lst))
;                                                  cdr
;                                                  lst)))
;                                            (app
;                                             (prov (filter op (cdr lst)))
;                                             filter
;                                             op
;                                             a7358)))
;                                      ((x7359
;                                        (let ((a7358
;                                               (app (prov (cdr lst)) cdr lst)))
;                                          (app
;                                           (prov (filter op (cdr lst)))
;                                           filter
;                                           op
;                                           a7358))))
;                                      x7359)))))
;                          ((x7360
;                            (let ((a7352 (app (prov (car lst)) car lst)))
;                              (let ((a7353
;                                     (app (prov (op (car lst))) op a7352)))
;                                (if (prov
;                                     (if (op (car lst))
;                                       (cons (car lst) (filter op (cdr lst)))
;                                       (filter op (cdr lst))))
;                                  a7353
;                                  (let (prov
;                                        (let ((a7354
;                                               (app (prov (car lst)) car lst)))
;                                          (let ((a7355
;                                                 (app
;                                                  (prov (cdr lst))
;                                                  cdr
;                                                  lst)))
;                                            (let ((a7356
;                                                   (app
;                                                    (prov (filter op (cdr lst)))
;                                                    filter
;                                                    op
;                                                    a7355)))
;                                              (app
;                                               (prov
;                                                (cons
;                                                 (car lst)
;                                                 (filter op (cdr lst))))
;                                               cons
;                                               a7354
;                                               a7356)))))
;                                    ((x7357
;                                      (let ((a7354
;                                             (app (prov (car lst)) car lst)))
;                                        (let ((a7355
;                                               (app (prov (cdr lst)) cdr lst)))
;                                          (let ((a7356
;                                                 (app
;                                                  (prov (filter op (cdr lst)))
;                                                  filter
;                                                  op
;                                                  a7355)))
;                                            (app
;                                             (prov
;                                              (cons
;                                               (car lst)
;                                               (filter op (cdr lst))))
;                                             cons
;                                             a7354
;                                             a7356))))))
;                                    x7357)
;                                  (let (prov
;                                        (let ((a7358
;                                               (app (prov (cdr lst)) cdr lst)))
;                                          (app
;                                           (prov (filter op (cdr lst)))
;                                           filter
;                                           op
;                                           a7358)))
;                                    ((x7359
;                                      (let ((a7358
;                                             (app (prov (cdr lst)) cdr lst)))
;                                        (app
;                                         (prov (filter op (cdr lst)))
;                                         filter
;                                         op
;                                         a7358))))
;                                    x7359))))))
;                          x7360))))
;       ((x7361
;         (let ((a7350 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst)
;                  (list)
;                  (if (op (car lst))
;                    (cons (car lst) (filter op (cdr lst)))
;                    (filter op (cdr lst)))))
;             a7350
;             (let (prov (app (prov (list)) list))
;               ((x7351 (app (prov (list)) list)))
;               x7351)
;             (let (prov
;                   (let ((a7352 (app (prov (car lst)) car lst)))
;                     (let ((a7353 (app (prov (op (car lst))) op a7352)))
;                       (if (prov
;                            (if (op (car lst))
;                              (cons (car lst) (filter op (cdr lst)))
;                              (filter op (cdr lst))))
;                         a7353
;                         (let (prov
;                               (let ((a7354 (app (prov (car lst)) car lst)))
;                                 (let ((a7355 (app (prov (cdr lst)) cdr lst)))
;                                   (let ((a7356
;                                          (app
;                                           (prov (filter op (cdr lst)))
;                                           filter
;                                           op
;                                           a7355)))
;                                     (app
;                                      (prov
;                                       (cons (car lst) (filter op (cdr lst))))
;                                      cons
;                                      a7354
;                                      a7356)))))
;                           ((x7357
;                             (let ((a7354 (app (prov (car lst)) car lst)))
;                               (let ((a7355 (app (prov (cdr lst)) cdr lst)))
;                                 (let ((a7356
;                                        (app
;                                         (prov (filter op (cdr lst)))
;                                         filter
;                                         op
;                                         a7355)))
;                                   (app
;                                    (prov
;                                     (cons (car lst) (filter op (cdr lst))))
;                                    cons
;                                    a7354
;                                    a7356))))))
;                           x7357)
;                         (let (prov
;                               (let ((a7358 (app (prov (cdr lst)) cdr lst)))
;                                 (app
;                                  (prov (filter op (cdr lst)))
;                                  filter
;                                  op
;                                  a7358)))
;                           ((x7359
;                             (let ((a7358 (app (prov (cdr lst)) cdr lst)))
;                               (app
;                                (prov (filter op (cdr lst)))
;                                filter
;                                op
;                                a7358))))
;                           x7359)))))
;               ((x7360
;                 (let ((a7352 (app (prov (car lst)) car lst)))
;                   (let ((a7353 (app (prov (op (car lst))) op a7352)))
;                     (if (prov
;                          (if (op (car lst))
;                            (cons (car lst) (filter op (cdr lst)))
;                            (filter op (cdr lst))))
;                       a7353
;                       (let (prov
;                             (let ((a7354 (app (prov (car lst)) car lst)))
;                               (let ((a7355 (app (prov (cdr lst)) cdr lst)))
;                                 (let ((a7356
;                                        (app
;                                         (prov (filter op (cdr lst)))
;                                         filter
;                                         op
;                                         a7355)))
;                                   (app
;                                    (prov
;                                     (cons (car lst) (filter op (cdr lst))))
;                                    cons
;                                    a7354
;                                    a7356)))))
;                         ((x7357
;                           (let ((a7354 (app (prov (car lst)) car lst)))
;                             (let ((a7355 (app (prov (cdr lst)) cdr lst)))
;                               (let ((a7356
;                                      (app
;                                       (prov (filter op (cdr lst)))
;                                       filter
;                                       op
;                                       a7355)))
;                                 (app
;                                  (prov (cons (car lst) (filter op (cdr lst))))
;                                  cons
;                                  a7354
;                                  a7356))))))
;                         x7357)
;                       (let (prov
;                             (let ((a7358 (app (prov (cdr lst)) cdr lst)))
;                               (app
;                                (prov (filter op (cdr lst)))
;                                filter
;                                op
;                                a7358)))
;                         ((x7359
;                           (let ((a7358 (app (prov (cdr lst)) cdr lst)))
;                             (app
;                              (prov (filter op (cdr lst)))
;                              filter
;                              op
;                              a7358))))
;                         x7359))))))
;               x7360)))))
;       x7361))
;   (define (drop kont7460 lst n)
;     (let kont7460 (prov
;                    (let ((a7362 '0))
;                      (let ((a7363 (app (prov (= n 0)) = n a7362)))
;                        (if (prov (if (= n 0) lst (drop (cdr lst) (- n 1))))
;                          a7363
;                          lst
;                          (let (prov
;                                (let ((a7364 (app (prov (cdr lst)) cdr lst)))
;                                  (let ((a7365 '1))
;                                    (let ((a7366
;                                           (app (prov (- n 1)) - n a7365)))
;                                      (app
;                                       (prov (drop (cdr lst) (- n 1)))
;                                       drop
;                                       a7364
;                                       a7366)))))
;                            ((x7367
;                              (let ((a7364 (app (prov (cdr lst)) cdr lst)))
;                                (let ((a7365 '1))
;                                  (let ((a7366 (app (prov (- n 1)) - n a7365)))
;                                    (app
;                                     (prov (drop (cdr lst) (- n 1)))
;                                     drop
;                                     a7364
;                                     a7366))))))
;                            x7367)))))
;       ((x7368
;         (let ((a7362 '0))
;           (let ((a7363 (app (prov (= n 0)) = n a7362)))
;             (if (prov (if (= n 0) lst (drop (cdr lst) (- n 1))))
;               a7363
;               lst
;               (let (prov
;                     (let ((a7364 (app (prov (cdr lst)) cdr lst)))
;                       (let ((a7365 '1))
;                         (let ((a7366 (app (prov (- n 1)) - n a7365)))
;                           (app
;                            (prov (drop (cdr lst) (- n 1)))
;                            drop
;                            a7364
;                            a7366)))))
;                 ((x7367
;                   (let ((a7364 (app (prov (cdr lst)) cdr lst)))
;                     (let ((a7365 '1))
;                       (let ((a7366 (app (prov (- n 1)) - n a7365)))
;                         (app
;                          (prov (drop (cdr lst) (- n 1)))
;                          drop
;                          a7364
;                          a7366))))))
;                 x7367))))))
;       x7368))
;   (define (foldr kont7461 proc acc lst)
;     (let kont7461 (prov
;                    (let ((a7369 (app (prov (null? lst)) null? lst)))
;                      (if (prov
;                           (if (null? lst)
;                             acc
;                             (proc (car lst) (foldr proc acc (cdr lst)))))
;                        a7369
;                        acc
;                        (let (prov
;                              (let ((a7370 (app (prov (car lst)) car lst)))
;                                (let ((a7371 (app (prov (cdr lst)) cdr lst)))
;                                  (let ((a7372
;                                         (app
;                                          (prov (foldr proc acc (cdr lst)))
;                                          foldr
;                                          proc
;                                          acc
;                                          a7371)))
;                                    (app
;                                     (prov
;                                      (proc
;                                       (car lst)
;                                       (foldr proc acc (cdr lst))))
;                                     proc
;                                     a7370
;                                     a7372)))))
;                          ((x7373
;                            (let ((a7370 (app (prov (car lst)) car lst)))
;                              (let ((a7371 (app (prov (cdr lst)) cdr lst)))
;                                (let ((a7372
;                                       (app
;                                        (prov (foldr proc acc (cdr lst)))
;                                        foldr
;                                        proc
;                                        acc
;                                        a7371)))
;                                  (app
;                                   (prov
;                                    (proc (car lst) (foldr proc acc (cdr lst))))
;                                   proc
;                                   a7370
;                                   a7372))))))
;                          x7373))))
;       ((x7374
;         (let ((a7369 (app (prov (null? lst)) null? lst)))
;           (if (prov
;                (if (null? lst)
;                  acc
;                  (proc (car lst) (foldr proc acc (cdr lst)))))
;             a7369
;             acc
;             (let (prov
;                   (let ((a7370 (app (prov (car lst)) car lst)))
;                     (let ((a7371 (app (prov (cdr lst)) cdr lst)))
;                       (let ((a7372
;                              (app
;                               (prov (foldr proc acc (cdr lst)))
;                               foldr
;                               proc
;                               acc
;                               a7371)))
;                         (app
;                          (prov (proc (car lst) (foldr proc acc (cdr lst))))
;                          proc
;                          a7370
;                          a7372)))))
;               ((x7373
;                 (let ((a7370 (app (prov (car lst)) car lst)))
;                   (let ((a7371 (app (prov (cdr lst)) cdr lst)))
;                     (let ((a7372
;                            (app
;                             (prov (foldr proc acc (cdr lst)))
;                             foldr
;                             proc
;                             acc
;                             a7371)))
;                       (app
;                        (prov (proc (car lst) (foldr proc acc (cdr lst))))
;                        proc
;                        a7370
;                        a7372))))))
;               x7373)))))
;       x7374))
;   (define (append kont7462 lst1 lst2)
;     (let kont7462 (prov
;                    (let ((a7375 (app (prov (null? lst1)) null? lst1)))
;                      (if (prov
;                           (if (null? lst1)
;                             lst2
;                             (cons (car lst1) (append (cdr lst1) lst2))))
;                        a7375
;                        lst2
;                        (let (prov
;                              (let ((a7376 (app (prov (car lst1)) car lst1)))
;                                (let ((a7377 (app (prov (cdr lst1)) cdr lst1)))
;                                  (let ((a7378
;                                         (app
;                                          (prov (append (cdr lst1) lst2))
;                                          append
;                                          a7377
;                                          lst2)))
;                                    (app
;                                     (prov
;                                      (cons
;                                       (car lst1)
;                                       (append (cdr lst1) lst2)))
;                                     cons
;                                     a7376
;                                     a7378)))))
;                          ((x7379
;                            (let ((a7376 (app (prov (car lst1)) car lst1)))
;                              (let ((a7377 (app (prov (cdr lst1)) cdr lst1)))
;                                (let ((a7378
;                                       (app
;                                        (prov (append (cdr lst1) lst2))
;                                        append
;                                        a7377
;                                        lst2)))
;                                  (app
;                                   (prov
;                                    (cons (car lst1) (append (cdr lst1) lst2)))
;                                   cons
;                                   a7376
;                                   a7378))))))
;                          x7379))))
;       ((x7380
;         (let ((a7375 (app (prov (null? lst1)) null? lst1)))
;           (if (prov
;                (if (null? lst1)
;                  lst2
;                  (cons (car lst1) (append (cdr lst1) lst2))))
;             a7375
;             lst2
;             (let (prov
;                   (let ((a7376 (app (prov (car lst1)) car lst1)))
;                     (let ((a7377 (app (prov (cdr lst1)) cdr lst1)))
;                       (let ((a7378
;                              (app
;                               (prov (append (cdr lst1) lst2))
;                               append
;                               a7377
;                               lst2)))
;                         (app
;                          (prov (cons (car lst1) (append (cdr lst1) lst2)))
;                          cons
;                          a7376
;                          a7378)))))
;               ((x7379
;                 (let ((a7376 (app (prov (car lst1)) car lst1)))
;                   (let ((a7377 (app (prov (cdr lst1)) cdr lst1)))
;                     (let ((a7378
;                            (app
;                             (prov (append (cdr lst1) lst2))
;                             append
;                             a7377
;                             lst2)))
;                       (app
;                        (prov (cons (car lst1) (append (cdr lst1) lst2)))
;                        cons
;                        a7376
;                        a7378))))))
;               x7379)))))
;       x7380))
;   (define (hash . lst)
;     (let ((f7466
;            (lambda (kont7463)
;              (let ((f7465
;                     (lambda (lst)
;                       (let kont7463 (prov
;                                      (apply-prim
;                                       (prov (apply-prim hash lst))
;                                       hash
;                                       lst))
;                         ((x7381
;                           (apply-prim (prov (apply-prim hash lst)) hash lst)))
;                         x7381))))
;                (prim f7465 cdr lst)))))
;       (prim f7466 car lst)))
;   (define (hash-ref kont7467 h k)
;     (let (prov (prim (prov (prim hash-ref h k)) hash-ref h k))
;       ((x7382 (prim (prov (prim hash-ref h k)) hash-ref h k)))
;       (kont7467 x7382)))
;   (define (hash-set kont7468 h k v)
;     (let (prov (prim (prov (prim hash-set h k v)) hash-set h k v))
;       ((x7383 (prim (prov (prim hash-set h k v)) hash-set h k v)))
;       (kont7468 x7383)))
;   (define (hash-keys kont7469 h)
;     (let (prov (prim (prov (prim hash-keys h)) hash-keys h))
;       ((x7384 (prim (prov (prim hash-keys h)) hash-keys h)))
;       (kont7469 x7384)))
;   (define (hash-has-key? kont7470 h k)
;     (let (prov (prim (prov (prim hash-has-key? h k)) hash-has-key? h k))
;       ((x7385 (prim (prov (prim hash-has-key? h k)) hash-has-key? h k)))
;       (kont7470 x7385)))
;   (define (hash-count kont7471 h)
;     (let (prov (prim (prov (prim hash-count h)) hash-count h))
;       ((x7386 (prim (prov (prim hash-count h)) hash-count h)))
;       (kont7471 x7386)))
;   (define (set . lst)
;     (let ((f7475
;            (lambda (kont7472)
;              (let ((f7474
;                     (lambda (lst)
;                       (let kont7472 (prov
;                                      (apply-prim
;                                       (prov (apply-prim set lst))
;                                       set
;                                       lst))
;                         ((x7387
;                           (apply-prim (prov (apply-prim set lst)) set lst)))
;                         x7387))))
;                (prim f7474 cdr lst)))))
;       (prim f7475 car lst)))
;   (define (set->list kont7476 h)
;     (let (prov (prim (prov (prim set->list h)) set->list h))
;       ((x7388 (prim (prov (prim set->list h)) set->list h)))
;       (kont7476 x7388)))
;   (define (list->set kont7477 lst)
;     (let (prov (prim (prov (prim list->set lst)) list->set lst))
;       ((x7389 (prim (prov (prim list->set lst)) list->set lst)))
;       (kont7477 x7389)))
;   (define (set-add kont7478 s val)
;     (let (prov (prim (prov (prim set-add s val)) set-add s val))
;       ((x7390 (prim (prov (prim set-add s val)) set-add s val)))
;       (kont7478 x7390)))
;   (define (string? kont7479 str)
;     (let (prov (prim (prov (prim string? str)) string? str))
;       ((x7391 (prim (prov (prim string? str)) string? str)))
;       (kont7479 x7391)))
;   (define (string-length kont7480 str)
;     (let (prov (prim (prov (prim string-length str)) string-length str))
;       ((x7392 (prim (prov (prim string-length str)) string-length str)))
;       (kont7480 x7392)))
;   (define (string-ref kont7481 str pos)
;     (let (prov (prim (prov (prim string-ref str pos)) string-ref str pos))
;       ((x7393 (prim (prov (prim string-ref str pos)) string-ref str pos)))
;       (kont7481 x7393)))
;   (define (substring kont7482 str start end)
;     (let (prov
;           (prim (prov (prim substring str start end)) substring str start end))
;       ((x7394
;         (prim (prov (prim substring str start end)) substring str start end)))
;       (kont7482 x7394)))
;   (define (string-append kont7483 s1 s2)
;     (let (prov (prim (prov (prim string-append s1 s2)) string-append s1 s2))
;       ((x7395 (prim (prov (prim string-append s1 s2)) string-append s1 s2)))
;       (kont7483 x7395)))
;   (define (string->list kont7484 str)
;     (let (prov (prim (prov (prim string->list str)) string->list str))
;       ((x7396 (prim (prov (prim string->list str)) string->list str)))
;       (kont7484 x7396)))
;   (define (call kont7485 num1 num2)
;     (let kont7485 (prov (let ((x num1) (y num2)) x))
;       ((x num1))
;       (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
;   (define (brouhaha_main kont7486)
;     (let kont7486 (prov
;                    (let ((a7397 '5))
;                      (let ((a7398 '42))
;                        (app (prov (call 5 42)) call a7397 a7398))))
;       ((x7399
;         (let ((a7397 '5))
;           (let ((a7398 '42)) (app (prov (call 5 42)) call a7397 a7398)))))
;       x7399)))
; )