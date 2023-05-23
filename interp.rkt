#lang racket

;racket imports
(require racket/trace)

(require "compile.rkt")

(define prelude (read-program (build-path (current-directory) "prelude.haha")))
(define program (read-program (build-path (current-directory) "tests" "easy.haha")))
(define desugared_exp (desugar (append prelude program)))

(pretty-print desugared_exp)


(define (interp-desugar exp)
  (define (eval exp env kont)
    (match exp
      [(? number? n) (ret n kont)]
      [(? boolean? x) (ret x kont)]
    ;   [(or (? number?) (? boolean?))
    ;     (ret exp kont)]
      [(? symbol? y) (ret (hash-ref env y) kont)]
      [`(lambda (,x) ,eb) (ret `(closure ,exp ,env) kont)]
      [`(if ,ec ,et ,ef) (eval ec env `(if-k ,et ,ef ,env ,kont))]
      [`(,ef ,ea) (eval ef env `(ar ,ea ,env ,kont))]
      
      [`(define (main) ,body) 
        (match body
            [`(,name ,args ...) 
                (match exp
                    [`(define ,name ,sig ,body)
                        (displayln (~a "name: " name "\n sig: " sig "\n body: " body))
                    ])])]

      ))

  (define (ret val kont)
    (match kont
      ['halt val]
      [`(ar ,ea ,env ,k) (eval ea env `(fn ,val ,k))]
    ;   [`(fn ,vf ,k) #:when (and (number? vf) (equal? k 'halt)) val]
      [`(fn ,vf ,k) (apply vf val k)]
      [`(if-k ,et ,ef ,env ,k) (if val (eval et env k) (eval ef env k))]))

  (define (apply vf va kont)
    (match vf
      [`(closure (lambda (,x) ,eb) ,envlam)
        (eval eb (hash-set envlam x va) kont)]))

  (eval exp (hash) 'halt))

;   (interp-desugar desugared_exp)

(define top-env
    (foldl (lambda (def env)
             (match def
               [`(define (,fname . ,params)
                   ,body)
                (when (hash-has-key? env fname)
                  (error "Function name is already defined"))
                (hash-set env fname fname)]))
           (hash)
           desugared_exp))

(pretty-print top-env)