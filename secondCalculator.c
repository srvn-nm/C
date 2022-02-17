#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,da,h,m,s; 
	scanf("%d",&n);
	da=n/86400;
	h=(n%86400)/3600;
	m=((n%86400)%3600)/60;
	s=((n%86400)%3600)%60;
	printf("%d %d %d %d",da,h,m,s);
	return 0;
}