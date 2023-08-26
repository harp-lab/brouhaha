'((define (prov (define (call num1 num2)
                  (let ([x num1] [y num2]) x)))
    (call kont3383 num1 num2)
    (let (prov
          [lambda
           (x)
           (let (prov
                 [lambda
                  (y)
                  (kont3383 x)])
             ((f3384 (lambda (y) (kont3383 x))))
             (f3384 num2))])
      ((f3385 (lambda (x)
                (let (prov
                      [lambda
                       (y)
                       (kont3383 x)])
                  ((f3384 (lambda (y) (kont3383 x))))
                  (f3384 num2)))
                  
                  ))
      (f3385 num1)))
  (define (prov (define (brouhaha_main)
                  (call '5 '42)))
    (brouhaha_main kont3386)
    (let (prov '5)
      ((a3381 '5))
      (let (prov '42)
        ((a3382 '42))
        (app (prov (call '5 '42)) call kont3386 a3381 a3382)))))


5
