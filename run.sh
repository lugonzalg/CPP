#!/bin/bash

if [[ "$1" = "run" ]]; then
    #docker run -it --rm --volume /etc/passwd:/etc/passwd:ro --volume /etc/group:/etc/group:ro --user 1000:1000 -v ${PWD}:/tmp/ cpp /bin/bash
    docker run -it --rm --name cpp_env -v ${PWD}:/tmp/ cpp /bin/bash
elif [[ "$1" = "build" ]]; then
    docker build . -t cpp:latest
elif [[ "$1" = "id" ]]; then
    id -a
else
    echo "Error: Wrong parameter"
    echo "  run"
    echo "  build"
    echo "  id"
    echo "Your parameter is => "$1
fi
