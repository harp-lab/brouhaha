#lang racket

;racket imports/rewrites/provides
(require racket/trace)
(require "compile.rkt")
(define racket-eval eval)
(provide interp)

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "foldl-style.haha")))
(define program_exp (cps-convert (anf-convert (alphatize (desugar (append prelude program))))))


(define (interp program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
       (match prog+
        [`((define (,name . ,param) ,body) ,rest ...)
            (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    ; (displayln (~a "env " (pretty-print env) "\n\nand exp " exp))
    (match exp
      [(? number? x) x]
      [`(quote ,(? number? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim ,op ,es ...)
        (displayln (~a "Prim op es: " exp))
        (apply (racket-eval op (make-base-namespace)) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim halt ,lst)
        (hash-ref env lst)]
      [`(apply-prim ,op ,e0) 
        (displayln (~a "\n\nApply-prim op e0: " exp "\n and env: " (pretty-print env)))
        (apply (racket-eval op (make-base-namespace)) (eval e0 env))]
      [`(lambda ,_ ,_) 
        `(closure ,exp ,env)]
      [`(if ,ec ,et ,ef)
       (let ([val (eval ec env)])
         (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
        ; (pretty-print exp)
        ; (pretty-print env)
        (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env))) env xs rhss))]
      [`(let* ([,xs ,rhss] ...) ,body)
        ; (pretty-print exp)
        (eval body (foldl (lambda (x rhs env+) (hash-set env+ x (eval rhs env+))) env xs rhss))]
      ; [`(halt ,x ,y) (displayln (~a "Halt case: " x " and y " y))]
      [`(,ef ,eas ...)
        ; (displayln (~a "Im in the app case"))
        (let ([fn-val (eval ef env)]
              [arg-vals 
                (map (lambda (ea) (eval ea env)) eas)])
          (appl fn-val arg-vals))]))

  (define (appl fn-val arg-vals)
    ; (displayln (~a "Im in the appl case with " fn-val " and " arg-vals))
    (match fn-val
      [(? number? x) (cadr arg-vals)]
      [`(closure (lambda (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda ,x ,eb) ,env)
        (eval eb (hash-set env x arg-vals))]
      [`(define (,name ,params ...) ,body)
        ; (displayln (~a "Line 57: \n" fn-val "\n" arg-vals "\n" params))
        (eval body (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name . ,(? symbol? params)) ,body)
        ; (displayln (~a "Line 60: \n" fn-val "\n" arg-vals))
        (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]
      ))

  (eval `(main halt) (add-top-lvl env)))

(interp program_exp)