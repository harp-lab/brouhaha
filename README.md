# Introduction

Brouhaha is a minimal Racket-like language implementation that is 
* s-expression based
* call-by-value/eager
* pure
* untyped

This document serves as a guide for getting started with Brouhaha, including its pre-requisites, how to run the compiler and interpreter, read outputs, and running C++.
# Pre-Requisites

Before you get started with Brouhaha, ensure that you have the following installed on your computer:

* C++: You should have a C++ compiler installed. If not, you can download it from [here](https://clang.llvm.org/)
* Racket: You will need Racket to run the compiler and interpreter. If not installed, you can download it from [here](https://racket-lang.org)

# Your first program
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

# Running the Compiler and Interpreter

To run the Brouhaha compiler and interpreter, use the following command in your terminal:

```bash

racket test.rkt <folder containing .haha files>

For example: racket test.rkt tests/
```
Reading Outputs

After running the compiler and interpreter, outputs are generated in the same folder as your .haha files. These output files will bear the same name as their respective Brouhaha filenames. Each output file will contain results for the following steps:

    Desugaring
    Alphatization
    ANF Conversion
    CPS Conversion
    Closure Conversion

In addition to these, the output file also includes results from the interpreted version for each step, as well as the C++ output.
# Running C++

To run the C++ part of Brouhaha:

Compile: Compile the C++ file using Clang++ or G++. Ensure you compile it alongside prelude.h. This is already done for you in the CMake. We are still in testing phases 


By following these steps, you can easily start using Brouhaha and make the most of its functionalities. If you encounter any issues or need further assistance, feel free to raise an issue on our GitHub repository.


# Supported functions:

The following are built-in brouhaha functions.
```
+ 
- 
* 
modulo 
= 
> 
< 
<= 
>= 
null? 
equal? 
eq? 
cons  
car
even?
odd?
list
member?
foldl
reverse
take
map
filter
drop
foldr
```

