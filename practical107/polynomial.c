#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//function generating factorials
int factorial(int n){
	int i;
	int fact = 1;

	if (n==0)
		return 1;

	for (i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

//functions computing the sum of factorials (the polynomial)
double compute_polynomial(int n, int x) {
	double sum = 0.0;
	int i;

	for(i = 0; i<=n; i++)
		sum = sum + (double)pow(x,i)/factorial(i);
	return sum;
}

int main() {
	
	int order_of_polynomial;
	int size_of_array;
	double* array_of_terms;
	int i, x=1;

	printf("Enter the order of polynomial: ");
	scanf("%d", &order_of_polynomial);

//allocating memory for the array which will be storing the polynomial
	size_of_array = order_of_polynomial + 1;
	array_of_terms = (double *) malloc(size_of_array * sizeof(double));

	for (i = 0; i < size_of_array; i++) {
		array_of_terms[i] = compute_polynomial(i, x);
		printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
	}

	printf("e1 = %0.20f\n", exp(1));
//printing the error of the estimated value of the polynomial
//the error for higher powers alternates between + and -, this is due to the memory allocated for each term has an upper and lower bound and this means the value is rounded up or down and therefore over/under estimated. 

	for(i = 0; i < size_of_array; i++)
		printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_terms[i]);
	
	free(array_of_terms);
	array_of_terms = NULL;

return 0;
}