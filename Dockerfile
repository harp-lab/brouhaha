# Creates the repo, gets and installs the dependencies, ready to run the test
FROM ubuntu:20.04

ENV TZ=CST

# Adding gnupg2 to allow adding the racket ppa to sources
RUN apt-get update && apt-get install -y gnupg2

#  Adding racket ppa to sources.list
RUN echo "deb https://ppa.launchpadcontent.net/plt/racket/ubuntu focal main " >> /etc/apt/source.list
RUN echo "deb-src https://ppa.launchpadcontent.net/plt/racket/ubuntu focal main" >> /etc/apt/source.list
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys D9D33FCD84D82C17288BA03B3C9A6980F827E01E

# Installing racket
RUN apt-get update
RUN apt-get install -y racket


# Installing cmake 3.22.1
ADD https://cmake.org/files/v3.22/cmake-3.22.1-linux-x86_64.sh /cmake-3.22.1-linux-x86_64.sh
RUN mkdir /opt/cmake
RUN sh /cmake-3.22.1-linux-x86_64.sh --prefix=/opt/cmake --skip-license
RUN ln -s /opt/cmake/bin/cmake /usr/local/bin/cmake
RUN cmake --version
RUN apt-get install -y build-essential
RUN apt-get install -y vim

# installing g++ and git
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y g++ git

WORKDIR /home

# cloning brouhaha
RUN git clone https://github.com/sowmith1999/brouhaha.git

WORKDIR /home/brouhaha
#  Getting and compiling the GC
RUN apt-get install -y wget
RUN wget https://github.com/sowmith1999/bdwgc-gmp_test/raw/master/tars/gc-8.2.2.tar.gz
RUN tar -xf gc-8.2.2.tar.gz
RUN rm -r ./dependencies/bdwgc
RUN mkdir ./dependencies/bdwgc
RUN mkdir build_gc
WORKDIR /home/brouhaha/build_gc
RUN ../gc-8.2.2/configure --enable-cplusplus --prefix="/home/brouhaha/dependencies/bdwgc"
RUN  make
RUN make check
RUN make install

# cleaning up from the compilation of GC
WORKDIR /home/brouhaha
RUN rm -r build_gc
RUN rm -r ./gc-8.2.2
RUN rm gc-8.2.2.tar.gz

# cleaning the apt-get
RUN apt-get clean
