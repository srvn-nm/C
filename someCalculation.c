#include <stdio.h>
#include <stdlib.h>
 
  int n,s;
 long long t,h;
 
long long func(long long n,long long h){	
	if(n>1){
		t=((func(n-1,h))*(n+1));
		t=t%h;
		return t;
	}
	else if(n==1){
		return 2;
	}
}

int func2(long long f,long long h){
	t=func(f,h);
	s=t%h;
	if(s==0){
		return h;
	}
	else if(s!=0){
		return s;
	}
}

int main() {
	long long x,y;
	scanf("%lld %lld",&x,&y);
	printf("%lld",func2(x,y));
	return 0;
}