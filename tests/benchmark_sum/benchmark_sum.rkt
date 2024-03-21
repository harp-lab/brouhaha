#lang racket

;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; SUM -- Sums the integers from 0 to 10000, 200000 iterations.

(define (loop i sum)
  (if (< i 0)
      sum
      (loop (- i 1) (+ i sum))))

(define (run n)
  (loop n 0))


(define (brouhaha_main)
  (run 65000))
 
 (brouhaha_main)
