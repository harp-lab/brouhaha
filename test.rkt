#lang racket

(require "compile.rkt"
         "verify.rkt"
         "utils.rkt"
         "interp-anf.rkt"
         "interp-cps.rkt"
         "interp-closure.rkt"
         "emit-cpp.rkt"
         "emit-slog.rkt")

(define (write-to file content)
  (with-output-to-file file (lambda () (pretty-print content)) #:exists 'replace))

(define (run-program directory program filename file-path prelude-path)
  (with-handlers ([exn:fail?
                   (lambda (exn)
                     (displayln
                      (~a "Now running: " filename "\n" "Failed to run: " filename " with error "))
                     (print-red (exn-message exn))
                     (displayln "\n"))])

    (define filename-string-ext
      (path->string filename)) ; converting  #<path:apply.haha> to "apply.haha"
    (define filename-string
      (regexp-replace #rx"[.]haha$" filename-string-ext "")) ; fname wo extension
    (define out-dir (string-append directory "/" filename-string)) ; "tests2/" + "apply"

    (verify-cmake (string-append out-dir "/CMakeLists.txt"))
    (verify-driver (string-append out-dir "/driver.cpp"))
    (verify-answer-file (string-append out-dir "/answer"))

    (let* ([generate-res-filepath
            (lambda (suffix) (string-append out-dir "/output/" filename-string suffix))]
           [generate-comp-filepath
            (lambda (suffix) (string-append out-dir "/compiler-out/" filename-string suffix))]
           [compiled-program (compile (append (read-program prelude-path) (read-program file-path)))]
           [desugar_prg (list-ref compiled-program 0)]
           [alphatize_prg (list-ref compiled-program 1)]
           [anf_prg (list-ref compiled-program 2)]
           [cps_prg (list-ref compiled-program 3)]
           [cps_after_anf (list-ref compiled-program 4)]
           [clo_conv_prg (list-ref compiled-program 5)]
           [results (list (interp desugar_prg)
                          (interp alphatize_prg)
                          (interp anf_prg)
                          (interp-cps cps_prg)
                          (interp-closure clo_conv_prg))])

      (verify-dir out-dir)
      (verify-dir (string-append out-dir "/output/"))
      (verify-dir (string-append out-dir "/compiler-out/"))
      (displayln (~a "Now running: " filename-string))

      (displayln (~a "Emitting C++ for: "
                     filename-string
                     " and outputting to: "
                     (generate-comp-filepath "_cpp_program.cpp")))
      (emit-cpp clo_conv_prg (generate-comp-filepath "_cpp_program.cpp"))

      ; (displayln (~a "Emitting Slog for: "
      ;                filename-string
      ;                " and outputting to: "
      ;                (generate-filepath "_slog.slog")))
      ; ; (write-to (generate-filepath "_slog.slog") (write-program-for-slog desugar_prg))
      ; (with-output-to-file (generate-filepath "_slog.slog") (lambda () (pretty-print (write-program-for-slog desugar_prg))) #:exists 'replace)

      (for-each
       write-to
       (map
        generate-comp-filepath
        (list "_compile.out" "_desugar.out" "_alphatize.out" "_anf.out" "_cps.out" "_closure.out"))
       compiled-program)
      (for-each write-to
                (map generate-res-filepath
                     (list "_desugar_res.out"
                           "_alphatize_res.out"
                           "_anf_res.out"
                           "_cps_res.out"
                           "_closure_res.out"))
                results)
      (apply verify-correctness (cons filename-string results)))))

(define (read-direc directory)
  (for-each (lambda (dir)
              (let ([dir-path (build-path (current-directory) directory dir)])
                (when (directory-exists? dir-path)
                  (for-each (lambda (file)
                              (let ([file-path (build-path (current-directory) directory dir file)])
                                (when (and (file-exists? file-path)
                                           (regexp-match? #rx"[.]haha$" (path->string file)))
                                  (run-program directory
                                               (read-program file-path)
                                               file
                                               file-path
                                               (build-path (current-directory) "prelude.haha")))))
                            (directory-list (build-path (current-directory) directory dir))))))
            (directory-list directory)))

(define (test-file user-file)
  (define direc (regexp-replace #rx"[A-Za-z0-9]+\\.haha$" user-file ""))
  (let ([full-path (build-path (current-directory) user-file)])
    (run-program direc
                 (read-program full-path)
                 (string->path "\\")
                 full-path
                 (build-path (current-directory) "prelude.haha"))))

(define (main args)
  (cond
    [(= (vector-length args) 0) (read-direc "tests/")]
    [(and (= (vector-length args) 1) (directory-exists? (vector-ref args 0)))
     (read-direc (vector-ref args 0))]
    [(and (= (vector-length args) 1) (file-exists? (vector-ref args 0)))
     (test-file (vector-ref args 0))]
    [else (error "Invalid command line arguments. Please provide either a file or a directory.")]))

(main (current-command-line-arguments))
