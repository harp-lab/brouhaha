#lang racket
; open test folder
; iterate over them and test them
(require racket/trace)

; (require "compile.rkt") 
;; uncomment this once compile.rkt is fixed

; Read all expressions from a file using byte reading
(define (read-program program)
  (with-input-from-file program
    (lambda ()
      (let ([bytes (read-bytes (file-size program))])
        (with-input-from-string (bytes->string/utf-8 bytes)
          (lambda ()
            (read-all (current-input-port))))))))

; Helper function to read all expressions from an input port
(define (read-all in)
  (let loop ([exprs '()])
    (let ([next (read in)])
      (if (eof-object? next)
          (reverse exprs)
          (loop (cons next exprs))))))

; (define (read-program program)
;   (append (with-input-from-file program
; 	    (lambda () (read-all)))
; 	  (read-all)))

; (define (read-all)
;  (define next (read))
;  (if (eof-object? next)
;      '()
;      `(,next . ,(read-all))))

; Run and compile a program, writing the output to a file
(define (run-program program filename)
  (define filename-string (path->string filename))
  (define out-file (string-append filename-string "_output"))
  (displayln (~a "Now running: " filename-string " and outputting to: " out-file))
  (with-output-to-file (string-append out-file)
    (lambda ()
      (print program))))

; Read the directory and process all .haha files
(define (read-direc directory)
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path (current-directory) directory file)])
      (when (and (file-exists? full-path)
                 (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path) file)))))

(read-direc "tests/")
