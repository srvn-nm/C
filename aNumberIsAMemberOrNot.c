#include <stdio.h>
int f(int x){
	int sum=1;
	if (x==1)
	return 1;
	else{
		 int n=2;
		 int sum=1;
		while(x>sum){
			sum =sum+(2*n);
			n++;
		}
		if(x==sum)
			return n-1;
		else
		return -1;
	}
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",f(x));
}