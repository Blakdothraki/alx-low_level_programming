#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c -o *.o
ar rc liball.a *.o

