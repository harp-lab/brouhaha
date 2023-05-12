#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)

(require "compile.rkt")

(define (read-program program)
  (with-input-from-file program
    (lambda ()
      (read-all (current-input-port)))))

(define (read-all in)
  (let ([next (read in)])
    (if (eof-object? next)
        '()
        (cons next (read-all in)))))

(define (run-program program)
  (with-output-to-file "output"
    (lambda ()
      (print (compile program)))))

(define (read-direc directory)
  (for ([file (in-list (directory-list directory))])
    (displayln (~a "files: " file))
    (let ([full-path (build-path directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path))))))

(trace read-direc)
(trace read-program)
(trace read-all)
(read-direc "tests/")
