#lang racket
(provide coverage)

; (define-syntax-rule (coverage body)
;   (let ([result body])
;     (printf "[~a:~a] ~v = ~a~%" (syntax-source #'body) (syntax-line #'body) 'body result)
;     (with-output-to-file ".coverage_temp"
;             (lambda () (printf "~a" (syntax-line #'body)))
;             #:exists 'append)
;     result))

(define-syntax-rule (coverage body)
  (let ([result body])
    (printf ":~a]\n" (syntax-line #'body))
    result))

