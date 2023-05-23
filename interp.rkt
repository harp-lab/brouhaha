#lang racket


;; Interpreter, Desugar, Alphatize, ANF, CPS, Closure Conversion
; Compare the output for all, they should be the same


;racket imports
(require racket/trace)

(require "compile.rkt")

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "easy.haha")))
(define desugared_exp (desugar (append prelude program)))
(define prims `(+ - / *))

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

(define (interp-desugar exp env)
  (define (eval exp env)
    (match exp
      [(? number?) exp]
      [`(quote ,x)#:when (number? x) x]
      [(? boolean?) exp]
      [(? symbol?) (hash-ref env exp)]
      [`(,op ,@e0)#:when (member op prims) 
        (pretty-print e0)
        (eval (hash-ref env op) (hash-set env op e0))
        ; (pretty-print env)
        ] ; rethink this
      [`(apply-prim ,op ,_) ; rethink this
    ;    #:when (member op prims)
    ;    (display (~a "Op: " op "\nArgs: " (hash-ref env op) "\n"))
       (define args (hash-ref env op))
       (let* ([eval-args (map (lambda (arg) (eval arg env)) args)]
              [prim-result (foldl op (car eval-args) (cdr eval-args))])
         (eval prim-result env))
      ]
      [`(lambda (,x) ,eb) `(closure ,exp ,env)]
      [`(if ,ec ,et ,ef)
       (let ([val (eval ec env)])
         (if val (eval et env) (eval ef env)))]
      [`(,ef ,ea)
       (let ([fn-val (eval ef env)]
             [arg-val (eval ea env)])
         (apply fn-val arg-val))]
      [`(define (main) ,@body)
        (match (car body)
            [`(,name ,@args)
                (define next (hash-ref env name)) ; could be cleaner. MVP style
                (match next
                    [`(define (,name ,@params) ,@body)
                        (define new-env 
                            (foldl (lambda (to-set env)
                                (match to-set
                                    [`(,x . ,y)
                                        (hash-set env x y)]))
                            env
                            (map list params args)))                       
                        (eval next new-env)])])]
      [`(define (,@name ,@params) ,body)
        (eval body env)]))

    (trace eval)

  (define (apply fn-val arg-val)
    (match fn-val
      [`(closure (lambda (,x) ,eb) ,env)
       (eval eb (hash-set env x arg-val))]
      [(? procedure? fn)
       (fn arg-val)]))
  (eval exp env))


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

(interp-desugar (hash-ref top-env 'main) top-env)