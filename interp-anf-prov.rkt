#lang racket

; (require "compile.rkt")
(provide interp)
(define new-ns (make-base-empty-namespace))

(parameterize ([current-namespace new-ns])
  ; if you want to add another namespace just add it here
  (namespace-require 'racket/set)
  (namespace-require 'racket/base))

(define (racket-eval-in-new-ns expr)
  (parameterize ([current-namespace new-ns]) (eval expr)))

(define (interp program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
      (match prog+
        [`((define (,name . ,param)
             ,body)
           ,rest ...)
         (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`((define ,prov
             (,name . ,param)
             ,body)
           ,rest ...)
         (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`((define-prim ,f-name
             ,params-count ...)
           ,rest ...)
         (loop (hash-set env+ f-name `(define (,f-name . lst) (apply-prim ,f-name lst))) (cdr prog+))
         ]
        [`() env+])))

  (define (eval exp env)
    ; (pretty-print exp)
    (match exp
      ; [(? string? y) y]
      [`(quote ,(? string? y)) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? flonum? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim (prov ,prov ...) ,op ,es ...) (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es))]
      [`(prim ,op ,es ...) (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim (prov ,prov ...) ,op ,e0) (apply (racket-eval-in-new-ns op) (eval e0 env))]
      [`(apply-prim ,op ,e0) (apply (racket-eval-in-new-ns op) (eval e0 env))]
      ; [`(apply-prim ,op ,e0) (apply (racket-eval-in-new-ns op) (eval e0 env))]
      [`(lambda (prov ,prov ...) ,_ ,_) `(closure ,exp ,env)]
      [`(lambda ,_ ,_) `(closure ,exp ,env)]
      [`(if (prov ,prov ...) ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(let (prov ,prov ...) ([,xs ,rhss] ...) ,body)

       ; (pretty-print (list exp))
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      ; [`(let* ([,xs ,rhss] ...) ,body)
      ;  (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      [`(apply (prov ,prov ...) ,e0 ,e1) (appl (eval e0 env) (eval e1 env))]
      [`(apply ,e0 ,e1) (appl (eval e0 env) (eval e1 env))]
      [`(app (prov ,prov ...) ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (lambda (prov ,prov ...) (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda (prov ,prov ...) ,x ,eb) ,env) (eval eb (hash-set env x arg-vals))]
      [`(closure (lambda ,x ,eb) ,env) (eval eb (hash-set env x arg-vals))]
      [`(define (prov ,prov ...) (,name ,params ...)
          ,body)
       (eval body
             (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name ,params ...)
          ,body)
       (eval body
             (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (prov ,prov ...) (,name . ,(? symbol? params))
          ,body)
       (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name . ,(? symbol? params))
          ,body)
       (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]
      ; [`(define-prim ,f-name ,params-count ...)
      ;   (eval `(apply-prim ,f-name lst) (hash-set (add-top-lvl (hash)) 'lst arg-vals))]
      ))

  (eval `(brouhaha_main) (add-top-lvl env)))