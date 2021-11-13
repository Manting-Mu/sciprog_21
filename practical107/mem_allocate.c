#include<stdio.h>
#include<stdlib.h>

//alocating size of array
int* allocatearray(int n) {
	int* array; 
	array = (int*) malloc(n* sizeof(int));
	printf("Array of size %d allocated.\n", n);
	return array;

}

//generating an array with elements of 1s
void fillwithones(int* array, int n){
	int i;
	for(i = 0; i<n; i++)
	array[i] = 1;
}


//printing the array
void printarray(int *array, int n){
	int i;
	for(i = 0; i<n; i++)
		printf("%d ", array[i]);
		printf("\n");
}

//free the memory of the array
void freearray(int* array){
	free(array);
	printf("Array freed!\n");
}

int main() {

	int n;
	int* array_main;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	array_main = allocatearray(n);
	fillwithones(array_main, n);
	printarray(array_main, n);
	freearray(array_main);
	array_main = NULL;

	return 0;
}



