#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
    numdigits = log2(inum);
    numdigits = ceil(numdigits)+1;
      printf("The number of digits is %d\n",numdigits);

/* numdigits = ceil( logf(fnum)/logf(2) ); */
/* compile flag: gcc -o Conversion_c Conversion.c -lm -l for library and m for math to add the library */

   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
