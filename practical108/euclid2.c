#include <stdio.h>
//declare functions
int iterativeGCD(int a, int b);

int main(void) {
	int a, b, error;

	printf("please input two positive integers\n");
	error = scanf("%d %d", &a, &b);
	if (error != 2){
		printf("please try again\n");
	}

	if (a<=0 || b<=0) {
		printf("these numbers are not positive!\n");
		return 1;
	}

//Call functions
	printf("iterative gcd(%d, %d)=%d\n", a, b, iterativeGCD(a, b));
	printf("recursive gcd(%d, %d)=%d\n", a, b, recursiveGCD(a, b));

	return 0;
}
//define functions
int iterativeGCD(int a, int b){
	int temp;
	while(b != 0 ){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int recursiveGCD(int a, int b){
	if (b==0){
		return a;
	}
	else{
		return(recursiveGCD(b, a%b));
	}
}
