#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic main.cpp -I ./cblas -lcblas -o main
./main
