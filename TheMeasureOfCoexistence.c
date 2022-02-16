#include <stdio.h>

int main (){
	int m =1;
	int x,y;
	scanf ("%d",&x);
	scanf("%d",&y);
	int z;
	if(x>y)
	z=x;
	else
	z=y;
	for(m=2;m<=z;m++){
		if(x%m==y%m)
		printf("%d\n",m);
	}
}