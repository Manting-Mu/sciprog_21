#include <stdio.h>
#include <math.h>

//state the function that convert degrees to radians
float degtorad(float arg);

//main coding block for calculating tanx where x >0, <60
int main(void) {
	float degang, radang;
	
	//creating a loop for degrees from 0 to 60 with increment of 5
	for ( degang = 0 ; degang <= 60 ; degang += 5)
	//use function to generate degree angles
	radang = degtorad(degang);
	printf( " Deg %f, Rad %f\n", degang, radang);

	//compute tan(x), store in array	
	float tan[13] = {tan(radang)};


	return 0;
}

//function that convert degrees to radians
float gegtorad (float arg) {
	float pi = 3.1415927;
	return( (pi*arg)/180.0 );
}
