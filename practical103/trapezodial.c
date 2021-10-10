#include <stdio.h>
#include <math.h>

int main(){
	
	int N=12, i;
	float a=0.0, b_deg=60.0;
	
	//convert pi/3 to radians	
	float b_rad;
	b_rad=(M_PI * b_deg)/180.0;
	printf("pi/3 in Radians=%f\n", b_rad);

	//f(x0)+f(xN)
	float area=tan(a)+tan(b_rad);
	printf("initial sum=%f\n", area);

	//2*f(x1)+2f(x2)+...+ 2*f(xN-1)
	for(i=5; i<60; i=i+5){
		area=area+2*tan((M_PI*i)/180.0);
		printf("New area at x%d =%f\n", area);
	}

	//Multiply with b-a/2N 
	float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
	area=mult_rad*area;

	//Approximated value
	printf("\nTrapezodial result=%f\n", area);
	//Actual result
	printf("real result=%f\n", log(2.0));

return 0;
}