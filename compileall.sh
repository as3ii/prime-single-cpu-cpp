#!/bin/bash

for i in *.h; do
    echo "compiling ${i%.h}.cc"
    g++ -Wall -c ${i%.h}.cc -o ${i%.h}.o
done

echo "compiling main.cc"
g++ -Wall -O3 -std=c++11 -pthread main.cc lib.o -o primi-single-cpu-c++

