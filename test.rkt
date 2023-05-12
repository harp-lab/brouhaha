#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)

(require "compile.rkt")

; Read all expressions from a file
(define (read-program program)
  (with-input-from-file program
    (lambda ()
      (read-all (current-input-port)))))

; Helper function to read all expressions from an input port
(define (read-all in)
  (let loop ([exprs '()])
    (let ([next (read in)])
      (if (eof-object? next)
          (reverse exprs)
          (loop (cons next exprs))))))

; Run and compile a program, writing the output to a file
(define (run-program program filename)
  (displayln (~a "Now running: " filename))
  (with-output-to-file (string-append filename "_output")
    (lambda ()
      (print (compile program)))))

; Read the directory and process all .haha files
(define (read-direc directory)
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path) file)))))

(read-direc "tests/")
