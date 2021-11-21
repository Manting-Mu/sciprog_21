#include<stdio.h>
#include<stdlib.h>
#define MAX_FILE_NAME 100
#include"magic_square.h"

int getlines(char filenema[MAX_FILE_NAME]);

int main(){
	//reading file with example matrixes, e.g. magic_square.txt
	FILE *f; 
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s", filename);

	f = fopen(filename, "r");
	//reading size of matric from file.
	int n = getlines(filename);

	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	for (i = 0; i<n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}

	int j;
i	//creating the magic square matrix stor in array by reading element from file. 
	for (i = 0; i<n; i++){
		
		for(j= 0; j<n; j++){
			fscanf(f, "%d", &magicSquare[i][j]);
		}
	}
	//checking if magic square is magic. 
	printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");

	for(i = 0; i < n; i++) {
		free(magicSquare[i]);
	}
	free(magicSquare);
	//close the file
	fclose(f);	

	return 0;
}
//reading the files and count the number of lines to determine size of matrix. 
int getlines(char filename[MAX_FILE_NAME]) {
	
	FILE *fp;
	fp = fopen(filename, "r");

	int ch_read;
	int count = 0;

	while( (ch_read = fgetc(fp)) != EOF)
	{
		if (ch_read == '\n'){
			count++;
		}
	}
	
	printf("No. of lines %d\n", count);
	fclose(fp);
	return count;
}
