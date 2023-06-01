#lang racket
; open test folder
; iterate over them and test them
(require "compile.rkt")
(require "interp-anf.rkt")
(require "interp-cps.rkt")
(require "interp-closure.rkt")
(require "emit-cpp.rkt")

(define (write-to file content)
  (with-output-to-file file (lambda () (pretty-print content)) #:exists 'replace))

;What's better, this or tail-recursively?
(define (verify-correctness file desugar alphatize anf cps closure)
  (cond
    [(and (equal? desugar alphatize) (equal? alphatize anf) (equal? anf cps) (equal? cps closure))
     (displayln (~a "Each output stage matched!\n"))]
    [else (displayln (~a "Your outputs did not match for " file "\n"))]))

; Run and compile a program, writing the output to a file
(define (run-program program filename file-path prelude-path)
  (define file-path-string (path->string file-path))
  (define filename-string (path->string filename))
  (define filename-noext (regexp-replace #rx"[.]haha$" filename-string ""))
  (define out-dir
    (string-append (path->string (build-path (current-directory) "tests")) "/" filename-noext))

  (unless (directory-exists? out-dir)
    (make-directory out-dir))

  (define out-file-cpp (string-append out-dir "/" filename-noext "_cpp_program.cpp"))
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

  (define desugar_prg (desugar program))
  (define alphatize_prg (alphatize desugar_prg))
  (define anf_prg (anf-convert alphatize_prg))
  (define cps_prg (cps-convert anf_prg))
  (define clo_conv_prg (closure-convert cps_prg))

  (define interp-desugar (interp desugar_prg))
  (define interp-alphatize (interp alphatize_prg))
  (define interp-anf (interp anf_prg))
  (define interp-cps-out (interp-cps cps_prg))
  (define interp-closure-out (interp-closure clo_conv_prg))


  (emit-cpp clo_conv_prg out-file-cpp)
  (displayln (~a "Emitting C++ for: " filename-string " and outputting to: " out-file-cpp))

  (with-output-to-file out-file-compile ; why does the above function not work?
    (lambda () (compile program))
    ; (lambda () (pretty-print clo_conv_prg))
    #:exists 'replace)


  (write-to out-file-desugar interp-desugar)
  (write-to out-file-alphatize interp-alphatize)
  (write-to out-file-anf interp-anf)
  (write-to out-file-cps interp-cps-out)
  (write-to out-file-closure interp-closure-out)
  (verify-correctness filename-string
                      interp-desugar
                      interp-alphatize
                      interp-anf
                      interp-cps-out
                      interp-closure-out))

; Read the directory and process all .haha files
(define (read-direc directory)
  (for ([file (in-list (directory-list directory))])
    (let ([full-path (build-path (current-directory) directory file)])
      (when (and (file-exists? full-path) (regexp-match? #rx"[.]haha$" file))
        (run-program (read-program full-path)
                     file
                     full-path
                     (build-path (current-directory) "prelude.haha"))))))

(read-direc "tests/")
