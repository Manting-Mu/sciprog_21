#include<stdio.h>
#include<math.h>

//state the function that convert degrees to radiansi = degtorad
float degtorad(float degang);

//main coding block for calculating tanx where x >0, <60
int main(void) {
	int N=12, i;
	float deg, rad, TanArr[N+1];
	
	//creating a loop for degrees for f(xi) where i=0, 1, ..., 12
	//created array for tanx values 
	for (i=0; i<=N; i++){
		deg=i*5.0;
		rad=degtorad(deg);
		TanArr[i]=tan(rad);
		printf("TanArr[%d]=%f (f(x) at x=%d)\n", i, TanArr[i], i);
	}	

	//Find the area by repezodial rule
	float area;
	area=TanArr[0]+TanArr[N];
	for (i=1 ; i<N; i++){
		area=area+2.0*TanArr[i];
	}

	//Mulriply area by (pi/3)/2N, N=12, in rad
	float mult_rad=degtorad((60.0-0.0)/(2.0*N));
	area=mult_rad*area;

	//Aprox result
	printf("\nTrapezodial result:%f\n", area);
	//Actual result (ln(2))
	printf ("real result: %f\n", log(2.0));

	return 0;
}

//function definition, convert degrees to radians
float degtorad (float degang){
	return((M_PI*degang)/180.0);
}
