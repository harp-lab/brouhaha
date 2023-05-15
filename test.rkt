#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)

(require "compile.rkt") 
;; uncomment this once compile.rkt is fixed

; Read all expressions from a file using byte reading
(define (read-program program)
  (displayln (~a "The program " program))
  (with-input-from-file program
    (lambda ()
      (let ([bytes (read-bytes (file-size program))])
        (with-input-from-string (bytes->string/utf-8 bytes)
          (lambda ()
            (read-all (current-input-port))))))))

; Helper function to read all expressions from an input port
(define (read-all in)
  (displayln (~a "The in: " in))
  (let loop ([exprs '()])
    (let ([next (read in)])
      (if (eof-object? next)
          (reverse exprs)
          (loop (cons next exprs))))))

; Run and compile a program, writing the output to a file
(define (run-program program filename file-path)
  (define file-path-string (path->string file-path))
  (define filename-string (path->string filename))
  (define out-file (string-append file-path-string "_output.out"))
  (displayln (~a "Now running: " filename-string " and outputting to: " out-file))
  (with-output-to-file out-file
    (lambda ()
      (print (compile program)))
      #:exists 'replace)) ; change this when needed

; Read the directory and process all .haha files
(define (read-direc directory)
  (displayln (~a "Direc: " directory))
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path (current-directory) directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path) file full-path)))))


; (trace read-)
(read-direc "tests/")
; (print "yes")
