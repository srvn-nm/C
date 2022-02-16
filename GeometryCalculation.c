#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int b1, b2;
	double t, tmax, x;
	scanf("%d %d %lf %lf",&b1 ,&b2,&t,&tmax);
	x=pow(((b1*b1)+(b2*b2)-(2*b1*b2*cos(t))),0.5);
	if(t>tmax){
		printf("Theta is bigger than theta max!");
	}
	else{
		printf("%.2lf",x);
	}
	return 0;
}