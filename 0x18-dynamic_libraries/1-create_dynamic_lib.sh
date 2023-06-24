#!/bin/bash

gcc -c -Wall -Werror *.c
gcc -shared *.o -o liball.so
