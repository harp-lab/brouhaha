(define (fibfp n)
  (if (< n 2.)
      n
      (+ (fibfp (- n 1.))
         (fibfp (- n 2.)))))


(define (brouhaha_main)
  (fibfp 35.0))

(write (brouhaha_main))
(newline)

