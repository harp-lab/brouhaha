#lang racket

(require file/sha1)
; (require string-sexpr)

(define (runslog slog-path out-path fact-file)
  ;slog-path is the generated slog file
  ;out-path is the generated out-path
  ;fact-file is the file holding all the eval outs
  'todo)

(define (create-line-hash file-path)
  (foldl add-line-hash (hash) (file->lines file-path)))

(define (add-line-hash line line-hash)
  (define items (string-split line "\t"))
  (define index (string->number (substring (car items) 1)))
  (hash-set line-hash index (read (open-input-string (string-replace (cadr items) "#" ".#"))))
  ; (hash-set line-hash index (cadr items))
  )

; ; Example usage:
; (define file-path "test.rkt")
; (define hash-value (file-to-sha256 file-path))
; (printf "Hash-value of ~a: ~a\n" file-path hash-value)

(define (file-to-hash-string file-path)
  (bytes->hex-string (sha224-bytes (file->bytes file-path))))

; write a function that takes a one line(string) of slog fact/s and return the list of tokens
; assumes that the lines don't have any ",", "`", "'".
; not writing to_tokens at this point as the facts are converted directly to s-expr

(define (get-tree-hash tree)
  (match tree
    [`(ASThead ,tree-hash) tree-hash]
    [`(,(? symbol? head) ,(? cons? tree-list) ,(? hash? tree-hash)) (tree-list tree-hash)]))

; taking in the line and the tree, if the tree is not passed it is created anew
; check if the first tag is already a child of main, if yes switch to that node and continue
; if not a child, create a new node in the tree for the main, and keep going
; (define (add-line line [tree (make-tree)])
;   'todo)

(define (insert-item fact-rest tree)
  (foldl (lambda ())))

; check if the first element, if it exists in the root
(define (insert-fact fact tree)
  (define tree-hash (cadr tree))
  (define head (car fact))
  (if (hash-has-key? tree-hash head)
    ; compare the list of items and check for branches
    ; create the new node in the tree
    ; adding the head
    (let ([new-tree-hash (hash-set tree-hash head `(,head (hash) (list)))])
    ; should have a foldl for inserting each item and inside the foldl, we should have the following
    ; match insert elements directly if they are symbols or to recursively calll insert-fact if they are 
    ; s-exprs
    (foldl (lambda (item new-tree-hash) 
      (match item
        [(? list? item)
          ; call insert-fact for the second-item on the 
          (insert-fact item new-tree-hash)]
        [(? symbol? item)
          ; have to insert the symbol into the tree-hash
          'todo
          ]
      ))
    )

    ; either a symbol
    ; we add the symbol to the hash with value of itself

    ; or another s expr
    ; call insert-fact with passing the s-expr as fact and new-tree-hash as tree

    ; if the hash-key doesn't exist
    'todo
    )
  ))

; will take the facts file path
; and return the AST which can be used to search for facts and more
; changed # in the slog facts to .# because # cannot be in a s-expr
(define (slog-main facts-path)
  (define line-hash (create-line-hash facts-path))
  (define tree-hash (hash))
  (define root-tree `(ASTroot ,tree-hash ,line-hash))
  (foldl insert-fact root-tree (hash-values line-hash))

  )

(slog-main "./facts.txt")
