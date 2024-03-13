#lang racket

;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; FIB -- Doubly recursive computation of the 40th fibonacci number (102334155), using (< n 2) to terminate the recursion; 1 iteration.


(define (fib n)
  (if (< n 2)
      n
      (+ (fib (- n 1))
         (fib (- n 2)))))


(define (brouhaha_main)
  (fib 40))
  
 (brouhaha_main)
