#lang racket
; '((define (call num1 num2) (let ((x num1) (y num2)) x))
;   (define (brouhaha_main) (call '5 '42)))

; '((define (call num1 num2) (let ((x num1) (y num2)) x))
;   (define (brouhaha_main) (call '5 '42)))

; '((define (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
;     (call num1 num2)
;     (let (prov (let ((x num1) (y num2)) x)) ((x num1) (y num2)) x))
;   (define (prov (define (brouhaha_main) (call '5 '42)))
;     (brouhaha_main)
;     (app
;      (prov (call '5 '42))
;      call
;      (app (prov '5) quote 5)
;      (app (prov '42) quote 42))))

; '((define (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
;     (call num1 num2)
;     (let (prov (let ((x num1) (y num2)) x))
;       ((x num1))
;       (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
;   (define (prov (define (brouhaha_main) (call '5 '42)))
;     (brouhaha_main)
;     (let (prov
;           (let ((a2349 5))
;             (let ((a2350 (app (prov '5) quote a2349)))
;               (let ((a2351 42))
;                 (let ((a2352 (app (prov '42) quote a2351)))
;                   (app (prov (call '5 '42)) call a2350 a2352))))))
;       ((x2353
;         (let ((a2349 5))
;           (let ((a2350 (app (prov '5) quote a2349)))
;             (let ((a2351 42))
;               (let ((a2352 (app (prov '42) quote a2351)))
;                 (app (prov (call '5 '42)) call a2350 a2352)))))))
;       x2353)))

; '((define (call kont2354 num1 num2)
;     (let kont2354 (prov (let ((x num1) (y num2)) x))
;       ((x num1))
;       (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
;   (define (brouhaha_main kont2355)
;     (let kont2355 (prov
;                    (let ((a2349 5))
;                      (let ((a2350 (app (prov '5) quote a2349)))
;                        (let ((a2351 42))
;                          (let ((a2352 (app (prov '42) quote a2351)))
;                            (app (prov (call '5 '42)) call a2350 a2352))))))
;       ((x2353
;         (let ((a2349 5))
;           (let ((a2350 (app (prov '5) quote a2349)))
;             (let ((a2351 42))
;               (let ((a2352 (app (prov '42) quote a2351)))
;                 (app (prov (call '5 '42)) call a2350 a2352)))))))
;       x2353)))


; '((define (call kont2318 num1 num2)
;     (let ((f23202322
;            (lambda (x23142323)
;              (let ((f23192324 (lambda (y23152325) (kont2318 x23142323))))
;                (f23192324 num2)))))
;       (f23202322 num1)))
;   (define (brouhaha_main kont2321)
;     (let ((a23162326 '5))
;       (let ((a23172327 '42)) (call kont2321 a23162326 a23172327)))))

; '((define (call kont2349 num1 num2)
;     (let kont2349 (prov (let ((x num1) (y num2)) x))
;       ((x num1))
;       (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
;   (define (brouhaha_main kont2350)
;     (let kont2350 (prov
;                    (let ((a2346 '5))
;                      (let ((a2347 '42))
;                        (app (prov (call '5 '42)) call a2346 a2347))))
;       ((x2348
;         (let ((a2346 '5))
;           (let ((a2347 '42)) (app (prov (call '5 '42)) call a2346 a2347)))))
;       x2348)))

; '((proc
;    (call _2351 kont2349 num1 num2)
;    (clo-app
;     let
;     kont2349
;     (prov (let ((x num1) (y num2)) x))
;     ((x num1))
;     (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
;   (proc
;    (brouhaha_main _2352 kont2350)
;    (clo-app
;     let
;     kont2350
;     (prov
;      (let ((a2346 '5))
;        (let ((a2347 '42)) (app (prov (call '5 '42)) call a2346 a2347))))
;     ((x2348
;       (let ((a2346 '5))
;         (let ((a2347 '42)) (app (prov (call '5 '42)) call a2346 a2347)))))
;     x2348)))

(define (x y)
  (match y
    [symbol? y]
    [_ "no"]))

(x `(brouhaha_main))