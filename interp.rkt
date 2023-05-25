#lang racket


;; Interpreter, Desugar, Alphatize, ANF, CPS, Closure Conversion
; Compare the output for all, they should be the same


;racket imports
(require racket/trace)


(require "compile.rkt")

(define racket-eval eval)

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "count-divisors.haha")))
(define desugared_exp (anf-convert (alphatize (desugar (append prelude program)))))

; (displayln (~a desugared_exp))

(define top-env
    (foldl (lambda (def env)
        (match def
            [`(define (,fname . ,params) ,body)
                (when (hash-has-key? env fname)
                    (error "Function name is already defined"))
                (hash-set env fname `(define (,fname . ,params) ,body))]))
    (hash)
    desugared_exp))

; (pretty-print top-env)

(define (interp program (env (hash)))
  (define (add-top-lvl env)
    (let loop ([env+ env] [prog+ program])
       (match prog+
        [`((define (,name . ,param) ,body) ,rest ...)
            (loop (hash-set env+ name (first prog+)) (cdr prog+))]
        [`() env+])))

  (define (eval exp env)
    (match exp
      [`(quote ,(? number? x)) x]
      [`(quote ,(? boolean? x)) x]
      [`(quote ,(? symbol? x)) x]
      [(? symbol?) (hash-ref env exp)]
      [`(prim ,op ,es ...)
        (apply (racket-eval op (make-base-namespace)) (map (lambda (e) (eval e env)) es))]
      [`(apply-prim ,op ,e0) 
        (apply (racket-eval op (make-base-namespace)) (eval e0 env))]
      [`(lambda ,_ ,_) 
        `(closure ,exp ,env)]
      [`(if ,ec ,et ,ef)
       (let ([val (eval ec env)])
         (if val (eval et env) (eval ef env)))]
      [`(let ([,xs ,rhss] ...) ,body)
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
      [`(closure (lambda (,xs ...) ,eb) ,env)
       (eval eb (foldl (lambda (x val env) (hash-set env x val)) env xs arg-vals))]
      [`(closure (lambda ,x ,eb) ,env)
        (eval eb (hash-set env x arg-vals))]
      [`(define (,name ,params ...) ,body)
        (eval body (foldl (lambda (x val env) (hash-set env x val)) (add-top-lvl (hash)) params arg-vals))]
      [`(define (,name . ,(? symbol? params)) ,body)
        (eval body (hash-set (add-top-lvl (hash)) params arg-vals))]))

    ; synthesize a call site for main
  (eval `(main) (add-top-lvl env))) ; 'main

(interp desugared_exp)


; (define (ret val kont)
;     (match kont
;       ['halt val]
;       [`(ar ,ea ,env ,k) (eval ea env `(ar ,ea ,env ,k))]
;       [`(fn ,vf ,k) (apply vf val k)]
;       [`(if-k ,et ,ef ,env ,k) (if val (eval et env k) (eval ef env k))]))


; (define (interp-desugar exp env)
;   (define (eval exp env kont)
;     (match exp
;       [(? number? n) (ret n kont)]
;       [(? boolean? x) (ret x kont)]
;     ;   [(or (? number?) (? boolean?))
;     ;     (ret exp kont)]
;       [(? symbol? y) (ret (hash-ref env y) kont)]
;       [`(lambda (,x) ,eb) (ret `(closure ,exp ,env) kont)]
;       [`(if ,ec ,et ,ef) (eval ec env `(if-k ,et ,ef ,env ,kont))]
;       [`(,ef ,ea) (eval ef env `(ar ,ea ,env ,kont))]
      
;       [`(define (main) ,@body) 
;         (match (car body)
;             [`(,name ,@args)
;                 'todo])]
;     ))

;   (define (ret val kont)
;     (match kont
;       ['halt val]
;       [`(ar ,ea ,env ,k) (eval ea env `(fn ,val ,k))]
;     ;   [`(fn ,vf ,k) #:when (and (number? vf) (equal? k 'halt)) val]
;       [`(fn ,vf ,k) (apply vf val k)]
;       [`(if-k ,et ,ef ,env ,k) (if val (eval et env k) (eval ef env k))]))

;   (define (apply vf va kont)
;     (match vf
;       [`(closure (lambda (,x) ,eb) ,envlam)
;         (eval eb (hash-set envlam x va) kont)]))

;   (eval exp env 'halt))