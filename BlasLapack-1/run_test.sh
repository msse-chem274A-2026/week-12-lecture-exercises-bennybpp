#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic main.cpp -I ./cblas -lcblas -o main

read -r test_output < <(./main)
if [[ "$test_output" == "6.12 33.16 68.14 -67.84 31.78" ]]
then
    exit 0
else
    exit 1
fi
