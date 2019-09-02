#!/bin/bash

{
    cmake --build ./build
    ./build/Programa2
} || {
    ./build.sh
    cmake --build ./build
    ./build/Programa2
}
