#include <stdio.h>
#include <stdlib.h>


int main() {
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	x4=x1+x3-x2;
	y4=y1+y3-y2;
	if(((y3-y2)*(y1-y2))==((x1-x2)*(x2-x3))){
	    printf("%d %d",x4,y4);
	}
	else{
		printf("Not Possible");
	}
	return 0;
}