FROM ubuntu:18.04

RUN apt-get update && apt install -y \
    man \
    clang \
    make \
    valgrind \
    gdb 

#USER 1000:1000
