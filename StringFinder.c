#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int baresi(char hads[50], int n, char matn[n][50]){
	int j,k,s,h,javab=0,y,r=0;
	h=strlen(hads)/sizeof(hads[0]);
	for(j=r;j<h;j++){
		for(k=0;k<n;k++){
		for(s=0;s<50;s++){
			y=strchr(matn[k],hads[j]);
		  if(matn[k][s]==hads[j]||y==0){
		  	hads[j]=hads[j+1];
		  	if(j==h-1&&baresi(hads[50], n, matn[n][50])==javab){
		  		javab++;
			  }
			  r++;
			  break;
		   }
		}	
		}
	}
	return javab;
}

int main() {
	char hads[50];
	scanf("%s",hads);
	int n,i;
	scanf("%d",&n);
	char matn[n][50];
	for(i=0;i<n;i++){
		scanf("%s",matn[i]);	
	}
	printf("%d",baresi(hads[50], n, matn[n][50]));
	return 0;
}