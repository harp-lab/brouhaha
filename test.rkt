#lang racket

(require "compile.rkt")
(require "interp-anf.rkt")
(require "interp-cps.rkt")
(require "interp-closure.rkt")
(require "emit-cpp.rkt")

(define (write-to file content)
  (with-output-to-file file (lambda () (pretty-print content)) #:exists 'replace))

(define (verify-correctness file desugar alphatize anf cps closure)
  (cond
    [(and (equal? desugar alphatize) (equal? alphatize anf) (equal? anf cps) (equal? cps closure))
     (displayln (~a "Each output stage matched!\n"))]
    [else (displayln (~a "Your outputs did not match for " file "\n"))]))

(define (run-program directory program filename file-path prelude-path)
  (define filename-string-ext (path->string filename))
  (define filename-string (regexp-replace #rx"[.]haha$" filename-string-ext ""))
  (define out-dir (string-append directory "/" filename-string))

  (unless (directory-exists? out-dir)
    (make-directory out-dir))

  (let* ([generate-filepath (lambda (suffix) (string-append out-dir "/" filename-string suffix))]
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
    (displayln (~a "Now running: " filename-string))
    (emit-cpp clo_conv_prg (generate-filepath "_cpp_program.cpp"))
    (displayln (~a "Emitting C++ for: "
                   filename-string
                   " and outputting to: "
                   (generate-filepath "_cpp_program.cpp")))
    (for-each
     write-to
     (map generate-filepath
          (list "_compile.out" "_desugar.out" "_alphatize.out" "_anf.out" "_cps.out" "_closure.out"))
     compiled-program)
    (for-each
     write-to
     (map
      generate-filepath
      (list "_desugar_res.out" "_alphatize_res.out" "_anf_res.out" "_cps_res.out" "_closure_res.out"))
     results)
    (apply verify-correctness (cons filename-string results))))

(define (read-direc directory)
  (for-each (lambda (file)
              (let ([full-path (build-path (current-directory) directory file)])
                (when (and (file-exists? full-path) (regexp-match? #rx"[.]haha$" (path->string file)))
                  (run-program directory
                               (read-program full-path)
                               file
                               full-path
                               (build-path (current-directory) "prelude.haha")))))
            (directory-list directory)))

(define (main args)
  (cond
    [(= (vector-length args) 0) (read-direc "tests2/")]
    [(and (= (vector-length args) 1) (directory-exists? (vector-ref args 0)))
     (read-direc (vector-ref args 0))]
    ; below is for individual files, not currently working
    [(and (= (vector-length args) 1) (file-exists? (vector-ref args 0)))
     (let ([path-string (vector-ref args 0)])
       (run-program (path->string (path->directory-path (string->path path-string)))
                    (read-program path-string)
                    (regexp-replace #rx".*/" path-string "")
                    path-string
                    (build-path (current-directory) "prelude.haha")))]
    [else (error "Invalid command line arguments. Please provide either a file or a directory.")]))

(main (current-command-line-arguments))
