#lang racket

; (require "compile.rkt")
(provide interp-closure)
(require "coverage/coverage.rkt")
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
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]

        [`((define-prim ,f-name ,params-count ...) ,rest ...)

         (define k (gensym 'kont))
         (define x (gensym 'x))
         (define y (gensym '_))

         (loop (hash-set env+ f-name
                         `(closure
                           (proc (,f-name ,y . lst)
                                 (let ([,k (prim car lst)])
                                   (let ([lst (prim cdr lst)])
                                     (let ((,x (apply-prim ,f-name lst)))
                                       (clo-app ,k ,x)))))))
               (cdr prog+))]

        [`() env+])))

  (define (eval exp env)
    ; (pretty-print exp)
    (match (coverage exp)
      ; [(? string? y) y]
      [`(quote ,(? string? y)) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? flonum? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (coverage (hash-ref env exp))]
      [`(lambda ,_ ,_) (coverage `(closure ,exp ,env))]
      [`(prim halt ,lst) (coverage (hash-ref env lst))]
      [`(prim ,op ,es ...) (coverage (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es)))]
      [`(apply-prim ,op ,e0) (coverage (apply (racket-eval-in-new-ns op) (eval e0 env)))]
      [`(make-closure ,ef ,xs ...)
       (let ([free-vals (map (lambda (x) (eval x env)) xs)])
         (coverage `(closure ,(second (eval ef env)) ,@free-vals)))]
      [`(clo-apply ,f ,x) (coverage (appl (eval f env) (eval x env)))]
      [`(clo-app ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (coverage (appl fn-val arg-vals)))]
      [`(env-ref ,enve ,index) (coverage (list-ref (eval enve env) (+ index 1)))]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (coverage (if val (eval et env) (eval ef env))))]
      [`(let ([,xs ,rhss] ...) ,body)
       (coverage (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss)))]
      [`(let ([,xs ,rhss] ...) ,body)
       (coverage (eval body (coverage (foldl (lambda (x rhs env+) (hash-set env+ (coverage x) (eval rhs env))) env xs rhss))))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (coverage (appl fn-val arg-vals)))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (proc (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
       (coverage (eval eb
                       (foldl (lambda (x val env) (hash-set env x val))
                              (hash-set (add-top-lvl env) envx fn-val)
                              xs
                              arg-vals)))]
      [`(closure (proc (,fx ,envx . ,args) ,eb) ,fr-lst ...)
       (coverage (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals)))]
      ))

  (eval `(let ([halt (make-closure halt)]) (brouhaha_main halt))
        (add-top-lvl (hash-set env 'halt `(closure (proc (halt _env x) (prim halt x)))))))