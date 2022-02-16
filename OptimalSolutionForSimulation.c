#include <stdio.h>
#include <stdlib.h>

int main() {
	int tedad,i=0,zaman=0,j=0,k=0,m=0;
	scanf("%d",&tedad);
	char avalie[tedad],nahaii[tedad];
	scanf("%s",avalie);
	scanf("%s",nahaii);
	for(i=0;i<tedad;i++){
		for(j=i+1;j<=tedad;j++){
			if((avalie[i]!=nahaii[i])&&(avalie[j]!=nahaii[j])&&(avalie[i]==nahaii[j])&&(avalie[j]==nahaii[i])){
				zaman=zaman+(j-i);
				nahaii[j]=avalie[j];
				nahaii[i]=avalie[i];
				break;
			}
			else if((avalie[i]!=nahaii[i])&&(avalie[j]!=nahaii[i])&&(avalie[i]!=nahaii[j])){
			if(j==tedad){
					zaman+=1;
					nahaii[j]=avalie[j];
				    nahaii[i]=avalie[i];
				}
				else{
				continue;
				}
				}
				else if((i==tedad-1)&&avalie[i]!=nahaii[i]){
					zaman+=1;
				}
			}
		}
    printf("%d",zaman);
	return 0;
}