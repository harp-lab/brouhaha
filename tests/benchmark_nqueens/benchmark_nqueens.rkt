;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; NQUEENS -- Compute number of solutions to 8-queens problem.

#lang racket
(define calls 0)
(define (ok? row dist placed)
  (set! calls (add1 calls))
  (if (null? placed)
      #t
      (and (not (= (car placed) (+ row dist)))
           (not (= (car placed) (- row dist)))
           (ok? row (+ dist 1) (cdr placed)))))

(define (q-helper stack count)
  (set! calls (add1 calls))
  (if (null? stack)
      count
      (let* ((state (car stack))
             (x (car state))
             (y (car (cdr state)))
             (z (car (cdr (cdr state)))))

        (cond
          [(null? x)
           (if (null? y)
               (q-helper (cdr stack) (+ count 1))
               (q-helper (cdr stack) count))]
          [else
           (q-helper (cons (list (cdr x) (cons (car x) y) z)
                            (if (ok? (car x) 1 z)
                                (cons (list (append (cdr x) y) (list) (cons (car x) z))
                                      (cdr stack))
                                (cdr stack)))
                    count)])
        )))

(define (iota1 n l)
  (set! calls (add1 calls))
  (if (= n 0) l (iota1 (- n 1) (cons n l))))

(define (nqueens n)
  (set! calls (add1 calls))
  (q-helper (list (list (iota1 n (list)) (list) (list))) 0)
  )

(define (brouhaha_main)
  (nqueens 6))

(brouhaha_main)
(displayln calls)