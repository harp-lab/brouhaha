#lang racket

;; This program will take in a brouhaha input and convert it to a slog-compatible database

(define (write-program-for-slog program)
  (define (sym->qstr x) (format "\"~a\"" (symbol->string x)))
  (define (write-def def)
    (match def [`(define (,fname ,(? symbol? xs) ...) ,body)
                (format "(top-level-define (define ~a (fixedparam [~a]) ~a))" fname (foldr string-append "" (map sym->qstr xs)) (write-exp body))] 
               ...))
  (define (write-exp exp)
    (match exp
           [`(lambda (,(? symbol? xs) ...) ,body)
            (foldr string-append "" `("(lambda (fixedparam [" ,@(map sym->qstr xs) "]) " ,(write-exp body) ")"))]
           [(? symbol? x) 
            (format "(ref \"~a\")" x)]
           [(? boolean? x)
            (if x
             "(bool \"t\")"
             "(bool \"f\")")]
           [(? number?)
            (format "(const \"~a\")")]))
  (display (foldr string-append (map write-def program)))
  (void))