#include <stdio.h>
#include <stdlib.h>



int * intersection(int *a, int size_a, int *b, int size_b, int *size_result){
    int size=0;
    int temp[(int) size_result];
        for (int i = 0; i < size_a; i++) {
            for (int j = 0; j < size_b; j++) {
                if (a[i] == b[j]) {
                    for (int k = 0; k <size_result ; k++) {
                        if (temp[k]!=a[i]){
                            if (k!=size_result-1){
                                continue;
                            }
                            if (k==size_result-1){
                                size_result++;
                                size=size_result;
                                temp[size-1]=a[i];
                            }
                        }
                        if (temp[k]==a[i]){
                            break;
                        }
                    }
                    break;
                }
            }
        }
    return temp;
}


int main() {
    int m,n;
    int size_inter=1;
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    int temp[m+n-size_inter];
    for (int i = 0; i <m ; i++) {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j <n ; j++) {
        scanf("%d",&b[j]);
    }
    int inters[n+m],unions[n+m];
    inters[size_inter]=intersection(*a,m,*b,n,size_inter);
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < n; i++) {
            if (a[k]==b[i]){
                k++;
                i++;
                break;
            }
            for (int j = 0; j <m ; j++) {
                temp[j]=a[k];
            }
            for (int l = m; l < m+n; l++) {
                temp[l]=b[i];
            }
        }
    }
    for (int i1 = 0; i1 < m+n-size_inter; ++i1) {
         unions[i1]=temp[i1];
         printf("%d",unions[i1]);
    }
    return 0;
}
