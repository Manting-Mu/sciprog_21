#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GCD(int *a, int *b);

int main() {

	int n1, n2;

	// enter information from user

	printf("Enter 2 postive intergers (enter larger one first) for computing their GCD: \n");
	scanf("%d, %d", &n1, &n2);

	//if the number eneter is less than 1 then it is not a valid input the program stops

	/*if (n1 || n2 < 1) {
		printf("Number less than 1\n");
		exit(1);
	}

	else if (n1 || n2 == 1) {
		printf("GCD = 1 \n");
		exit(1);
	}
	
	printf("The Fibonacci sequence is: \n");
	printf("%d, ", n1);
*/
	//loop to calculate and print all the fibonacci sequence values

	int i;
	for (i = 1; n2 != 0; i++) {
		GCD(&n1, &n2);
	}
	printf("GCD=%d\n", n1);
	return 0;
}

//defined as a void function with no return type

void GCD(int *a, int *b) {

	int remainder;
	remainder = *a % *b;
	*a = *b;
	*b = remainder;		
} 

