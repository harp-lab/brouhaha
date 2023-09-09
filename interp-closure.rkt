#lang racket

; (require "compile.rkt")
(provide interp-closure)

(define new-ns (make-base-empty-namespace))

(parameterize ([current-namespace new-ns])
  ; if you want to add another namespace just add it here
  (namespace-require 'racket/set)
  (namespace-require 'racket/base))

(define (racket-eval-in-new-ns expr)
  (parameterize ([current-namespace new-ns]) (eval expr)))

(define (interp-closure program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
      (match prog+
        [`((proc (prov ,prov ...) (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    (match exp
      ; [(? string? y) y]
      [`(quote ,(? string? y)) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? flonum? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(lambda (prov ,prov ...) ,_ ,_) `(closure ,exp ,env)]
      [`(lambda ,_ ,_) `(closure ,exp ,env)]
      [`(prim halt ,lst) (hash-ref env lst)]
      [`(prim (prov ,prov ...) ,op ,es ...) (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim (prov ,prov ...) ,op ,e0) (apply (racket-eval-in-new-ns op) (eval e0 env))]
      [`(make-closure ,ef ,xs ...)
       (let ([free-vals (map (lambda (x) (eval x env)) xs)])
         `(closure ,(second (eval ef env)) ,@free-vals))]
      [`(clo-apply ,f ,x) (appl (eval f env) (eval x env))]
      [`(clo-app ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]
      [`(env-ref (prov ,prov ...) ,enve ,index) (list-ref (eval enve env) (+ index 1))]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(let (prov ,prov ...) ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(app (prov ,prov ...) ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (proc (prov ,prov ...) (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
       (eval eb
             (foldl (lambda (x val env) (hash-set env x val))
                    (hash-set (add-top-lvl env) envx fn-val)
                    xs
                    arg-vals))]
      [`(closure (proc (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
       (eval eb
             (foldl (lambda (x val env) (hash-set env x val))
                    (hash-set (add-top-lvl env) envx fn-val)
                    xs
                    arg-vals))]
      [`(closure (proc (prov ,prov ...) (,fx ,envx . ,args) ,eb) ,fr-lst ...)
       (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals))]
      [`(closure (proc (,fx ,envx . ,args) ,eb) ,fr-lst ...)
       (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals))]))

  (eval `(let `([halt (make-closure halt)]) (brouhaha_main halt))
        (add-top-lvl (hash-set env 'halt `(closure `() (proc (halt _env x) (prim halt x)))))))