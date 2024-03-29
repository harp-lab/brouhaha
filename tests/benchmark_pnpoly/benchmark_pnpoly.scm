;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; PNPOLY - Test if a point is contained in a 2D polygon.

(define (pt-in-poly2-helper xp yp x y c i j)
  (if (< i 0)
      c
      (if (or (and (or (> (list-ref yp i) y)
                       (>= y (list-ref yp j)))
                   (or (> (list-ref yp j) y)
                       (>= y (list-ref yp i))))
              (>= x
                  (+ (list-ref xp i)
                     (/ (*
                         (- (list-ref xp j)
                            (list-ref xp i))
                         (- y (list-ref yp i)))
                        (- (list-ref yp j)
                           (list-ref yp i))))))
          (pt-in-poly2-helper xp yp x y c (- i 1) i)
          (pt-in-poly2-helper xp yp x y (not c) (- i 1) i))))

(define (pt-in-poly2 xp yp x y)
  (pt-in-poly2-helper xp yp x y #f (- (length xp) 1) 0))

(define (run input1 input2)
  (foldl (lambda (lst count)
           (if (pt-in-poly2 input1 input2 (car lst) (car (cdr lst)))
               (+ count 1)
               count))
         0
         (list
          (list .5 .5)
          (list .5 1.5)
          (list -.5 1.5)
          (list .75 2.25)
          (list 0. 2.01)
          (list -.5 2.5)
          (list -1. -.5)
          (list -1.5 .5)
          (list -2.25 -1.)
          (list .5 -.25)
          (list .5 -1.25)
          (list -.5 -2.5)
          )))

(define (brouhaha_main)
  (run (list 0. 1. 1. 0. 0. 1. -.5 -1. -1. -2. -2.5 -2. -1.5 -.5 1. 1. 0. -.5 -1. -.5)
       (list 0. 0. 1. 1. 2. 3. 2. 3. 0. -.5 -1.  -1.5 -2. -2. -1.5 -1. -.5 -1. -1. -.5)))

(write (brouhaha_main))
(newline)
