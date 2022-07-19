#!/bin/bash

function build
{
    docker build . -t cpp:latest
}

function run
{
    #docker run -it --rm --name cpp_env -v ${PWD}:/tmp/ cpp /bin/bash
    docker run -it --rm --name cpp_env -v ${PWD}:/tmp/ cpp /bin/bash
}

if [[ "$1" = "run" ]]; then
    run
elif [[ "$1" = "build" ]]; then
    build
elif [[ "$1" = "id" ]]; then
    id -a
else
    echo "Error: Wrong parameter"
    echo "  run"
    echo "  build"
    echo "  id"
    echo "Your parameter is => "$1
fi
