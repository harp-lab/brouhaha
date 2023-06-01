#lang racket
(require racket/trace)
(require "compile.rkt")
(define racket-eval eval)
(provide interp-closure)

(define (interp-closure program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
      (match prog+
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name `(closure ,(first prog+))) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    ; (displayln (~a "exp: " exp "\n env: " env "\n----"))
    (match exp
      [`(quote ,(? number? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim halt ,lst) (hash-ref env lst)]
      [`(prim ,op ,es ...)
       (apply (racket-eval op (make-base-namespace)) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim ,op ,e0) (apply (racket-eval op (make-base-namespace)) (eval e0 env))]
      [`(make-closure ,ef ,xs ...)
       (let ([free-vals (map (lambda (x) (eval x env)) xs)])
         `(closure ,(second (eval ef env)) ,@free-vals))]
      [`(clo-apply ,f ,x) (appl (eval f env) (eval x env))]
      [`(clo-app ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]
      [`(env-ref ,enve ,index) (list-ref (eval enve env) (+ index 1))]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let* ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [`(closure (proc (,fx ,envx ,xs ...) ,eb) ,fr-lst ...)
       (eval eb
             (foldl (lambda (x val env) (hash-set env x val))
                    (hash-set (add-top-lvl env) envx fn-val)
                    xs
                    arg-vals))]
      [`(closure (proc (,fx ,envx . ,args) ,eb) ,fr-lst ...)
       (eval eb (hash-set (hash-set (add-top-lvl env) envx fn-val) args arg-vals))]))

  (eval `(let ([halt (make-closure halt)]) (brouhaha_main halt))
        (add-top-lvl (hash-set env 'halt `(closure (proc (halt _env x) (prim halt x)))))))