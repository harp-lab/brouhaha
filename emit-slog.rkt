#lang racket

(provide write-program-for-slog)

;; This program will take in a brouhaha input and convert it to a slog-compatible database
;;; (define apply-prims `(+ - / * = > < <= >=))
;;; (define prims `(modulo null? equal? eq? cons car cdr odd? even? list float->int int->float))
(define (member? op lst)
  (if (member op lst)
  #t
  #f))

(define (write-program-for-slog program)
  (define (sym->qstr x)
    (format "\"~a\"" (symbol->string x)))
  (define (write-def def)
    (match def
      [`(define (,fname ,(? symbol? xs) ...)
          ,body)
        (format "(store (f-addr [] \"~a\") (define \"~a\" (fixedparam [~a]) ~a))\n"
              fname
              fname
              (foldr string-append "" (map (lambda (x) (string-append x " ")) (map sym->qstr xs)))
              (write-exp body))]
      [`(define (,fname . ,(? symbol? params))
          ,body)
       (format "(store (f-addr [] \"~a\") (define \"~a\" (varparam ~a) ~a))\n"
               fname
               fname
               (sym->qstr params)
               (write-exp body))]
      [`(define-prim ,fname ,param-counts ...)
        (string-append 
              (format "(store (f-addr [] \"~a\") (define-prim \"~a\" (varparam \"lst\")))\n"
                    fname
                    fname)
              (string-append 
                    (format "\t(prim-count \"~a\" ["
                        fname)
                    (foldr string-append "" (map (lambda (x) (string-append x " ")) (map number->string param-counts)))
                    "])\n"))]
      ))
  (define (write-exp exp)
    (match exp
      [`',(? symbol? x) (format "(symbol \"~a\")" x)]
      [`',e (write-exp e)]
      [(? symbol? x) (format "(ref \"~a\")" x)]
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
                                    (format " (binding ~a ~a)" (sym->qstr x) (write-exp e))
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
      ;;; [`(apply-prim ,op ,e1)
      ;;;  (foldr string-append "" `("(apply-prim \"" ,(~a op) "\" " ,(write-exp e1) ")"))]
      [`(prim ,op ,es ...)
       (foldr string-append "" `("(prim \"" ,(~a op) "\" [" ,@(map write-exp es) "])"))]
      [`(apply ,e0 ,e1) 
       (foldr string-append "" `("(appl " ,(write-exp e0) " " ,(write-exp e1) ")"))]
      [`(,ef ,eas ...)
        ;;; (cond
        ;;;   [(member? ef prims) (write-exp `(prim ,ef ,eas))]
        ;;;   [(member? ef apply-prims) (write-exp `(apply-prim ,ef ,eas))]
        ;;;   [else (foldr string-append "" `("(app " ,(write-exp ef) " [" ,@(map write-exp eas) "])"))])
        (foldr string-append "" `("(app " ,(write-exp ef) " [" ,@(map write-exp eas) "])"))
       ]))

  (format "~a" (foldr string-append "" (map write-def program))))

; (write-program-for-slog `((define (call) (+ '1 '2))
;   (define (brouhaha_main) (call))))

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

; (display (write-program-for-slog `((define-prim + 2 3))))

