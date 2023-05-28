#lang racket
(require racket/trace)
(require "compile.rkt")
(define racket-eval eval)
(provide interp-closure)

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "fact.haha")))
; Works for (yes.haha, easy.haha)
(define program_exp
  (closure-convert (cps-convert (anf-convert (alphatize (desugar (append prelude program)))))))

; (pretty-print program_exp)

(define (interp-closure program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
      (match prog+
        [`((proc (,name . ,param) ,body) ,rest ...)
         (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    ; (pretty-print env)
    (pretty-print exp)
    (match exp
      [(? number?) exp]
      [`() exp]
      [`(,(? number? x) ,(? number? y)) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim ,op ,es ...)
       (apply (racket-eval op (make-base-namespace)) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim halt ,lst) (hash-ref env lst)]
      [`(apply-prim ,op ,e0) (apply (racket-eval op (make-base-namespace)) (eval e0 env))]
      ; xs should correspond to "envlist" in compile.rkt
      [`(make-closure ,ef ,xs ...) 'todo]
    ;   [`(make-closure ,ef ,xs ...)
    ;     (let ([free-vals (map (lambda (x) (eval x env)) xs)])
    ;         `(closure ,ef ,free-vals))]
      [`(clo-app ,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]
      [`(env-ref ,env ,index) (list-ref (eval env env) index)]
      [`(if ,ec ,et ,ef) (let ([val (eval ec env)]) (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let* ([,xs ,rhss] ...) ,body)
       (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      [`(,ef ,eas ...)
       (let ([fn-val (eval ef env)] [arg-vals (map (lambda (ea) (eval ea env)) eas)])
         (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (pretty-print fn-val)
    (pretty-print arg-vals)
    (match fn-val
      [(? number? x) (eval arg-vals (hash))]
      [(? procedure? fn) (fn arg-vals)]
      [`(closure (proc (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (proc ,x ,eb) ,env) (eval eb (hash-set env x arg-vals))]
      [`(proc (,name ,params ...) ,body)
       (eval body
             (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(proc (,name . ,(? symbol? params)) ,body)
       (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]))

  ;; Top level environment
  (eval `(main halt) (add-top-lvl env)))

(interp-closure program_exp)
