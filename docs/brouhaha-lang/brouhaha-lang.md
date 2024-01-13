# Brouhaha

## Introduction
- Talks about how it is racket like.
- Mentions that this documentation assumes some knowledge about scheme like language syntax.
- Four words about how to run and link to set-up's how to run section.

## Structure
- Talks about the brouhaha_main function, and how to call it and how there are only top level defines.

## Some Example programs
- Some example programs and how to use simple constructs like  if, foldl, and, +, let etc

## Very Small How to Run
- Talk a little about how to run and then link to the [set-up](../set-up/set-up.md)

## Function
- have another file to describe all the functions and the i/p's and o/p's
- [inbuilt functions](./supported_functions.md)

### Your first program
Factorial example:
```scheme
(define (fact n)
  (if (= 0 n)
      1
      (* n (fact (- n 1)))))

(define (brouhaha_main)
  (fact 5))

  ---> 120
```