#lang racket

(define (ack m n)
  (cond ((= m 0) (+ n 1))
        ((= n 0) (ack (- m 1) 1))
        (else (ack (- m 1) (ack m (- n 1))))))

(define (brouhaha_main)
  (ack 3
       12
       ))

(brouhaha_main)
