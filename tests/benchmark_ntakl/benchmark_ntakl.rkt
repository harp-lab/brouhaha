#lang racket

;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; NTAKL -- The takl benchmark contains a peculiar boolean expression. Rewriting that expression into a more readable idiom allows some compilers to generate better code for it.

(define (listn n)
  (if (= n 0)
      (list)
      (cons n (listn (- n 1)))))

(define (mas x y z)
  (if (not (shorterp y x))
      z
      (mas (mas (cdr x) y z)
           (mas (cdr y) z x)
           (mas (cdr z) x y))))

(define (shorterp x y)
  (cond ((null? y) #f)
        ((null? x) #t)
        (else
         (shorterp (cdr x) (cdr y)))))

(define (brouhaha_main)
  (mas
   (list 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21
         20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1)

   (list 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1)

   (list 12 11 10 9 8 7 6 5 4 3 2 1)))
  
(brouhaha_main)
