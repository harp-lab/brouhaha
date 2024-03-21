(define  (interval-list m n)
  (if (> m n)
      (list)
      (cons m (interval-list (+ 1 m) n))))

(define (remove-multiples n l)
  (if (null? l)
      (list)
      (if (= (remainder (car l) n) 0)
          (remove-multiples n (cdr l))
          (cons (car l)
                (remove-multiples n (cdr l))))))

(define (sieve l)
    (if (null? l)
        (list)
        (cons (car l)
              (sieve (remove-multiples (car l) (cdr l))))))

(define (primes<= n)
  (sieve (interval-list 2 n)))


(define (brouhaha_main)
  (primes<= 150000))

(write (brouhaha_main))
(newline)
