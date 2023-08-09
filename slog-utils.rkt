#lang racket

(require file/sha1)
(require print-debug/print-dbg)
; (require string-sexpr)

(define (runslog slog-path out-path fact-file)
  ;slog-path is the generated slog file
  ;out-path is the generated out-path
  ;fact-file is the file holding all the eval outs
  'todo)

; will read the contents of the file and return a hash-string
; i/p : takes the relative/absolute filepath as string
; o/p : returns a string
(define (file-to-hash-string file-path)
  (bytes->hex-string (sha224-bytes (file->bytes file-path))))

; will read each line from the file and fold over them to create the line-hash
; i/p : takes the filepath of the facts
; o/p : returns a hash with all the lines from the file with slog-index as key and actual fact as val
(define (create-line-hash file-path)
  (foldl add-line-hash (hash) (file->lines file-path)))

; takes a line and a hash, and split the line into index and fact, convert index to num and 
; uses 'read' function that converts the string in a racket s-expr
; i/p : string-line from facts.txt and line-hash
; o/p : returns the updated line-hash
(define (add-line-hash line line-hash)
  (define items (string-split line "\t"))
  (define index (string->number (substring (car items) 1)))
  (hash-set line-hash index (read (open-input-string (string-replace (cadr items) "#" ".#"))))
  )

; inserts a fact into the tree
; checks if the head of the fact exists in the tree, if not creates a node and adds it to the tree
; and continues to add subsequent facts to the new tree, if they already exist walks down till the 
; leaf and adds a index at the bottom.
(define (insert-fact fact index tree)
  (define (insert-helper fact tree-hash index)
    (match fact
      [`(,head ,child ..1)
       (if (hash-has-key? tree-hash head)
           ; if the hash-key exists and the child is not a symbol
           (hash-set tree-hash head (insert-fact (car child) index (hash-ref tree-hash head)))
           (let ([node `(,head ,(hash))])
             (hash-set tree-hash head (insert-fact (car child) index node))))]
      [(or `(,fact) (? symbol? fact) (? number? fact))
       (if (hash-has-key? tree-hash fact)
           ; if the hash-key exists and the child is a symbol
           (hash-set tree-hash fact (cons index (hash-ref tree-hash fact)))
           (let ([node `(, index)]) (hash-set tree-hash fact node)))]
      ))
  (match tree
    [`(,tree-head ,tree-hash) `(,tree-head ,(insert-helper fact tree-hash index))]
    [`(,tree-head ,tree-hash ,line-hash)
     `(,tree-head ,(insert-helper fact tree-hash index) ,line-hash)]))

; will take the facts file path
; and return the AST which can be used to search for facts and more
; changed # in the slog facts to .# because # cannot be in a s-expr
(define (read-facts facts-path)
  (define line-hash (create-line-hash facts-path))
  (define tree-hash (hash))
  (define root-tree `(ASTroot ,tree-hash ,line-hash))
  (define facts-list (hash-values line-hash #t))
  (define index-list (hash-keys line-hash #t))
  (foldl insert-fact root-tree facts-list index-list))

(define (get-leaves tree-hash)
  ; does a traversal of the tree and return a list of all the leaves
  ; the cadr for the parent of the leaf is the leaf value, have to check if the cadr is a number?,
  ; if yes that is leaf value, return or add it to the list to be returned
  ; if that is a hash, we call the function on that hash
  (foldl (lambda (item index-list)
           (match (hash-ref tree-hash item '())
             [(or `(,item-tree-head ,(? hash? item-tree-hash))
                  `(,item-tree-head ,(? hash? item-tree-hash) ,_))
              (append (get-leaves item-tree-hash) index-list)]
            ;  [(or `(,item-tree-head ,(? number? index))
                  ; `(,item-tree-head ,(? number? index) ,_))
             [(? list? node-index-list)
              (append node-index-list index-list)] ; test when the tree only has one fact that only has one item, may be
             ;  [_ '()]
             ))
         '()
         (hash-keys tree-hash))
  )
; takes a index list and gets the facts, but doesn't fill any sub-facts that are ref by index
; (define (get-facts-by-index index-list)

;   )


; search string should be in the format
(define (search-facts tree items)
  (define _ (p-dbg tree))
  ; (define items (map string->symbol (string-split search-str "/")))
  (define (get-sub-tree tree search-items)
    (if (null? (p-dbg search-items))
        tree
        (match tree
          [(or `(,tree-head ,(? hash? tree-hash)) `(,tree-head ,(? hash? tree-hash) ,_))
           (if (hash-has-key? tree-hash (car search-items))
               (get-sub-tree (hash-ref tree-hash (car search-items)) (cdr search-items))
               '())]
          )))
  (match (p-dbg (get-sub-tree tree items))
    [`(,_ ,(? hash? sub-tree-hash)) (get-leaves sub-tree-hash)]
    [(? list? index-list) index-list]
    ['() '()]
    ))

; (search-facts 'todo "/apply/define/clo")
; (define ast-root (slog-main "facts_tests/facts_test4.txt"))
(define ast-root (read-facts "facts_tests/facts.txt"))
; (search-facts ast-root '(apply-prim))
; (search-facts ast-root '(apply clo lambda fixedparam))
(search-facts ast-root '(eval))