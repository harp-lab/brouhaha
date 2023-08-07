#lang racket

(require file/sha1)
(require print-debug/print-dbg)
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

; (define (insert-item fact-rest tree)
;   (foldl (lambda ())))

; check if the first element, if it exists in the root
(define (insert-fact fact index tree)
  ; (define _ (p-dbg tree))
  (define _ (p-dbg index))
  (define temp (p-dbg fact))
  (define (insert-helper fact tree-hash index)
    (match fact
      [`(,head ,child ..1)
       (if (hash-has-key? tree-hash head)
             ; if the hash-key exists and the child is not a symbol
             (hash-set tree-hash head (insert-fact (car child) index (hash-ref tree-hash head)))
             (let ([node `(,head ,(hash))])
               (hash-set tree-hash head (insert-fact (p-dbg (car child)) index node))))]
      [(or `(,fact) (? symbol? fact) (? number? fact))
       (if (hash-has-key? tree-hash (p-dbg fact))
           ; if the hash-key exists and the child is a symbol
           (hash-set tree-hash fact (cons (hash-ref tree-hash fact) index))
           (let ([node `(,fact ,index)]) (hash-set tree-hash fact node)))]
      ))
  ; (match (p-dbg tree)
  (match tree
    [`(,tree-head ,tree-hash) `(,tree-head ,(insert-helper (p-dbg fact) tree-hash index))]
    [`(,tree-head ,tree-hash ,line-hash)
     `(,tree-head ,(insert-helper fact tree-hash index) ,line-hash)]))

; will take the facts file path
; and return the AST which can be used to search for facts and more
; changed # in the slog facts to .# because # cannot be in a s-expr
(define (slog-main facts-path)
  (define line-hash (create-line-hash facts-path))
  (define tree-hash (hash))
  (define root-tree `(ASTroot ,tree-hash ,line-hash))
  (define facts-list (hash-values line-hash #t))
  (define index-list (hash-keys line-hash #t))
  (foldl insert-fact root-tree facts-list index-list))

(slog-main "facts.txt")
