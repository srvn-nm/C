#include <stdio.h>
#include <stdlib.h>


int main() {
	int h1,h2,h3,m1,m2,m3,s1,s2,s3;
	scanf("%d:%d:%d%d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	h1=h1-1;
	m1=m1+59;
	s1=s1+60;
	h3=h1-h2;
	m3=m1-m2;
	s3=s1-s2;
	if(h3>=0){
			if(s3>=60){
			s3=s3-60;
			m3=m3+1;
		}
		 if(m3>=60){
			m3=m3-60;
			h3=h3+1;
		}
		printf("%.2d:%.2d:%.2d",h3,m3,s3);
	}
	else{
		if(s3>=60){
			s3=s3-60;
			m3=m3+1;
		}
		 if(m3>=60){
			m3=m3-60;
			h3=h3+1;
		}
		printf("%.2d:%.2d:%.2d",h3+24,m3,s3);
	}
	return 0;
}