#lang racket
;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; TAK -- A triply recursive integer function related to the Takeuchi function, a Gabriel benchmark. 10 iterations of (tak 32 16 8). A test of non-tail calls and arithmetic. [Historical note: The Symbolics 3600 performed 1 iteration of (tak 18 12 6) in 0.43 seconds using generic arithmetic. On our test machine, Larceny runs that benchmark in 0.00016 seconds. That's 2500 times as fast.]

(define (tak x y z)
  (if (not (< y x))
      z
      (tak (tak (- x 1) y z)
           (tak (- y 1) z x)
           (tak (- z 1) x y))))

(define (brouhaha_main)
  (tak 40 20 11))
  
(brouhaha_main)
