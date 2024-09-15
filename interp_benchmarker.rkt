#lang racket

(require "compile.rkt")
(require "interp-anf.rkt")
(require "interp-cps.rkt")
(require "interp-closure.rkt")

(define (time-execution interpreter program)
  (define start (current-inexact-milliseconds))
  (interpreter program (hash))
  (define end (current-inexact-milliseconds))
  (- end start))

(define (run-benchmark program)
  (define compiled (compile-to-alphatize program))
  (define desugar_prg (first compiled))
  (define alphatize_prg (second compiled))
  
  (define anf_prg (anf-convert alphatize_prg #f '()))
  (define cps_prg (cps-convert anf_prg))
  (define clo_conv_prg (closure-convert (alphatize cps_prg)))
  
  (list
   (cons 'anf (time-execution interp anf_prg))
   (cons 'cps (time-execution interp-cps cps_prg))
   (cons 'closure (time-execution interp-closure clo_conv_prg))))

(define benchmarks
  `((fibonacci . ((define (fib n)
                    (if (< n 2)
                        n
                        (+ (fib (- n 1))
                           (fib (- n 2)))))
                  (define (brouhaha_main)
                    (fib 20))))
    (factorial . ((define (fact n)
                    (if (= n 0)
                        1
                        (* n (fact (- n 1)))))
                  (define (brouhaha_main)
                    (fact 10))))
    ))

(define (run-all-benchmarks)
  (for/list ([(name program) (in-hash benchmarks)])
    (cons name (run-benchmark program))))

(define results (run-all-benchmarks))

(for ([result results])
  (printf "Benchmark: ~a\n" (car result))
  (for ([interp-result (cdr result)])
    (printf "  ~a: ~a ms\n" (car interp-result) (cdr interp-result)))
  (newline))