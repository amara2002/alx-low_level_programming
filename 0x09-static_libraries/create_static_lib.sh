#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -t liball.a *.o

