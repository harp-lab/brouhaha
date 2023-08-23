; '((proc
;    (lam2349 env2350 y)
;    (let ((kont2345 (env-ref env2350 2)))
;      (let ((x (env-ref env2350 1))) (clo-app kont2345 x))))
;   (proc
;    (lam2351 env2352 x)
;    (let ((kont2345 (env-ref env2352 2)))
;      (let ((num2 (env-ref env2352 1)))
;        (let ((f2346 (make-closure lam2349 x kont2345)))
;          (clo-app f2346 num2)))))
  ; (proc
  ;  (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
  ;  (call _2353 kont2345 num1 num2)
  ;  (let ((f2347 (make-closure lam2351 num2 kont2345))) (clo-app f2347 num1)))
  ; (proc
  ;  (prov (define (brouhaha_main) (call '5 '42)))
  ;  (brouhaha_main _2356 kont2348)
  ;  (let ((a2343 '5))
  ;    (let ((a2344 '42))
  ;      (clo-app app (prov (call '5 '42)) call kont2348 a2343 a2344)))))

#lang racket

; (define (test e)
;   (match e
;     [`(proc (,prov ...)
;            (,func ,vars ...)
;            ,body)
;       (pretty-print "wow")]
;     [else
;       (pretty-print "not wow")]))

; (test `(proc
;    (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
;    (call _2353 kont2345 num1 num2)
;    (let ((f2347 (make-closure lam2351 num2 kont2345))) (clo-app f2347 num1))))




