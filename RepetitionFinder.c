#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[1000] = "A";
	int i=0,s;
	scanf("%s",arr);
	s=strlen(arr)/sizeof(arr[0]);
	int j=1,temp=1,maxi,k=0;
	int shomare[s];
	char maxchar;
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(arr[i]!=arr[j]){
				continue;
			}
			else{
				temp++;
			}
		}
		shomare[i]=temp;
		temp=1;
	}
	maxi=shomare[0];
	maxchar=arr[0];
	for(k=0;k<s-1;k++){
		if(shomare[k]>maxi){
			maxi=shomare[k];
			maxchar=arr[k];
		}
	}
	printf("%c %d",maxchar,maxi);
	return 0;
}