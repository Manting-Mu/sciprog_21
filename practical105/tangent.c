#include <stdio.h>
#include <math.h>

//const double, the value can not change, define 2 functions to calculate arctanh with different methods
double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main() {

//let user specifying the precision

	double prec;
	printf("Enter precision for the Maclaurin series:\n");
	scanf("%lf", &prec);

//let user specifying the starting and end input of the arctanh function

	double begin, end;
	printf("Enter the start and finish points for x:\n");
	scanf("%lf, %lf", &begin, &end);

//defining the size of the doubles tan1 and tan2

	double a = ((fabs(begin) + fabs(end))/prec) + 1.0;
	int asize = a;

	double tan1[asize];
	double tan2[asize];

//defineing a for loop to caluclate the Maclaurin series repeatedly with in the range specified by the user previously

	double i;
	int j = 0;

	for (i = begin; i<=end; i+=prec) {
	
		tan1[j] = arctanh1(i, prec);
		tan2[j] = arctanh2(i);
		printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i, fabs(tan1[j] - tan2[j]));

//printing the difference of arctanh values calculated via the two methods
		j++;
	}

	return 0;
}

//function calcualting arctanh using the Maclaurin series

double arctanh1(const double x, const double delta) {
	double arcTan = 0;
	double elem;
	int n = 0;
	do {

		double val = 2*n + 1;
		elem = pow(x, val)/val;
		arcTan += elem;
		n++;

	} while(fabs(elem) >= delta); // fab gets the absolute value of the value ( in the maths lib), because it changes from + and -, to get the element greater than precission regarless of their sign. to stop the while loop or it goes on forever
	return arcTan;

}

//function calculating arctanh using the natural log method

double arctanh2(const double x) {
	return (log(1 + x) - log (1 - x))/2;
}
