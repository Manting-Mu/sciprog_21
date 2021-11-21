#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"

int main(){
	//user input of matric of size n *n
	int n;
	printf("Enter the square side:\n");
	scanf("%d", &n);

	// Allocate a matrix
	
	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	for (i = 0; i<n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}
	//inputing matrix elements
	int j;

	for (i = 0; i<n; i++){
		printf("Enter the elements in row #%d, separated by blacks and/or linebreaks:\n", i+1);
		for(j= 0; j<n; j++){
			scanf("%d", &magicSquare[i][j]);
		}
	}
	//calling isMagicSquare function, check if square is magic.
	printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");
	//free memory taken by magic square matrix. 
	for(i = 0; i < n; i++) {
		free(magicSquare[i]);
	}
	free(magicSquare);

	return 0;
}
