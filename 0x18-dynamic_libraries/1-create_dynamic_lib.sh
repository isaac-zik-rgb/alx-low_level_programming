#!/bin/bash
for file in *.c; do
    gcc -FPIC -c "$file"
done
gcc -shared -o liball.so *.o
rm *.o
