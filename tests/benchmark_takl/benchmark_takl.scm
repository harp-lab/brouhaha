(define (listn n)
  (if (= n 0)
      (list)
      (cons n (listn (- n 1)))))

(define l18 (listn 18))
(define l12 (listn 12))
(define  l6 (listn 6))

(define (mas x y z)
  (if (not (shorterp y x))
      z
      (mas (mas (cdr x) y z)
           (mas (cdr y) z x)
           (mas (cdr z) x y))))

(define (shorterp x y)
  (and (not (null? y))
       (or (null? x)
           (shorterp (cdr x)
                     (cdr y)))))

(define (brouhaha_main)
  (mas 
       (list 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21
            20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1)

       (list 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1)

       (list 12 11 10 9 8 7 6 5 4 3 2 1)))

(write (brouhaha_main))
(newline)
