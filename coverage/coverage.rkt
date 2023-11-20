#lang racket
(provide coverage)

(define-syntax-rule (coverage body)
  ; (let ([result body])
    ; (with-output-to-file "coverage.txt"
    ;   (lambda ()
    ;     (printf "[~a:~a] ~v = ~a~%" (syntax-source #'body) (syntax-line #'body) 'body result)
    ;     )

    ;   #:exists 'append)
    ; result)
    body)

; (define-syntax-rule (coverage body)
;   (let ([result body])
;     ; (printf ":~a]\n" (syntax-line #'body))
;     (printf "[~a] ~v = ~v~%" (syntax-line #'body) 'body result)
;     result))

