#include <stdio.h>
#include <stdlib.h>

int A(int x,int y){
	if(x==0){
		return (y+1);
	}
	if(x>0 && y==0){
		return (A(x-1,1));
	}
	if(x>0 && y>0){
		return (A((x-1),A(x,y-1)));
	}
}

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",A(m,n));
	return 0;
}