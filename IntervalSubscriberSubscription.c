#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,d,e,f,ab[2],cd[2],ef[2],i,j,w,s,t;
	for(i=0;i<2;i++){
		scanf("%d",&ab[i]);
	}
	for(j=0;j<2;j++){
		scanf("%d",&cd[j]);
	}
	for(w=0;w<2;w++){
		scanf("%d",&ef[w]);
	}
	if((ab[0]<=cd[1])&& (ab[0]>=cd[0])&&(ab[0]<=ef[1])&& (ab[0]>=ef[0])){
			s=ab[0];
	}
	else if((cd[0]<=ab[1])&& (cd[0]>=ab[0])&& (cd[0]<=ef[1])&& (cd[0]>=ef[0])){
			s=cd[0];
	}
	else if((ef[0]<=cd[1])&& (ef[0]>=cd[0])&& (ef[0]<=ab[1])&& (ef[0]>=ab[0])){
			s=ef[0];
	}
	else{
		printf("NONE");
		return 0;
	}
	if((ab[1]>=s)&& (ab[1]<=cd[1])&& (ab[1]<=ef[1])){
		t=ab[1];
	}
	else if((cd[1]>=s)&& (cd[1]<=ab[1])&&( cd[1]<=ef[1])){
		t=cd[1];
	}
	else if((ef[1]>=s)&& (ef[1]<=cd[1])&&( ef[1]<=ab[1])){
		t=ef[1];
	}
	printf("%d  %d",s,t);
	return 0;
}