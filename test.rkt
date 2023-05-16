#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)
(require "compile.rkt")

; Run and compile a program, writing the output to a file
(define (run-program program filename file-path prelude-path)
  (define file-path-string (path->string file-path))
  (define filename-string (path->string filename))
  (define out-file (string-append file-path-string "_output.out"))
  (displayln (~a "Now running: " filename-string " and outputting to: " out-file))
  (define prelude (read-program prelude-path))
  (define user-program (read-program file-path))
  (with-output-to-file out-file
    (lambda ()
      (compile (append prelude user-program)))
      #:exists 'replace)) ; change this when needed

; Read the directory and process all .haha files
(define (read-direc directory)
  (displayln (~a "Direc: " directory))
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path (current-directory) directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path) file full-path (build-path (current-directory) "prelude.haha"))))))

(read-direc "tests/")