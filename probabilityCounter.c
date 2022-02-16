#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int x;
	scanf("%d",&x);
	srand (time(0));
	if(x<0|| x>100){
	   return 0;
	}
	else {
		while(1){
			int Pv= rand()%40,Pf= rand()%40;
		if((Pv+Pf<=39 ) && (Pv/(Pv+Pf)==(x/100))){
			printf("Bavard(%d) - Boxford(%d)",Pv,Pf);
			break;
		} 
		}
	}
	return 0;
}