# Set-up
[Back to main page](../docs.md)

## Introduction
This file talks about how to set-up the repo to run all the tests, How to install the required programs, clone the repo, running test.rkt and running CMake.

## Setup Docker
- This is pending work
- Talk about how to get the docker image and get the docker container running

## Installing racket and C++ and CMake
- Racket, [How to install Racket](https://docs.racket-lang.org/pollen/Installation.html)
- CPP compiler, have a CPP compiler of your choice installed, should support C++14 and higher.
    * [Installing g++](https://linuxhint.com/install-and-use-g-on-ubuntu/)
- CMake, [Official installation doc](https://cmake.org/install/)

## Get the repo
- clone the repo 
```bash
git clone https://github.com/harp-lab/brouhaha.git
```

## How to run the test.rkt
- Once you have completed the above steps, Open the repo and run the test.rkt using racket.
```bash
racket test.rkt ./tests [test-name]
```
- Look at the [docs/internals/testing/testing.md](../internals/internals.md) for more info about how the test.rkt works.


## How to get the CMake Running
- test.rkt generates all the files required for testing, we use CMake to build and run those tests.

```bash
mkdir build
cd build
cmake ..
make
```

## Talk a little about CMake
- yeee, we prefer using cmake in vscode, .haha

