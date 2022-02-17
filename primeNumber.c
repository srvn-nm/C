#include <stdio.h>
#include <stdlib.h>

int n,i,flag=0;

void foqeaval(n){
	scanf("%d",&n);
	 for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	 for (i = 2; i <= (n%10) / 2; ++i) {
        if ((n%10) % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n%10 == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	 for (i = 2; i <= (n%100) / 2; ++i) {
        if ((n%100) % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n%100 == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	 for (i = 2; i <= (n%1000) / 2; ++i) {
        if ((n%1000) % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n%1000 == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	 for (i = 2; i <= (n%10000) / 2; ++i) {
        if ((n%10000) % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n%10000 == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	 for (i = 2; i <= (n%100000) / 2; ++i) {
        if ((n%100000) % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n%100000 == 1) {
        printf("NO");
        return 0;
    }
    else {
        if (flag == 0){
        	printf("YES");
		}
        else
            printf("NO");
            return 0;
    }
		}
        else
            printf("NO");
            return 0;
    }
		}
        else
            printf("NO");
            return 0;
    }
		}
        else
            printf("NO");
            return 0;
    }
		}
        else
            printf("NO");
            return 0;
    }
		}
        else
            printf("NO");
            return 0;
    }
}

int main() {
	foqeaval();
	return 0;
}