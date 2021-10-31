This folder contains codes from practicals in week 6

use gcc -o program program.c to compile the file, add -lm function if <math.h> is specified in the program.c

matrix_multiplication.c
- a script generates 3 matrixs A, B, C and multiplies A and B, the results are out putted in matrix C.


to compile mm.c and main.c use:

'gcc -c main.c'
'gcc -c mm.c'
'gcc -o program main.o mm.o'

mm.c 
- contain matmult function for multiplying two matrixs and retu C to function main.

main.c 
- contain main function for initating the 3 matrixsand prints out the values. 

 

