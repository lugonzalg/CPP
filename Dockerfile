FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
    man \
    clang \
    make \
    vim \
    git \
    curl \
    zsh \
    valgrind \
    gdb 

#ENTRYPOINT sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)

#COPY .vimrc ~
#COPY ./.vim/ ~
