FROM ubuntu:18.04

RUN apt-get update && apt install -y \
    man \
    clang \
    make \
    valgrind

#USER 1000:1000
