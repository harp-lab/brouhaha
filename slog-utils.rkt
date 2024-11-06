#lang racket

(require file/sha1)
; (require print-debug/print-dbg)
; (require print-debug/print-dbg)
(provide (all-defined-out))
(require "utils.rkt")
; (require string-sexpr)

(define (runslog slog-path out-path)
  ; (displayln "here")
  ; (system "cd ../slog")
  ; (define command (string-append "python3" " " clean-path " " test-name " " test-file-hash))
  (define command
    (string-append "cd ../slog && "
                   "./runslog "
                   "--brouhaha "
                   "-ov "
                   "../brouhaha/"
                   slog-path
                   " ../brouhaha/"
                   out-path))
  (displayln command)
  (system command))

; format the buffer to include the right amount of buffer arg size
(define (arg-buffer-output buffer-size)
  (define current-prelude (open-slog "prelude_save.hpp"))
  (define formatted-buffer
    (format
     "
void *halt;
void *arg_buffer[~a]; // This is where the arg buffer is called
long numArgs;

void *fhalt()
{
    // std::cout << \"In fhalt\" << std::endl;
    std::cout << print_val(arg_buffer[2]) << std::endl;
    // print_val(arg_buffer[2]);
    exit(1);
}
          "
     buffer-size))
  (define final-prelude (string-append current-prelude formatted-buffer))
  (write-to-file "prelude.hpp" final-prelude))

; will read the contents of the file and return a hash-string
; i/p : takes the relative/absolute filepath as string
; o/p : returns a string
(define (file-to-hash-string file-path)
  (bytes->hex-string (sha224-bytes (file->bytes file-path))))

; will read each line from the file and fold over them to create the line-hash
; i/p : takes the filepath of the facts
; o/p : returns a hash with all the lines from the file with slog-index as key and actual fact as val
(define (create-line-hash file-path)

  ; this fold removes newlines from the facts.txt file, and finally returns the non-empty fact list
  (define not_empty_fact_list
    (foldr (lambda (line acc)
             (if (not
                  (or (string=? line "")
                      (regexp-match? #rx"^[ \t\n]*$" line)))
                 (cons line acc)
                 acc))
           '()
           (file->lines file-path)))

  ; (foldl add-line-hash (hash) (file->lines file-path))
  (foldl add-line-hash (hash) not_empty_fact_list))

; takes a line and a hash, and split the line into index and fact, convert index to num and
; uses 'read' function that converts the string in a racket s-expr
; i/p : string-line from facts.txt and line-hash
; o/p : returns the updated line-hash
(define (add-line-hash line line-hash)
  (define items (string-split line "\t"))
  (define index (substring (car items) 1))
  (hash-set line-hash index (read (open-input-string (string-replace (cadr items) "#" ".#")))))

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
      [(or `(,fact) (? symbol? fact) (? number? fact) (? string? fact))
       (if (hash-has-key? tree-hash fact)
           ; if the hash-key exists and the child is a symbol
           (hash-set tree-hash fact (cons index (hash-ref tree-hash fact)))
           (let ([node `(,index)]) (hash-set tree-hash fact node)))]))
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
  ; if it is a tree, calls get-leavs on the tree and append the result of it to the index-list to be returned
  ; if it is a list, meaning we reached the leaf, in this case, we just append the it to index-list and return
  (foldl
   (lambda (item index-list)
     (match (hash-ref tree-hash item '())
       [(or `(,item-tree-head ,(? hash? item-tree-hash))
            `(,item-tree-head ,(? hash? item-tree-hash) ,_))
        (append (get-leaves item-tree-hash) index-list)]
       [(? list? node-index-list)
        (append node-index-list
                index-list)] ; test when the tree only has one fact that only has one item, may be
       ))
   '()
   (hash-keys tree-hash)))

; takes a index list and gets the facts, but doesn't fill any sub-facts that are ref by index
; (define (get-facts-by-index index-list)

;   )

(define (index-to-facts index-list tree)
  (foldl (lambda (index facts-list) (cons (hash-ref (caddr tree) index) facts-list)) '() index-list))

; The search function: takes a list of symbols, one for each level of search
; searches for each symbol in each level; gets to a sub-tree and calls the get-leaves on that sub-tree
(define (search-facts tree items)
  ; takes a tree and search items and uses the one symbol to search at each level of the list
  ; if a symbol from the search list is not found in the level, meaning the facts being searched are not present
  ; it returns an empty list
  ; if we the search results directly in a leaf node, we directly return the index list from the node.
  (define (get-sub-tree tree search-items)
    (if (null? search-items)
        tree
        (match tree
          [(or `(,tree-head ,(? hash? tree-hash)) `(,tree-head ,(? hash? tree-hash) ,_))
           (if (hash-has-key? tree-hash (car search-items))
               (get-sub-tree (hash-ref tree-hash (car search-items)) (cdr search-items))
               '())]
          [_ '()])))
  (match (get-sub-tree tree items)
    [`(,_ ,(? hash? sub-tree-hash)) (get-leaves sub-tree-hash)]
    [(? list? index-list) index-list]
    ['() '()]))

; (define ast-root (read-facts "tests/let/output/1fc3f8451aec79ec257c4f0bcfa345efc80613601edec4961441cda3/facts.txt"))
; (define facts-list (search-facts ast-root '(eval)))
; (index-to-facts facts-list ast-root)
; (display facts-list)
; (hash-ref (caddr ast-root) '305)

(define (is_var_param ast-root func)
  (define func-facts (index-to-facts (search-facts ast-root '(define)) ast-root))
  ; (pretty-print func-facts)

  (let loop ([func-fact func-facts])
    (cond
      [(null? func-fact) #f]
      [else
       (match (car func-fact)
         [`(define ,tempFunc (varparam ,arg) ,rest ...)

          (if (equal? (string->symbol tempFunc) func)
              #t
              (loop (cdr func-fact)))]

         [`(define ,tempFunc (fixedparam ,args ...) ,rest ...)

          (if (equal? (string->symbol tempFunc) func)
              #f
              (loop (cdr func-fact)))]
         [_ #f])
       ])))

; this function returns (function_name true/false) as a touple,
; if the called function at a call site is one of the built-in define-prim's
; with a specific number of argument we support.
(define (check-define-prim-arg-count ast-root func-name arg-count)
  ; (displayln (format "is-define-prim: ~a ~a" func-name arg-count))
  (define prim-count
    (index-to-facts (search-facts ast-root `(prim-count ,(symbol->string func-name))) ast-root))

  (define (match-arg-count list-args-count arg-count)
    (match list-args-count
      [`($lst ,count ,rst) (if (equal? count arg-count) #t (match-arg-count rst arg-count))]
      [`($nil 0) #f]))

  (if (equal? (length prim-count) 1)
      (match (car prim-count)
        [`(prim-count ,func ,list-args-count)
         `(,func-name ,(match-arg-count list-args-count arg-count))]
        [_ `(,func-name #f)])
      `(,func-name #f)))

; this function returns (function_name true/false) as a touple,
; if the called function at a call site is
; one of the built-in define-prim's
; prim-func, is the actual built-in define-prim we are aliasing with "func-name"
(define (is-define-prim ast-root func-name)
  ; (displayln (format "is-user-def-func-a-define-prim: ~a" func-name))
  (define check-store-for-func
    (index-to-facts (search-facts ast-root `(store addr ,(symbol->string func-name))) ast-root))
  ; (pretty-print check-store-for-func)

  ; (let loop ([func-fact check-store-for-func])
  ;   (cond
  ;     [(null? func-fact) (begin (displayln "here1") `(,func-name #f))]
  ;     [(> (length check-store-for-func) 1) (begin (displayln "herer") `(,func-name #f))]
  ;     [else
  ;      (match (car func-fact)
  ;        [`(store (addr ,func) (define-prim ,prim-func ,var-or-fixed))
  ;         `(,(string->symbol prim-func) #t)]
  ;        [_ (loop (cdr func-fact))])
  ;      ]))

  (match check-store-for-func
    [`((store (addr ,func) (define-prim ,prim-func ,var-or-fixed)))

     ; should be just fact per (store (addr func)), not like below
     ;  #17305_55	(store (addr "f2") (define-prim "+" (varparam "lst")))
     ;  #17306_56	(store (addr "f2") (define-prim "*" (varparam "lst")))

     `(,(string->symbol prim-func) #t)]
    [_
     `(,func-name #f)]))


; this function returns (#t/#f #t/#f supported_arg_count) as a touple,
; if the called function at a call site is
; one of the built-in define-prim's
; returns,
; - (#t #t count)
;     - #t, means one of the define prim
;     - #t, means the function is directly callable
;     - count, return the actual supported arg count = actual parameter count
; - (#t #f count)
;     - #t, means one of the define prim
;     - #f, means the function is not directly callable
;     - count, should return 0
; - (#f #f count)
;     - #f, means not a define prim
;     - #f, means the function is not directly callable
;     - count, should return 0

(define (callable-define-prim? proc-name-shadowed_hash prc count)
  ; (displayln (~a "here: " prc))
  (if (not (hash-has-key? proc-name-shadowed_hash prc))
      `(#f #f 0)
      (let ([res (hash-ref proc-name-shadowed_hash prc)])
        (if (equal? (car res) 'not-shadowed-dp)
            (if (member count (cadr res))
                `(#t #t ,(car (member count (cadr res))))
                `(#t #f 0))
            `(#f #f 0)))))

;;; if slog is enabled this version will be called
(define (callable-define-prim-with-slog? proc-name-shadowed_hash prc count ast-root)
  ; (displayln (~a "here: " prc))
  ;; read from fun-at-call and fun-at-call-count
  ;;     fun-at-call (exp, vf)         : (fun-at-call (app (ref "f") args ...) (define-prim "+" (varparam "lst")))
  ;;     fun-at-call-count(exp, count) : (fun-at-call-count (app (ref "f") args ...) 1)
  ;;
  ;; if the count in fun-at-call-count is exactly one and the vf is either a define-prim/combinator, it's inlinable!

  ; (displayln (format "callable-define-prim-with-slog?: ~a" prc))
  (define get-all-fun-at-call-facts
    (index-to-facts (search-facts ast-root `(fun-at-call app)) ast-root))
  ; (displayln get-all-fun-at-call-facts)

  (define get-all-fun-at-call-count-facts
    (index-to-facts (search-facts ast-root `(fun-at-call-count app)) ast-root))
  ; (pretty-print get-all-fun-at-call-count-facts)

  (define fun-at-call-count
    (let loop ([func-fact get-all-fun-at-call-count-facts]
               [call-stat (hash)])
      (cond
        [(null? func-fact)  call-stat]
        [else
         (match (car func-fact)
           [`(fun-at-call-count ,func ,cnt)
            (loop (cdr func-fact)
                  (if (hash-has-key? call-stat func)
                      (if (= (hash-ref call-stat func) cnt 1)
                          call-stat
                          (hash-set call-stat func 0))
                      (if (= cnt 1)
                          (hash-set call-stat func cnt)
                          (hash-set call-stat func 0))))]
           [_ (loop (cdr func-fact) call-stat)])
         ])))

  ; (pretty-print fun-at-call-count)
  ; (pretty-print get-all-fun-at-call-facts)

  (let loop ([func-fact get-all-fun-at-call-facts])
    (cond
      [(null? func-fact)
       `(,prc ,@(callable-define-prim? proc-name-shadowed_hash prc count))]
      [else
       (match (car func-fact)
         [`(fun-at-call (app (ref ,func) ,bd) (define-prim ,dp ,_))
          (if (equal? (string->symbol func) prc)
              (if (= (hash-ref fun-at-call-count `(app (ref ,func) ,bd)) 1)
                  `(,(string->symbol dp) ,@(callable-define-prim? proc-name-shadowed_hash (string->symbol dp) count))
                  `(,(string->symbol dp) #f #f 0))

              (loop (cdr func-fact)))]
         [`(fun-at-call (app (ref ,func) ,_) (define ,temp_func ,_))
          (if (equal? (string->symbol func) prc)
              `(,prc #f #f 0)
              (loop (cdr func-fact)))]
         [`(fun-at-call (app (lambda ,var ,lambody) ,app_body) ,vf)
          ; have to handle this case after alphatization
          (loop (cdr func-fact))]
         [_ (loop (cdr func-fact))])
       ])))



; looks at the call-sites and returns a list of distinct number of args at call-site
(define (params-count ast-root func-name)
  (define call-sites
    (index-to-facts (search-facts ast-root `(app ref ,(symbol->string func-name))) ast-root))
  (define (num-args call-site)
    (match call-site
      [`(app (ref ,func-name) ($lst ,arg ,params)) (count-args params 1)]
      [`(app (ref ,func-name) ($nil 0)) 0]))
  (define (count-args arg-lst count)
    (match arg-lst
      [`($lst ,arg ,param) (count-args param (+ count 1))]
      [_ count]))
  (set->list
   (list->set (foldl (lambda (call-site acc) (cons (num-args call-site) acc)) '() call-sites))))

(define (count-params program fact-file)
  (define ast-root (read-facts fact-file))
  (define facts-list (search-facts ast-root '(eval)))
  (define actual-facts (index-to-facts facts-list ast-root))

  (define (fact-parser funcname)
    (define (fact-unroll fact)
      (match fact
        [`(eval (app (ref call) ,params) ,env-sets ,halt) (- (length params) 1)]
        [_ 0]))
    (apply + (map fact-unroll actual-facts)))

  (define (counter prov)
    (match prov
      [`(prov (define (brouhaha_main)
                (,funcname ,params ...)))
       (fact-parser funcname)
       ; (length params)
       ]
      [_ 0]))

  (define (unbundle e)
    (match e
      [`(proc (,prov ...) (,func ,vars ...) ,body) (counter prov)]
      [_ 0]))

  (apply + (map unbundle program)))


(define (is-combinator? func args)
  (define exp `(,func ,@args))
  (define get-slog-fact (write-slog-fact exp))

  (match exp
    [`((lambda (,xs ...) ,body) ,args ...)
      #t]
    [_ #f]
  ))



;;; takes racket-code and turns into slog-code
(define (write-slog-fact exp)
  (match exp
    [`',(? symbol? x) `(symbol ,(symbol->string x))]
    [`',e (write-slog-fact e)]
    [(? symbol? x) `(ref ,(symbol->string x))]
    [(? boolean? x) (if x `(bool "t") `(bool "f"))]
    [(? number? x) `(int ,(number->string x))]
    [(? string? x) `(string ,x)]

    [`(lambda (,(? symbol? xs) ...) ,body)
     `(lambda (fixedparam
               ,(foldr (lambda (x acc)
                         `($lst ,(symbol->string x) ,acc))
                       '($nil 0)
                       xs))
        ,(write-slog-fact body))]

    [`(lambda ,(? symbol? x) ,body)
     `(lambda (varparam ,(symbol->string x)) ,(write-slog-fact body))]

    [`(let ([,xs ,es] ...) ,body)
     `(let ,(foldr (lambda (x e acc)
                     `($lst (binding ,(symbol->string x) ,(write-slog-fact e)) ,acc))
                   `($nil 0)
                   xs
                   es)
        ,(write-slog-fact body))]

    [`(if ,grd ,tExp ,fExp)
     `(if ,(write-slog-fact grd) ,(write-slog-fact tExp) ,(write-slog-fact fExp))]

    [`(prim ,op ,es ...)
     ; we shouldn't need this case, just keeping it for reference!
     (foldr string-append "" `("(prim \"" ,(~a op) "\" [" ,@(map write-slog-fact es) "])"))]

    [`(apply ,e0 ,e1)
     `(appl ,(write-slog-fact e0) ,(write-slog-fact e1))]

    [`(,ef ,eas ...)
     `(app
       ,(write-slog-fact ef)
       ,(foldr (lambda (x acc)
                 `($lst ,(write-slog-fact x) ,acc))
               '($nil 0)
               eas))]))

; (define sybo '+)
; (define ast-root (read-facts "tests/apply/output/578515199c3a2906e454b88940173865172a56f9d945ed2e8b1a3836/facts.txt"))
; (displayln (index-to-facts (search-facts ast-root `(app ref ,(symbol->string sybo))) ast-root))
; (params-count ast-root '+)

; (is_var_param ast-root sybo)
; (define func 'f)
; (match-define `(,builtin-func ,res) (is-define-prim ast-root func))
; (displayln (~a "func: " func " builtin-func: " builtin-func " res: " res))

; ; 578515199c3a2906e454b88940173865172a56f9d945ed2e8b1a3836
; ; 925aee401258590a198ba4de7fd7f43dc34636b0e4bd42e8008c3f43