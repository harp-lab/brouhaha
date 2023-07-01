#lang racket

(require "compile.rkt")
(provide interp)

(define new-ns (make-base-empty-namespace))

(parameterize ([current-namespace new-ns])
  ; if you want to add another namespace just add it here
  (namespace-require 'racket/set)
  (namespace-require 'racket/base))

(define (racket-eval-in-new-ns expr)
  (parameterize ([current-namespace new-ns])
    (eval expr)))

(define (interp program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
      (match prog+
        [`((define (,name . ,param)
             ,body)
           ,rest ...)
         (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    (match exp
      [(? string? y) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? flonum? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim ,op ,es ...)
       (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim ,op ,e0) (apply (racket-eval-in-new-ns op) (eval e0 env))]
      [`(lambda ,_ ,_) `(closure ,exp ,env)]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let* ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      [`(apply ,e0 ,e1) (appl (eval e0 env) (eval e1 env))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (lambda (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda ,x ,eb) ,env) (eval eb (hash-set env x arg-vals))]
      [`(define (,name ,params ...)
          ,body)
       (eval body
             (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name . ,(? symbol? params))
          ,body)
       (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]))

  (eval `(brouhaha_main) (add-top-lvl env)))
