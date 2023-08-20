'((define (call num1 num2) (let ((x num1) (y num2)) x))
  (define (brouhaha_main) (call '5 '42)))

'((define (call num1 num2) (let ((x num1) (y num2)) x))
  (define (brouhaha_main) (call '5 '42)))

'((define (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
    (call num1 num2)
    (let (prov (let ((x num1) (y num2)) x)) ((x num1) (y num2)) x))
  (define (prov (define (brouhaha_main) (call '5 '42)))
    (brouhaha_main)
    (app
     (prov (call '5 '42))
     call
     (app (prov '5) quote 5)
     (app (prov '42) quote 42))))

'((define (prov (define (call num1 num2) (let ((x num1) (y num2)) x)))
    (call num1 num2)
    (let (prov (let ((x num1) (y num2)) x))
      ((x num1))
      (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
  (define (prov (define (brouhaha_main) (call '5 '42)))
    (brouhaha_main)
    (let (prov
          (let ((a2349 5))
            (let ((a2350 (app (prov '5) quote a2349)))
              (let ((a2351 42))
                (let ((a2352 (app (prov '42) quote a2351)))
                  (app (prov (call '5 '42)) call a2350 a2352))))))
      ((x2353
        (let ((a2349 5))
          (let ((a2350 (app (prov '5) quote a2349)))
            (let ((a2351 42))
              (let ((a2352 (app (prov '42) quote a2351)))
                (app (prov (call '5 '42)) call a2350 a2352)))))))
      x2353)))

'((define (call kont2354 num1 num2)
    (let kont2354 (prov (let ((x num1) (y num2)) x))
      ((x num1))
      (let (prov (let ((x num1) (y num2)) x)) ((y num2)) x)))
  (define (brouhaha_main kont2355)
    (let kont2355 (prov
                   (let ((a2349 5))
                     (let ((a2350 (app (prov '5) quote a2349)))
                       (let ((a2351 42))
                         (let ((a2352 (app (prov '42) quote a2351)))
                           (app (prov (call '5 '42)) call a2350 a2352))))))
      ((x2353
        (let ((a2349 5))
          (let ((a2350 (app (prov '5) quote a2349)))
            (let ((a2351 42))
              (let ((a2352 (app (prov '42) quote a2351)))
                (app (prov (call '5 '42)) call a2350 a2352)))))))
      x2353)))


