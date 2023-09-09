#lang racket

(require "compile.rkt"
         "utils.rkt"
         "interp-anf.rkt"
         "interp-cps.rkt"
         "interp-closure.rkt"
         "emit-cpp.rkt"
         "emit-slog.rkt"
         "slog-utils.rkt")

(define (write-to file content)
  (with-output-to-file file (lambda () (pretty-print content)) #:exists 'replace))

(define (run-program directory filename file-path prelude-path analyze-slog interp-flag slog-flag)
  ; (with-handlers ([exn:fail? (lambda (exn)
  ;                              (print-red "\nFailed to run: ")
  ;                              (displayln (~a filename " with error "))
  ;                              (print-red (exn-message exn))
  ;                              (displayln "\n"))])

  (define filename-string-ext (path->string filename))
  (define filename-string (regexp-replace #rx"[.]haha$" filename-string-ext ""))
  (define out-dir (string-append directory "/" filename-string))

  (verify-cmake (string-append out-dir "/CMakeLists.txt"))
  (verify-driver filename-string (string-append out-dir "/driver.cpp"))
  (verify-answer-file (string-append out-dir "/answer"))

  (let* ([generate-res-filepath (lambda (suffix)
                                  (string-append out-dir "/output/" filename-string suffix))]
         [generate-comp-filepath (lambda (suffix)
                                   (string-append out-dir "/compiler-out/" filename-string suffix))]
         [program (append (read-program prelude-path) (read-program file-path))]
         [compiled (compile-to-alphatize program)]
         [desugar_prg (list-ref compiled 0)]
         [alphatize_prg (list-ref compiled 1)])

    (verify-dir out-dir)
    (verify-dir (string-append out-dir "/output/"))
    (verify-dir (string-append out-dir "/compiler-out/"))
    (displayln (~a "Now running: " filename-string))

    (displayln (~a "Emitting Slog for: "
                   filename-string
                   " and outputting to: "
                   (generate-res-filepath ".slog")))

    ; this should use write-to in the future
    (with-output-to-file (generate-res-filepath ".slog")
      (lambda ()
        (display (string-append (write-program-for-slog alphatize_prg)
                                (string-append
                                 (open-slog analyze-slog)))))
      #:exists 'replace)
    (define slog-path (generate-res-filepath ".slog"))
    (define haha-file-hash (file-to-hash-string file-path))
    (define out-path (string-append out-dir "/output/" haha-file-hash "/"))
    (define slog-out-dir (string-append out-dir "/output/" haha-file-hash))
    (define fact-file (string-append slog-out-dir "/facts.txt"))
    ; (define fact-file "tests/and/output/8f9e07792c9b4f4bb51278477f482521766ee3c09063d3a0e8dfc8d9/facts.txt")
    (cond
      [(and slog-flag (not (directory-exists? slog-out-dir)))
       (runslog "../brouhaha/clean.py" filename-string haha-file-hash)])
    (print-yellow "fact-file: ")
    (display (~a fact-file " out-path " out-path " \n"))
    (print-yellow "slog-path: ")
    (display (~a slog-path))

    (define compiled-program (compile-to-finish program fact-file alphatize_prg slog-flag))
    ; (define compiled-program (compile-to-finish compiled fact-file alphatize_prg slog-flag))

    ; Here we compile rest
    (define anf_prg (list-ref compiled-program 0))
    (define cps_prg (list-ref compiled-program 1))
    (define cps_after_anf (list-ref compiled-program 2))
    (define clo_conv_prg (list-ref compiled-program 3))

    ; (string-append out-dir "/output/" "facts.txt")

    (for-each
     write-to
     (map
      generate-comp-filepath
      (list "_desugar.out" "_alphatize.out" "_anf.out" "_cps.out" "_cps_anf.out" "_closure.out"))
     (append compiled compiled-program))

    ; (display "Entering interp")
    (define (interpret-anf-and-output prg res-file)
      ; (pretty-print "\nRunning Interp ANF")
      (let ([result (if interp-flag
                        (interp prg)
                        (interp prg)
                        ; prg
                        )])
        (write-to (generate-res-filepath res-file) result)
        result))

    ; (display "Entering interp2")
    (define (interpret-cps-and-output prg res-file)
      ; (pretty-print "\nRunning Interp CPS")
      (let ([result (if interp-flag
                        (interp-cps prg)
                        (interp-cps prg)
                        ; prg
                        )])
        (write-to (generate-res-filepath res-file) result)
        result))

    ; (display "Entering interp3")
    (define (interpret-clo-and-output prg res-file)
      ; (pretty-print "\nRunning Interp closure")
      (let ([result (if interp-flag
                        (interp-closure prg)
                        ; (interp-closure prg)
                        prg
                        )])
        (write-to (generate-res-filepath res-file) result)
        result))

    (let ([desugar_res (interpret-anf-and-output desugar_prg "_desugar_res.out")]
          [alphatize_res (interpret-anf-and-output alphatize_prg "_alphatize_res.out")]
          [anf_res (interpret-anf-and-output anf_prg "_anf_res.out")]
          [cps_res (interpret-cps-and-output cps_prg "_cps_res.out")]
          [closure_res (interpret-clo-and-output clo_conv_prg "_closure_res.out")])

      (displayln (~a "Emitting C++ for: "
                     filename-string
                     " and outputting to: "
                     (generate-comp-filepath "_cpp_program.cpp")))
      (emit-cpp clo_conv_prg (generate-comp-filepath "_cpp_program.cpp"))

      (if interp-flag 
          (verify-correctness filename-string desugar_res alphatize_res anf_res cps_res closure_res)
          (verify-correctness filename-string desugar_res alphatize_res anf_res cps_res cps_res)
          ; 'no-verification
          ))))
; )

(define (read-direc directory)
  (for-each (lambda (dir)
              (let ([dir-path (build-path (current-directory) directory dir)])
                (when (directory-exists? dir-path)
                  (for-each (lambda (file)
                              (let ([file-path (build-path (current-directory) directory dir file)])
                                (when (and (file-exists? file-path)
                                           (regexp-match? #rx"[.]haha$" (path->string file)))
                                  (run-program directory
                                               file
                                               file-path
                                               (build-path (current-directory) "prelude.haha")
                                               (build-path (current-directory) "analyze.slog")
                                               #f ; interp-flag
                                               #f ; slog-flag
                                               ))))
                            (directory-list (build-path (current-directory) directory dir))))))
            (directory-list directory)))
; takes a relative path, cannot pass an absolute path
; right now, can only support running individual files in the tests, not in tests2 or some place else
(define (test-file user-file slog-flag)
  (let ([full-path (build-path (current-directory) user-file)])
    (run-program
     "tests" ; directory
     (string->path (car (regexp-match #rx"[A-Za-z0-9_]+\\.haha$"
                                      user-file))) ; filename in the form #<path: apply.haha>
     full-path
     (build-path (current-directory) "prelude.haha")
     (build-path (current-directory) "analyze.slog")
     #f ; interpreter flag
     slog-flag ;slog-flag
     )))


(define (main args)
  (cond
    [(= (vector-length args) 0) (read-direc "tests/")]
    [(and (= (vector-length args) 1) (directory-exists? (vector-ref args 0)))
     (read-direc (vector-ref args 0))]
    [(and (= (vector-length args) 1)
          (file-exists? (string-append "./tests/"
                                       (vector-ref args 0)
                                       "/"
                                       (vector-ref args 0)
                                       ".haha"))) ; racket test tests/easy/easy.haha
     (test-file (string-append "./tests/" (vector-ref args 0) "/" (vector-ref args 0) ".haha") #f)]
    [(and (= (vector-length args) 2)
          (file-exists? (string-append "./tests/"
                                       (vector-ref args 1)
                                       "/"
                                       (vector-ref args 1)
                                       ".haha"))) ; racket test tests/easy/easy.haha
     (test-file (string-append "./tests/" (vector-ref args 1) "/" (vector-ref args 1) ".haha") #t)]
    [else (error "Invalid command line arguments. Please provide either a file or a directory.")]))

(main (current-command-line-arguments))
