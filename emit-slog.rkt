#lang racket

(provide write-program-for-slog)

;; This program will take in a brouhaha input and convert it to a slog-compatible database

(define (write-program-for-slog program)
  (define (sym->qstr x)
    (format "\"~a\"" (symbol->string x)))
  (define (write-def def)
    (match def
      [`(define (,fname ,(? symbol? xs) ...)
          ,body)
       (format "(store (addr \"~a\") (define \"~a\" (fixedparam [~a]) ~a))\n"
               fname
               fname
               (foldr string-append "" (map sym->qstr xs))
               (write-exp body))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (format "(store (addr \"~a\") (define \"~a\" (varparam ~a) ~a))\n"
               fname
               fname
               (sym->qstr params)
               (write-exp body))]))
  (define (write-exp exp [ref? #t])
    (match exp
      [`',e (format "(quote ~a)" (write-exp e))]
      [(? symbol? x) (if ref? (format "(ref \"~a\")" x) (format "\"~a\"" x))]
      [(? boolean? x) (if x "(bool \"t\")" "(bool \"f\")")]
      [(? number? x) (format "(int \"~a\")" x)]
      [(? string? x) (format "(string \"~a\")" x)]
      [`(lambda (,(? symbol? xs) ...) ,body)
       (foldr string-append
              ""
              `("(lambda (fixedparam [" ,@(map sym->qstr xs) "]) " ,(write-exp body) ")"))]
      [`(lambda ,(? symbol? x) ,body)
       (foldr string-append "" `("(lambda (varparam " ,(sym->qstr x) ") " ,(write-exp body) ")"))]
      [`(let ([,xs ,es] ...) ,body)
       (foldr string-append
              ""
              `("(let [" ,(foldr (lambda (x e acc)
                                   (string-append
                                    (format " (binding ~a ~a)" (sym->qstr x) (write-exp e #f))
                                    acc))
                                 ""
                                 xs
                                 es)
                         "] "
                         ,(write-exp body)
                         ")"))]
      [`(if ,grd ,tExp ,fExp)
       (foldr string-append
              ""
              `("(if " ,(write-exp grd) " " ,(write-exp tExp) " " ,(write-exp fExp) ")"))]
      [`(apply-prim ,op ,e1)
       (foldr string-append "" `("(apply-prim \"" ,(~a op) "\" " ,(write-exp e1) ")"))]
      [`(prim ,op ,es ...)
       (foldr string-append "" `("(prim \"" ,(~a op) "\" [" ,@(map write-exp es) "])"))]
      [`(apply ,e0 ,e1) (foldr string-append "" `("(appl " ,(write-exp e0) " " ,(write-exp e1) ")"))]
      [`(,ef ,eas ...)
       (foldr string-append "" `("(app " ,(write-exp ef) " [" ,@(map write-exp eas) "])"))]))
  (define (emit-top-level-env program)
    (format "(top-level-env ~a)"
            (foldr (lambda (def code)
                     (match def
                       [`(define (,fname . ,_)
                           ,_)
                        (format "(env-set ~a \"~a\" (addr \"~a\"))" code fname fname)]))
                   "(empty)"
                   program)))

  (display (foldr string-append (emit-top-level-env program) (map write-def program)))
  (void))

; (write-program-for-slog `((define (call num1 num2) (let ((x83113 num1) (y83114 num2)) x83113))
; (define (brouhaha_main) (call '5 '42))))

;;; (write-program-for-slog `((define (brouhaha_main) ((lambda (x) x) 42))))

;;;    (write-program-for-slog '((define (+ . lst) (apply-prim + lst))
;;;    (define (call)
;;;      (+
;;;       '32
;;;       '98))
;;;    (define (brouhaha_main) (call)))
;;;  )

; (write-program-for-slog `((define (call) (if '#f '1 '2))
;   (define (brouhaha_main) (call))))
