#!/bin/bash
gcc -c *.c
ar liball.a -L rc *.o
