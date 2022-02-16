#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

    int arqam,tedad;

    void bazi(int tedad,int arqam){
    	int i=0,j=0,t,k=0,adad,aval,dovom;
    	double emtiaz,kol=0,dorost=0;
    	int s[tedad];
    	srand ( time(0) );
    	aval=(pow(10,arqam)-(pow(10,arqam-1)));
    	dovom=(pow(10,arqam-1));
		for(i=0;i<5;i++){
		for(j=0;j<tedad;j++){
			t=rand()%aval+dovom;
				s[j]=t;
				printf("%d ",t);
		}
		printf("\n");
		fflush(stdin);
		for(k=0;k<tedad;k++){
			scanf("%d",&adad);
			if(adad==s[k]){
				dorost+=1;
				kol+=1;
				printf("Correct :) :D\n");
			}
			if(adad!=s[k]){
				kol+=1;
				printf("Incorrect :( :P\n");
			}
		}
			emtiaz=dorost/kol;
			printf("%.2f\n",emtiaz);
	}
}

int main() {
	int nazar;
	scanf("%d %d",&tedad,&arqam);
    bazi(tedad,arqam);
	printf("1)Continue\n");
	printf("2)Increase numbers\n");
	printf("3)Increase digits\n");
	printf("4)End\n");
	scanf("%d",&nazar);
	if(nazar==1){
		bazi(tedad,arqam);
	}
	if(nazar==2){
		bazi(tedad+1,arqam);
	}
	if(nazar==3){
		bazi(tedad,arqam+1);
	}
	if(nazar==4){
		return 0;
	}
	return 0;
}