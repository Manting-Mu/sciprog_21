#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void interativeGCD(int *a, int *b);
void recursiveGCD(int *a, int *b);

int main() {

	int n1, n2, error;

	// enter information from user

	printf("Enter 2 postive intergers (enter larger one first) for computing their GCD: \n");
	scanf("%d, %d", &n1, &n2);
	
	if (error != 2) {
		printf("please try again\n");
		return 1;
	}

	if (n1<=0 || n2<=0) {
		printf("These number are not positive!\n");
		return 1;
	}

	return 0;
}

	int i;
	for (i = 1; n2 != 0; i++) {
		iterativeGCD(&n1, &n2);
	}
	printf("Iterative GCD=%d\n", n1);
	printf("Recursice GCD=%d\n", recursiveGCD(&n1, &n2);
	return 0;
}

//defined as a void function with no return type

void iterativeGCD(int *a, int *b) {

	int remainder;
	remainder = *a % *b;
	*a = *b;
	*b = remainder;		
} 

void recursiveGCD(int *a, int *b) {
	if (*b=0) {
		return *a;
	}
	else{
		return(resursiveGCD(b, a%b))
	}
}

