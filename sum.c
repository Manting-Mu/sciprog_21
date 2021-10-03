#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
   sum1 += 1.0/i;  /*  first sum inserted, 1.0/1 + 1.0/2 + 1.0/3 + ... + 1.0/1000 */
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      /* second sum inserted, 1.0/1000 + 1.0/999 + 1.0/998 + ... + 1.0/1 */
      sum2 = sum2 + 1.0/i;
 }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2 - sum1; /* ?? */

   printf(" Difference between the two is %f\n",diff);

}
