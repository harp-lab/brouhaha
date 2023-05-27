#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)
(require "compile.rkt")
(require "interp-anf.rkt")

(define (write-to file content)
  (with-output-to-file file
    (lambda () 
      (display content))
    #:exists 'replace))

;What's better, this or tail-recursively?
(define (verify-correctness desugar alphatize anf cps closure)
  (cond 
    [(equal? (equal? (equal? (equal? closure cps) anf) alphatize) desugar)
      (displayln (~a "Each output stage matched!"))]
    [else 
      (error "Your outputs did not match")]))

; Run and compile a program, writing the output to a file
(define (run-program program filename file-path prelude-path)
  (define file-path-string (path->string file-path))
  (define filename-string (path->string filename))
  (define filename-noext (regexp-replace #rx"[.]haha$" filename-string ""))
    (define out-dir (string-append (path->string (build-path (current-directory) "tests")) "/" filename-noext))
    
  (unless (directory-exists? out-dir)
    (make-directory out-dir))
  
  (define out-file-compile (string-append out-dir "/" filename-noext "_compile.out"))
  (define out-file-desugar (string-append out-dir "/" filename-noext "_desugar.out"))
  (define out-file-alphatize (string-append out-dir "/" filename-noext "_alphatize.out"))
  (define out-file-anf (string-append out-dir "/" filename-noext "_anf.out"))
  (define out-file-cps (string-append out-dir "/" filename-noext "_cps.out"))
  (define out-file-closure (string-append out-dir "/" filename-noext "_closure.out"))
  (displayln (~a "Now running: " filename-string " and outputting to: " out-file-compile))

  (define prelude (read-program prelude-path))
  (define user-program (read-program file-path))
  (define program (append prelude user-program))
  (define interp-desugar (interp (desugar program)))
  ; (define interp-alphatize (interp (alphatize program)))
  ; (define interp-anf (interp (anf-convert program)))
  ; (define interp-cps (interp (cps-convert program)))
  ; (define interp-closure (interp (closure-convert program)))

  (with-output-to-file out-file-compile ; why does the above function not work?
    (lambda () 
      (compile program))
    #:exists 'replace)
  ; (write-to out-file-compile (compile (append prelude user-program)))
  ; (write-to out-file-desugar interp-desugar)
  ; (write-to out-file-alphatize interp-alphatize)
  ; (write-to out-file-anf interp-anf)
  ; (write-to out-file-cps interp-cps)
  ; (write-to out-file-closure interp-closure)
  ; (verify-correctness interp-desugar interp-alphatize interp-anf 0 0)
  ) 

; Read the directory and process all .haha files
(define (read-direc directory)
  (displayln (~a "Direc: " directory))
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path (current-directory) directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path) file full-path (build-path (current-directory) "prelude.haha"))))))

(read-direc "tests/")