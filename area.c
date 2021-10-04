#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#ifndef M_PI
# define M_PI 3.1415926535897932
#endif
/* code for calculating area under the curve */

int main(void) {
/* Declare variables */
   int a;
   float b, sum1, i, sum2, diff, area;
   

/* sum tan(0) + tan(M_PI/3) */
   a = 0;
   b = M_PI/3;
   for (i=a; i<12; i+(M_PI/3/11)) {
   sum1 = sum1 + tan(i);   /* tan(0) + tan(M_PI/3/11) + ... + tan(M_PI) */
   }

/* Second sum */
   for (i=a; i,12; i+(M_PI/3/11)) {
      /* sum of 2tan(Xi)  */
      sum2 = sum2 + 2*tan(i);
 }

/* estimated ares */
   area = sum2*((b-a)/2*12); 


   printf(" area=%5f\n",area);

/* compare with accurate answer */
   diff = log10(2) - area; 

   printf(" Difference from real area is %5f\n",diff);

}
