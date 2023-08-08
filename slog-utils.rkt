#lang racket

(require file/sha1)
(require print-debug/print-dbg)
; (require string-sexpr)

(define (runslog slog-path out-path fact-file)
  ;slog-path is the generated slog file
  ;out-path is the generated out-path
  ;fact-file is the file holding all the eval outs
  'todo)

(define (file-to-hash-string file-path)
  (bytes->hex-string (sha224-bytes (file->bytes file-path))))

(define (create-line-hash file-path)
  (foldl add-line-hash (hash) (file->lines file-path)))

(define (add-line-hash line line-hash)
  (define items (string-split line "\t"))
  (define index (string->number (substring (car items) 1)))
  (hash-set line-hash index (read (open-input-string (string-replace (cadr items) "#" ".#"))))
  )

(define (insert-fact fact index tree)
  ; (define _ (p-dbg index))
  ; (define temp (p-dbg fact))
  (define (insert-helper fact tree-hash index)
    (match fact
      [`(,head ,child ..1)
       (if (hash-has-key? tree-hash head)
           ; if the hash-key exists and the child is not a symbol
           (hash-set tree-hash head (insert-fact (car child) index (hash-ref tree-hash head)))
           (let ([node `(,head ,(hash))])
             (hash-set tree-hash head (insert-fact (p-dbg (car child)) index node))))]
      [(or `(,fact) (? symbol? fact) (? number? fact))
       (if (hash-has-key? tree-hash fact)
           ; if the hash-key exists and the child is a symbol
           (hash-set tree-hash fact (cons (hash-ref tree-hash fact) index))
           (let ([node `(,fact ,index)]) (hash-set tree-hash fact node)))]
      ))
  (match tree
    [`(,tree-head ,tree-hash) `(,tree-head ,(insert-helper fact tree-hash index))]
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

(define (get-child tree-hash child)
  (if (hash-has-key? tree-hash child)
      (hash-ref tree-hash child)
      #f)
  )

; search string should be in the format
(define (search-facts tree search-str)
  (define items (string-split search-str "/"))
  (foldl (lambda (item tree)
           ; check if the item exists in the tree-hash if it does return that, if it doesn't return #f
           )
           )
  'todo)

(search-facts 'todo "/apply/define/clo")
; (slog-main "facts.txt")
