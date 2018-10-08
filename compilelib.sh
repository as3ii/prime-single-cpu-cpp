#!/bin/bash

for i in *.h; do
    echo "compiling $i"
	g++ -Wall -c ${i%.h}.cc -o ${i%.h}.o
done
