#include <stdio.h>
#include <stdlib.h>


int main() {
    float n;
    char m;
    scanf("%f %c",&n,&m);
    if((n<-1 || n>1)||(m!='P'& m!='N')){
    	printf("IMPOSSIBLE");
	}
	else if((m=='P')&& (n>0 && n<1)){
		printf("1");
	}
	else if((m=='N')&& (n>0 && n<1)){
		printf("2");
	}

	else if((m=='P')&& (n>-1 && n<0)){
		printf("4");
	}
	else if((m=='N')&& (n>-1 && n<0)){
		printf("3");
	}
		return 0;
	}
