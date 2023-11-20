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
        [`((proc (prov ,prov ...) (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]

        [`((define-prim ,f-name
             ,params-count ...)
           ,rest ...)

         (define k (gensym 'kont))
         (define x (gensym 'x))
         (define y (gensym '_))

         (loop (hash-set env+ f-name
                         `(closure
                           (proc (prov prov) (,f-name ,y . lst)
                                 (let (prov prov) ([,k (prim (prov prov) car lst)])
                                   (let (prov prov) ([lst (prim (prov prov) cdr lst)])
                                     (let (prov prov) ((,x (apply-prim (prov prov) ,f-name lst)))
                                       (clo-app (prov dummy) ,k ,x)))))))
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
      [`(lambda (prov ,prov ...) ,_ ,_) (coverage `(closure ,exp ,env))]
      [`(lambda ,_ ,_) (coverage `(closure ,exp ,env))]
      [`(prim halt ,lst) (coverage (hash-ref env lst))]
      [`(prim (prov ,prov ...) ,op ,es ...) (coverage (apply (racket-eval-in-new-ns op) (map (lambda (e) (eval e env)) es)))]
      [`(apply-prim (prov ,prov ...) ,op ,e0) (coverage (apply (racket-eval-in-new-ns op) (eval e0 env)))]
      [`(make-closure ,ef ,xs ...)
       (let ([free-vals (map (lambda (x) (eval x env)) xs)])
         (coverage `(closure ,(second (eval ef env)) ,@free-vals)))]
      [`(clo-apply (prov ,prov ...) ,f ,x) (coverage (appl (eval f env) (eval x env)))]
      [`(clo-app (prov ,prov ...) ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (coverage (appl fn-val arg-vals)))]
      [`(env-ref ,enve ,index) (coverage (list-ref (eval enve env) (+ index 1)))]
      [`(if (prov ,prov ...) ,ec ,et ,ef) (let ([val (eval ec env)]) (coverage (if val (eval et env) (eval ef env))))]
      [`(let (prov ,prov ...) ([,xs ,rhss] ...) ,body)
       (coverage (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss)))]
      [`(let (prov ,prov ...) ([,xs ,rhss] ...) ,body)
       (coverage (eval body (coverage (foldl (lambda (x rhs env+) (hash-set env+ (coverage x) (eval rhs env))) env xs rhss))))]
      [`(app (prov ,prov ...) ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (coverage (appl fn-val arg-vals)))]
      [`(,ef ,eas ...)
        (pretty-print exp)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (coverage (appl fn-val arg-vals)))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (proc (prov ,prov ...) (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
       (coverage (eval eb
                       (foldl (lambda (x val env) (hash-set env x val))
                              (hash-set (add-top-lvl env) envx fn-val)
                              xs
                              arg-vals)))]
      ; [`(closure (proc (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
      ;  (eval eb
      ;        (foldl (lambda (x val env) (hash-set env x val))
      ;               (hash-set (add-top-lvl env) envx fn-val)
      ;               xs
      ;               arg-vals))]
      [`(closure (proc (prov ,prov ...) (,fx ,envx . ,args) ,eb) ,fr-lst ...)
       (coverage (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals)))]
      ; [`(closure (proc (,fx ,envx . ,args) ,eb) ,fr-lst ...)
      ;  (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals))]
      ))

  (eval `(let (prov dummy) ([halt (make-closure halt)]) (brouhaha_main halt))
        (add-top-lvl (hash-set env 'halt `(closure (proc (prov dummy) (halt _env x) (prim halt x)))))))