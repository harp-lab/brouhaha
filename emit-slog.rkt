#lang racket

(provide write-program-for-slog)

;; This program will take in a brouhaha input and convert it to a slog-compatible database

(define (write-program-for-slog program)
  (define (sym->qstr x) (format "\"~a\"" (symbol->string x)))
  (define (write-def def)
    (match def 
      [`(define (,fname ,(? symbol? xs) ...) ,body)
       (format "(define \"~a\" (fixedparam [~a]) ~a)\n" fname (foldr string-append "" (map sym->qstr xs)) (write-exp body))] 
      [`(define (,fname . ,(? symbol? params)) ,body)
       (format "(define \"~a\" (varparam ~a) ~a)\n" fname (sym->qstr params) (write-exp body))]
    )
  )
  (define (write-exp exp)
    (match exp
           [`',e (format "(quote ~a)" (write-exp e))]
           [(? symbol? x)
            (format "(ref \"~a\")" x)]
           [(? boolean? x)
            (if x
             "(bool \"t\")"
             "(bool \"f\")")]
           [(? number? x)
            (format "(const \"~a\")" x)]
           [`(lambda (,(? symbol? xs) ...) ,body)
            (foldr string-append "" `("(lambda (fixedparam [" ,@(map sym->qstr xs) "]) " ,(write-exp body) ")"))]
           [`(let ([,xs ,es] ...) ,body)
            (foldr string-append "" `("let [" ,@(foldr (lambda (x e acc) (cons `(binding ,x ,e) acc)) `() xs es) "] " ,(write-exp body) ")"))]
           [`(if ,grd ,tExp ,fExp)
            (foldr string-append "" `("(if " ,(write-exp grd) " " ,(write-exp tExp) " " ,(write-exp fExp) ")"))]
           [`(apply-prim ,op ,e1)
            (foldr string-append "" `("(apply-prim \"" ,(~a op) "\" " ,(write-exp e1) ")"))]
           [`(prim ,op ,es ...)
            (foldr string-append "" `("(prim \"" ,(~a op) "\" [" ,@(map write-exp es) "])"))]
           [`(apply ,e0 ,e1)
            (foldr string-append "" `("(apply " ,(write-exp e0) " " ,(write-exp e1) ")"))]
           [`(,ef ,eas ...)
            (foldr string-append "" `("(app " ,(write-exp ef) " [" ,@(map write-exp eas) "])"))]
    )
  )

  (display (foldr string-append "" (map write-def program)))
  (void))


  (write-program-for-slog '((define (+ . lst) (apply-prim + lst))
  (define (call)
    (+
     '32
     '98))
  (define (brouhaha_main) (call)))
)