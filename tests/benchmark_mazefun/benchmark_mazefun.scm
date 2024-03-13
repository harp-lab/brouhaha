;;; Source: https://www.larcenists.org/benchmarksAboutR7.html
;;; MAZEFUN -- Constructs a maze in a purely functional way,
;;; written by Marc Feeley.

(define (my-foldr-aux lst f base)
  (if (null? lst)
      base
      (f (car lst) (my-foldr-aux (cdr lst) f base))))

(define (my-foldr f base lst)
  (my-foldr-aux lst f base))

(define (my-foldl-aux f base lst)
  (if (null? lst)
      base
      (my-foldl-aux f (f base (car lst)) (cdr lst))))

(define (my-foldl f base lst)
  (my-foldl-aux f base lst))

(define (my-for-aux lo hi f)
  (if (< lo hi)
      (cons (f lo) (my-for-aux (+ lo 1) hi f))
      (list)))

(define (my-for lo hi f)
  (my-for-aux lo hi f))

(define (concat lists)
  (my-foldr append (list) lists))

(define (list-read lst i)
  (if (= i 0)
      (car lst)
      (list-read (cdr lst) (- i 1))))

(define (list-write lst i val)
  (if (= i 0)
      (cons val (cdr lst))
      (cons (car lst) (list-write (cdr lst) (- i 1) val))))

(define (list-remove-pos lst i)
  (if (= i 0)
      (cdr lst)
      (cons (car lst) (list-remove-pos (cdr lst) (- i 1)))))

(define (duplicates? lst)
  (if (null? lst)
      #f
      (or (member (car lst) (cdr lst))
          (duplicates? (cdr lst)))))

(define (make-matrix n m init)
  (my-for 0 n (lambda (i) (my-for 0 m (lambda (j) (init i j))))))

(define (matrix-read mat i j)
  (list-read (list-read mat i) j))

(define (matrix-write mat i j val)
  (list-write mat i (list-write (list-read mat i) j val)))

(define (matrix-size mat)
  (cons (length mat) (length (car mat))))

(define (matrix-map f mat)
  (map (lambda (lst) (map f lst)) mat))

(define (initial-random) 0)

(define (next-random current-random)
  (remainder (+ (* current-random 3581) 12751) 131072))


(define (shuffle-aux lst current-random)
  (if (null? lst)
      (list)
      (let ((new-random (next-random current-random)))
        (let ((i (remainder new-random (length lst))))
          (cons (list-read lst i)
                (shuffle-aux (list-remove-pos lst i)
                             new-random))))))

(define (shuffle lst)
  (shuffle-aux lst (initial-random)))

(define (cave-to-maze cave)
  (matrix-map (lambda (x) (if x '_ '*)) cave))

(define (neighboring-cavities pos cave)
  (let ((size (matrix-size cave)))
    (let ((n (car size)) (m (cdr size)))
      (let ((i (car pos)) (j (cdr pos)))
        (append (if (and (> i 0) (matrix-read cave (- i 1) j))
                    (list (cons (- i 1) j))
                    (list))
                (if (and (< i (- n 1)) (matrix-read cave (+ i 1) j))
                    (list (cons (+ i 1) j))
                    (list))
                (if (and (> j 0) (matrix-read cave i (- j 1)))
                    (list (cons i (- j 1)))
                    (list))
                (if (and (< j (- m 1)) (matrix-read cave i (+ j 1)))
                    (list (cons i (+ j 1)))
                    (list)))))))

(define (change-cavity-aux cave pos new-cavity-id old-cavity-id)
  (let ((i (car pos)) (j (cdr pos)))
    (let ((cavity-id (matrix-read cave i j)))
      (if (equal? cavity-id old-cavity-id)
          (my-foldl (lambda (c nc)
                      (change-cavity-aux c nc new-cavity-id old-cavity-id))
                    (matrix-write cave i j new-cavity-id)
                    (neighboring-cavities pos cave))
          cave))))

(define (change-cavity cave pos new-cavity-id)
  (let ((i (car pos)) (j (cdr pos)))
    (change-cavity-aux cave pos new-cavity-id (matrix-read cave i j))))

(define (pierce pos cave)
  (let ((i (car pos)) (j (cdr pos)))
    (matrix-write cave i j pos)))

(define (try-to-pierce pos cave)
  (let ((i (car pos)) (j (cdr pos)))
    (let ((ncs (neighboring-cavities pos cave)))
      (if (duplicates?
           (map (lambda (nc) (matrix-read cave (car nc) (cdr nc))) ncs))
          cave
          (pierce pos
                  (my-foldl (lambda (c nc) (change-cavity c nc pos))
                            cave
                            ncs))))))

(define (pierce-randomly possible-holes cave)
  (if (null? possible-holes)
      cave
      (let ((hole (car possible-holes)))
        (pierce-randomly (cdr possible-holes)
                         (try-to-pierce hole cave)))))

(define (make-maze n m) ; n and m must be odd
  (if (not (and (odd? n) (odd? m)))
      'error
      (let ((cave
             (make-matrix n m (lambda (i j)
                                (if (and (even? i) (even? j))
                                    (cons i j)
                                    #f))))
            (possible-holes
             (concat
              (my-for 0 n (lambda (i)
                         (concat
                          (my-for 0 m (lambda (j)
                                     (if (equal? (even? i) (even? j))
                                         (list)
                                         (list (cons i j)))))))))))
        (cave-to-maze (pierce-randomly (shuffle possible-holes) cave)))))


(define (brouhaha_main)
   (make-maze 11 11))

(write (brouhaha_main))
(newline)
