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

; (interp-closure '((proc
;                    (+ _4921 . lst)
;                    (let ((kont4916 (prim car lst)))
;                      (let ((lst (prim cdr lst)))
;                        (let ((x4912 (apply-prim + lst))) (clo-app kont4916 x4912)))))
;                   (proc
;                    (call _4924 kont4918)
;                    (let ((a4913 '1)) (let ((a4914 '2)) (clo-app + kont4918 a4913 a4914))))
;                   (proc
;                    (lam4925 env4926 x4915)
;                    (let ((kont4919 (env-ref env4926 1))) (clo-app kont4919 x4915)))
;                   (proc
;                    (brouhaha_main _4927 kont4919)
;                    (let ((f4920 (make-closure lam4925 kont4919))) (clo-app call f4920))))
;                 )