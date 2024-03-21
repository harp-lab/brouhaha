#lang racket
(define (make-halves lst len half1 half2 cur-idx)
  (if (null? lst)
      (list half1 half2)
      (if (< cur-idx (/ len 2))
          (make-halves (cdr lst) len
                       (cons (car lst) half1) half2 (+ 1 cur-idx))
          (make-halves (cdr lst) len
                       half1 (cons (car lst) half2) (+ 1 cur-idx)))))

;; (make-halves `(1 2 3 4 5 6 7 8) 8)
;; (make-halves `(1 2 3 4 5 6 7) 7)
;; (make-halves `() 7)
(define (merge lst1 lst2 acc)
  (displayln (~a lst1 " lst2: " lst2 " acc: "acc))
  (if (null? lst1)
      (reverse (foldl (lambda (x acc) (cons x acc)) acc lst2))
      (if (null? lst2)
          (reverse (foldl (lambda (x acc) (cons x acc)) acc lst1))
          (if (<= (car lst1) (car lst2))
              (merge (cdr lst1) lst2 (cons (car lst1) acc))
              (merge lst1 (cdr lst2) (cons (car lst2) acc))))))

;; (define (merge lst1 lst2)
;;   (cond
;;     [(null? lst1) lst2]
;;     [(null? lst2) lst1]
;;     [(< (car lst1) (car lst2))
;;      (cons (car lst1) (merge (cdr lst1) lst2))]
;;     [else
;;      (cons (car lst2) (merge lst1 (cdr lst2)))]))

;; (merge `(0 1) `(2 3))
;; (merge `(2 3) `(0 1))
;; (merge `(1 2 3 4) `())
;; (merge `() `(1 2 3 4))
;; (merge `(1 2 3) `(1))

(define (merge-sort lst len)
  (if (equal? len 1)
      lst
      (let ([halves (make-halves lst len (list) (list) 0)])
        (merge (merge-sort (car halves) (quotient (+ len 1) 2))
               (merge-sort (car (cdr halves)) (quotient len 2)) (list)))))


(define (create-list-backwards-tail x)
  (helper x 0 (list))) 

(define (helper x count acc)
    (if (= count x)
        acc
        (helper x (+ count 1) (cons count acc))))

(define (brouhaha_main)
  (merge-sort (create-list-backwards-tail 150000) 150000))

