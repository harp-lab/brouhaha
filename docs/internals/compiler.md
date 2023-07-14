# Compiler

[go to main-page](../docs.md)

## Desugaring

```scheme
 (define (fact n) (if (= '0 n) '1 (* n (fact (- n '1)))))
```

## Alphatize

```scheme
 (define (fact n) (if (= '0 n) '1 (* n (fact (- n '1)))))
```

## ANF Convert

```scheme
  (define (fact n)
    (let ((a6593 '0))
      (let ((a6594 (= a6593 n)))
        (if a6594
          (let ((x6595 '1)) x6595)
          (let ((a6596 '1))
            (let ((a6597 (- n a6596)))
              (let ((a6598 (fact a6597))) (* n a6598))))))))
```

## CPS Convert

```scheme
  (define (fact kont6714 n)
    (let ((a6593 '0))
      (let ((f6717
             (lambda (a6594)
               (if a6594
                 (let ((x6595 '1)) (kont6714 x6595))
                 (let ((a6596 '1))
                   (let ((f6716
                          (lambda (a6597)
                            (let ((f6715
                                   (lambda (a6598) (* kont6714 n a6598))))
                              (fact f6715 a6597)))))
                     (- f6716 n a6596)))))))
        (= f6717 a6593 n))))
```
## Closure CONVERT

```scheme
  (proc
   (fact _7075 kont6714 n)
   (let ((a65936893 '0))
     (let ((f67176894 (make-closure lam7072 - n kont6714 fact *)))
       (clo-app = f67176894 a65936893 n))))
```