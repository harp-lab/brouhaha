#lang racket


(define (loop i sum)
  (if (< i 0.)
      sum
      (loop (- i 1.) (+ i sum))))

(define (run n)
  (loop n 0.))

(define (brouhaha_main)
  (run 5.))

(brouhaha_main)
