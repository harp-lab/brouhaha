#lang racket


;;;;
;; RUN THIS USING `racket interp.rkt > debug.out`
;;
;;;
;racket imports/rewrites/provides
(require racket/trace)
(require "compile.rkt")
(define racket-eval eval)

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "power.haha")))
(define program_exp (cps-convert (anf-convert (alphatize (desugar (append prelude program))))))

(define (interp program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
       (match prog+
        [`((define (,name . ,param) ,body) ,rest ...)
            (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    (pretty-print exp)
    (match exp
      [`(,(? number? x) ,(? number? y)) y]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim ,op ,es ...)
        (displayln (~a "PRIM: OP: " op "\n\n PRIM ES: " es "\n\n"))
        (apply (racket-eval op (make-base-namespace)) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim halt ,lst)
        (hash-ref env lst)]
      [`(apply-prim ,op ,e0) 
        (displayln (~a "OP: " op "\n\nE0: " e0 "\n\n"))
        (apply (racket-eval op (make-base-namespace)) (eval e0 env))]
      [`(lambda ,_ ,_) 
        `(closure ,exp ,env)]
      [`(if ,ec ,et ,ef)
       (let ([val (eval ec env)])
         (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
        (displayln (~a "XS: " xs "\n\nRHSS: " rhss "\n\nBODY: " body "\n\nEXP: " exp "\n\n"))
        (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let* ([,xs ,rhss] ...) ,body)
        (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      [`(,ef ,eas ...)
        (let ([fn-val (eval ef env)]
              [arg-vals 
                (map (lambda (ea) (eval ea env)) eas)])
          (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    (match fn-val
      [(? number? x) (eval arg-vals (hash))]
      [`(closure (lambda (,xs ...) ,eb) ,env)
        (displayln (~a "APPL: FN_VAL: " fn-val "\n\nAPPL ARG-VALS: " arg-vals "\n\n"))
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda ,x ,eb) ,env)
        (displayln (~a "APPL-V: FN_VAL: " fn-val "\n\nAPPL-V ARG-VALS: " arg-vals "\n\n"))
        (eval eb (hash-set env x arg-vals))]
      [`(define (,name ,params ...) ,body)
        (eval body (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name . ,(? symbol? params)) ,body)
        (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]))

  (eval `(main halt) (add-top-lvl env)))

(interp program_exp)
