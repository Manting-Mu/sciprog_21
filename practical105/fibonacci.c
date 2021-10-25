#include <stdio.h>
#include <stdlib.h>

void fibo(int *a, int *b);

int main() {

	int n;

	// enter information from user

	printf("Enter a positive integer for n: \n");
	scanf("%d", &n);

	//if the number eneter is less than 1 then it is not a valid input the program stops

	if (n < 1) {
		printf("Number less than 1\n");
		exit(1);
	}

	int n1 = 0;
	int n2 = 1;
	
	//print the first input of n1 the start of fibonacci sequence

	printf("The Fibonacci sequence is: \n");
	printf("%d, ", n1);

	//loop to calculate and print all the fibonacci sequence values

	int i;
	for (i = 1; i < n-1; i++) {
		fibo(&n1, &n2);
		printf("%d, ", n1);
	}

	fibo(&n1, &n2);
	printf("%d\n", n1);

	return 0;
}

//defined as a void function with no return type

void fibo(int *a, int *b) {

	int next;
	next = *a + *b;
	*a = *b;
	*b = next;
} 

