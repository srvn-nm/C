#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[100];
	int i=0,j=0,t;
	scanf("%s",s);
	t=strlen(s)/sizeof (s[0]);
	for(i=0;i<t;i++){
		printf("%d: ",s[i]-48);
		for(j=0;j<s[i]-48;j++){
			printf("%d",s[i]-48);
			if(j==s[i]-48-1){
			printf("\n");
		}
		}
			if(s[i]-48==0){
			printf("\n");
		}
	}
	return 0;
}