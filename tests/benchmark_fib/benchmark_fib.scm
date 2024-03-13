(define (fib n)
  (if (< n 2)
      n
      (+ (fib (- n 1))
         (fib (- n 2)))))


(define (brouhaha_main)
  (fib 40))

(write (brouhaha_main))
(newline)
