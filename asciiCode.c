#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char c,b;
	int n;
	scanf("%c",&c);
	scanf("%d",&n);
	c=c+n;
	b=c+32;
	printf("%c %c",c,b);
	return 0;
}