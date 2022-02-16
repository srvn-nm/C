#include <stdio.h>
#include <math.h>
int check_right_left_digits(int num ){
	if(num/10==0)
		return 0;
	else{
		int n=num;
		int count=0;
	   while (n != 0) {
        n /= 10;    
        ++count;
    }
    int first_digit=num/pow(10,count-1);
    int last_digit=num%10;
    if(first_digit==last_digit){
    	int r=pow(10,count-1);
    	num=num%r;
    	num=(num-last_digit)/10;
    	return check_right_left_digits( num );
	}
	else
		return -1;
    

}
}
int main(){
	int x;
	scanf("%d",&x);
	int i=0;
	for(i=1;i<x;i++){
		if(check_right_left_digits(i )==0){
			printf("%d\n",i);
		}
	}
	
}