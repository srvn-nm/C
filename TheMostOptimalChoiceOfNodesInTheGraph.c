#include<stdio.h>
#include <stdlib.h>

long long calc(int * a,int index,int n){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(i > index){
            sum += (i-index) * a[i];
        }
        else if(i < index){
            sum += (index-i) * a[i];
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int * a = malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    long long min = calc(a,0,n);
    int index = 0;
    for(int i=0; i<n; i++){
        long long temp = calc(a,i,n);
        if(temp < min){
            min = temp;
            index = i;
        }
    }
    printf("%d\n",index+1);
}