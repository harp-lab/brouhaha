'((define (prov (define (call num1 num2)
                  (let ([x num1] [y num2]) x)))
    (call num1 num2)
    (let (prov
          [let
           ((x num1) (y num2))
           x])
      ((x num1))
      (let (prov
            [let
             ((x num1) (y num2))
             x])
        ((y num2))
        x)))
  (define (prov (define (brouhaha_main)
                  (call '5 '42)))
    (brouhaha_main)
    (let (prov '5)
      ((a3377 '5))
      (let (prov '42)
        ((a3378 '42))
        (app (prov (call '5 '42)) call a3377 a3378)))))

5
