#lang racket

;racket imports
(require racket/trace)

(require "compile.rkt")

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "easy.haha")))
(define desugared_exp (desugar (append prelude program)))

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
  (define (eval exp env kont)
    (match exp
      [(? number? n) (ret n kont)]
      [(? boolean? x) (ret x kont)]
      [(? symbol? y) (ret (hash-ref env y) kont)]
      [`(lambda (,x) ,eb) (ret `(closure ,exp ,env) kont)]
      [`(if ,ec ,et ,ef) (eval ec env `(if-k ,et ,ef ,env ,kont))]
      [`(,ef ,ea) (eval ef env `(ar ,ea ,env ,kont))]
      [`(define (main) ,@body)
        (match (car body)
            [`(,name ,@args)
            ; (displayln (string-append "args: " (string-join (map symbol->string args) ", ") "\nname: " (symbol->string name)))
                (define next (hash-ref env name)) ; could actually do this with a let tbh, but naive approach for MVP
                (match next
                    [`(define (,name ,@params) ,@body)
                        (define new-env 
                            (foldl (lambda (to-set env)
                                (match to-set
                                    [`(,x . ,y)
                                        (hash-set env x y)]))
                            env
                            (map list params args)))                       
                        (eval next new-env kont)])])]))

    ;   [`(define (main) ,@body) 
    ;     (match (car body)
    ;         [`(,name ,@args)
    ;             (displayln (~a args "\n" name))
    ;             (define next (hash-ref env name)) ; could actually do this with a let tbh, but naive approach for MVP
    ;             (match next
    ;                 [`(define (,name ,@params) ,@body)
    ;                     (foldl (lambda (env param arg) (hash-set env param arg)) env params args)])
    ;             (displayln (~a env))
    ;         ])]))
  (define (ret val kont)
    (match kont
      ['halt val]
      [`(ar ,ea ,env ,k) (eval ea env `(ar ,ea ,env ,k))]
      [`(fn ,vf ,k) (apply vf val k)]
      [`(if-k ,et ,ef ,env ,k) (if val (eval et env k) (eval ef env k))]))
  (define (apply vf va kont)
    (match vf
      [`(closure (lambda (,x) ,eb) ,envlam)
        (eval eb (hash-set envlam x va) kont)]))
  (eval exp env 'halt))



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