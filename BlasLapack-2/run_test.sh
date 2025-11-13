#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic main.cpp -I ./cblas -lcblas -o main

read -r test_output < <(./main)
if [[ "$test_output" == "2.2 3.8 14.4 -7.7 7.8 -2.9 4 9.1 -9.4 -0.2" ]]
then
    exit 0
else
    exit 1
fi
