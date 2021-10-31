#include <stdio.h>
#include <math.h>

int main(){

	int n=5, p=3, q=4;
	//static arrays
	double A[n][p], B[p][q], C[n][q];
	//loop counters
	int i, j, k;

	//creating matric A, B, C
	for (i=0; i<n; i++){
		for (j=0; j<p; j++){
			A[i][j]=i+j;
		}
	}
	
	for (i=0; i<p; i++){
		for (j=0; j<q; j++){
			B[i][j]=i-j;
		}
	}

	for (i=0; i<n; i++){
		for (j=0; j<q; j++){
			C[i][j]=0.0;
		}
	}
	
	//multiplying A and B matric outputtin reults to C. 
	for (i=0; i<n; i++){
		for (j=0; j<q; j++){
			for (k=0; k<q; k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	
	//printing out the matrix A, B and C to the screen.
	printf("\nThe Matric A:\n\n");
	for(i=0; i<n; i++){
		for (j=0; j<p; j++){
			printf("%3.0f", A[i][j]);
		}
	printf("\n");
	}

	printf("\nThe Matric B:\n\n");
	for(i=0; i<p; i++){
		for (j=0; j<q; j++){
			printf("%3.0f", B[i][j]);
		}
	printf("\n");
	}

	printf("\nThe Matric C:\n\n");
	for(i=0; i<n; i++){
		for (j=0; j<q; j++){
			printf("%3.0f ", C[i][j]);
		}
	printf("\n");
	}

	return 0;
}

