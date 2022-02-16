#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{ 
 double a=-5 , b=(M_PI)/6 , c=(M_PI)/5 ,t;
 t=(log(abs(a))/log(2))+sin(b)+tan(c); 
printf("%.2f\n",exp(t));
a=3.5;
b=2;
c=9;
t=a * (b+a) * b * log(c);
printf("%.2f\n",t);
a=5;
b=6;
t=(1/(pow(a,0.3)))+(2/(pow(b,2.3)));
printf("%.2f\n",pow(t,4.5));
return 0; 
}