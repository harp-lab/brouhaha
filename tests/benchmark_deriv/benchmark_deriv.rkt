#lang racket
;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; DERIV -- Symbolic differentiation, a Gabriel benchmark, ten million iterations.
;;; 10000000

(define (deriv a)
  (cond ((not (pair? a))
         (if (eq? a 'x) 1 0))
        ((eq? (car a) '+)
         (cons '+
               (map deriv (cdr a))))
        ((eq? (car a) '-)
         (cons '-
               (map deriv (cdr a))))
        ((eq? (car a) '*)
         (list '*
               a
               (cons '+
                     (map (lambda (a) (list '/ (deriv a) a)) (cdr a)))))
        ((eq? (car a) '/)
         (list '-
               (list '/
                     (deriv (car (cdr a)))
                     (car (cdr (cdr a)))
                     )
               (list '/
                     (car (cdr a))
                     (list '*
                           (car (cdr (cdr a)))
                           (car (cdr (cdr a)))
                           (deriv (car (cdr (cdr a))))))))
        (else "No derivation method available")))


(define (brouhaha_main)
  (deriv (list '+ (list '* 3 'x 'x) (list '* 'a 'x 'x) (list '* 'b 'x) 5)))

(brouhaha_main)