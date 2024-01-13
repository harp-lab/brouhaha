#lang racket
; (define (SolveSudoku sentboard)
;   ;Seting up the DSL
;   (define (row brd r)
;     (list-ref brd r))

;   (define (column brd c)
;     (map (λ (r) (list-ref r c)) brd))

;   (define (subgrid brd r c)
;     (define ll '((0 1 2) (3 4 5) (6 7 8))) ;')
;     (define-values (rr cc)
;       (values (flatten (filter (λ (x) (member r x)) ll)) (flatten (filter (λ (x) (member c x)) ll))))
;     (for*/list ([i rr] [j cc])
;       (list-ref (list-ref brd i) j)))

;   (define (cell brd r c)
;     (list-ref (list-ref brd r) c))

;   (define (new-board-with-updated-value bd r c val)
;     (list-set bd r (list-set (list-ref bd r) c val)))

;   (let loop ([bd sentboard] [r 0] [c 0]) ;initialize counters
;     (let ([next (lambda (nextbd) ;the next step through the board
;                   (cond
;                     [(< c 8) (loop nextbd r (add1 c))]
;                     [(< r 8) (loop nextbd (add1 r) 0)]
;                     [else
;                      (displayln "SOLUTION:")
;                      (for ([rowline nextbd])
;                        (println rowline))]))])
;       (if (= 0 (cell bd r c))
;           (for ([i (range 1 10)])
;             ;brute force the solution, with a simple collision check first
;             (when (not
;                    (or (member i (row bd r)) (member i (column bd c)) (member i (subgrid bd r c))))
;               (next (new-board-with-updated-value bd r c i))))
;           (next bd)))))

; (define (SolveSudoku sentboard)
;   (define (subgrid brd r c) ; subfn to get subgrid:
;     (define L '((0 1 2) (3 4 5) (6 7 8)))
;     (define-values (rr cc)
;       (values (flatten (filter (λ (x) (member r x)) L)) ; get the row set
;               (flatten (filter (λ (x) (member c x)) L)))) ; get the column set
;     (for*/list ([i rr] [j cc]) ; get list of numbers in these rows & columns
;       (list-ref (list-ref brd i) j)))

;   ; Helper function to try numbers recursively
;   (define (try-number bd r c i next)
;     (if (= i 10) ; All numbers tried, backtrack
;         bd
;         (if (not (or ; number should not be in row/column/subgrid:
;                 (member i (list-ref bd r)) ; row
;                 (member i (map (λ (x) (list-ref x c)) bd)) ; column
;                 (member i (subgrid bd r c)))) ; subgrid
;             (let ([newbd (list-set bd r (list-set (list-ref bd r) c i))])
;               (next newbd (add1 i))) ; Try next number
;             (try-number bd r c (add1 i) next)))) ; Try next number

;   ; Main loop
;   (let loop ([bd sentboard] [r 0] [c 0])
;     (let ([next (λ (nextbd i) ; subfn to go to next column/row:
;                   (cond
;                     [(< c 8) (loop nextbd r (add1 c))]
;                     [(< r 8) (loop nextbd (add1 r) 0)]
;                     [else
;                      (displayln "SOLUTION:")
;                      (for ([rowline nextbd])
;                        (println rowline))
;                      ;(exit) can be added here to stop at first solution.
;                      ]))])
;       (if (= 0 (list-ref (list-ref bd r) c)) ; cell value: if 0, try numbers 1-9:
;           (try-number bd r c 1 next)
;           (next bd 0))))

;   (SolveSudoku sentboard)) ; Start the solver

; (define (SolveSudoku sentboard)

;   (define (subgrid brd r c)                     ; subfn to get subgrid:
;     (define L '((0 1 2)(3 4 5)(6 7 8)))
;     (define-values (rr cc)
;       (values (flatten(filter (λ(x)(member r x)) L))   ; get the row set
;               (flatten(filter (λ(x)(member c x)) L)))) ; get the column set
;     (for*/list ((i rr)(j cc))          ; get list of numbers in these rows & columns
;       (list-ref (list-ref brd i) j)))

;   ; start with sentboard and first row and column: 
;   (let loop ((bd sentboard) (r 0) (c 0))
;     (let ((next (λ (nextbd)                     ; subfn to go to next column/row:
;                   (cond [(< c 8)  (loop nextbd r (add1 c) )]
;                         [(< r 8)  (loop nextbd (add1 r) 0 )]
;                         [else (displayln "SOLUTION:")
;                               (for ((rowline nextbd)) 
;                                 (println rowline))
;                               ;(exit) can be added here to stop at first solution.
;                               ]))))
;       (if (= 0 
;              (list-ref (list-ref bd r) c))     ; cell value: if 0, try numbers 1-9:  
;           (begin (for ((i (range 1 10)))
;                    (when(not(or    ; number should not be in row/column/subgrid:
;                              (member i (list-ref bd r))               ; row
;                              (member i (map (λ(x)(list-ref x c)) bd)) ; column
;                              (member i (subgrid bd r c))))            ; subgrid
;                      (define newbd              ; put number i at this site:
;                        (list-set bd r
;                                  (list-set (list-ref bd r) c i)))
;                      (next newbd)))) 
;           (next bd)))))

(define (SolveSudoku sentboard)
  ; subfn to get list of numbers in 3x3 subgrid for a given row and column position: 
  (define (subgrid brd r c)
    (define ll '((0 1 2)(3 4 5)(6 7 8)))
    ; get row/column set to which r and c belong:
    (define-values (rr cc)
      (values (flatten (filter (λ (x) (member r x)) ll))
              (flatten (filter (λ (x) (member c x)) ll))))
    ; get all numbers from this set:
    (for*/list ((i rr)(j cc))
      (list-ref (list-ref brd i) j)))

  ; start with sent board and first row and column: 
  (let loop ((bd sentboard) (r 0) (c 0))
    (cond
      ; if entry at (r,c) is 0, try to put numbers from 1 to 9:
      [(= 0 (list-ref (list-ref bd r) c) )
       (for ((i (range 1 10)))
         ; if i is not present in that row, column & subgrid:
         (when
             (and (not(member i (list-ref bd r)))                 ; number not in row
                  (not(member i (map (λ (x) (list-ref x c)) bd))) ; number not in column
                  (not(member i (subgrid bd r c))))               ; number not in subgrid
           ; create a new board with i added:
           (define newbd
             (list-set bd r
                       (list-set (list-ref bd r) c i)))
           (cond
             ; go to next column and loop:
             [(< (add1 c) 9)
              (loop newbd r (add1 c) )]
             ; if columns over, go to next row and loop:
             [(< (add1 r) 9)
              (loop newbd (add1 r) 0 )]
             ; if rows also over, solution found:
             [else (displayln "Solved")])))]

      ; if entry is not 0 go to next column or row (as above): 
      [(< (add1 c) 9)
       (loop bd r (add1 c))]
      [(< (add1 r) 9)
       (loop bd (add1 r) 0)]
      [else (displayln "Solved")])))

(define board                   
  '((0 0 3 0 2 0 6 0 0)
    (9 0 0 3 0 5 0 0 1)
    (0 0 1 8 0 6 4 0 0)
    (0 0 8 1 0 2 9 0 0)
    (7 0 0 0 0 0 0 0 8)
    (0 0 6 7 0 8 2 0 0)
    (0 0 2 6 0 9 5 0 0)
    (8 0 0 2 0 3 0 0 9)
    (0 0 5 0 1 0 3 0 0)))

(SolveSudoku board)