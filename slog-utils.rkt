#lang racket

(require file/sha1)

(define (runslog slog-path out-path fact-file)
  ;slog-path is the generated slog file
  ;out-path is the generated out-path
  ;fact-file is the file holding all the eval outs
  'todo

  )


; ; Example usage:
; (define file-path "test.rkt")
; (define hash-value (file-to-sha256 file-path))
; (printf "Hash-value of ~a: ~a\n" file-path hash-value)

(define (file-to-hash-string file-path)
  (bytes->hex-string (sha224-bytes (file->bytes file-path))))

