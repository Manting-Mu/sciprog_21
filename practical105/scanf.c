#include <stdio.h>

int main(void) {

	int i;
	double a;
	printf("Enter an int and a double, spearately by (,)\n");	//info displayed on screen about what to input
	scanf("%d, %lf", &i, &a);					//user input
	printf("You have entered %d, and %lf\n", i, a);			//confirm the data inputed.

	int *pointer_to_i = &i;		
	printf("The value i is %d\n", i);				//print value of i
	printf("The value i is also %d\n", *pointer_to_i);		//print value of pointer of i
	printf("The address of i is %d\n", &i);				//print memery address of i


	return 0;
}

