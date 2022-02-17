#include <stdio.h>
#include <stdlib.h>

struct aval{
    int adad;
}a[10000];

struct dovom{
    int adad;
}b[10000];

int main() {
    int size_a=0 , size_b=0 , size_c;
    for (int i = 0; i < 10000; i++) {
        scanf("%d",&a[i].adad);
        size_a++;
        if (a[i].adad==-1){
            size_a-=1;
            break;
        }
    }
    for (int j = 0; j < 10000; j++) {
        scanf("%d",&b[j].adad);
        size_b++;
        if (b[j].adad==-1){
            size_b-=1;
            break;
        }
    }
    if(size_b>size_a){
        size_c=size_b+1;
    }
    else if(size_a>size_b){
        size_c=size_a+1;
    }
    int k=size_c;
    struct sevom{
        int adad;
    }c[size_c];
    if (size_a>size_b){
        int j=size_b;
        for (int i = size_a; i >-1 ; i--) {
            if (j=size_b){
                c[k].adad=((a[i].adad+b[j].adad)%10);
            } else{
                c[k].adad=((a[i].adad+b[j].adad)%10+((a[i+1].adad+b[j+1].adad)-((a[i+1].adad+b[j+1].adad)%10)))%10;
            }
            j--;
            k--;
        }
    } else{
        int j=size_a;
        for (int i = size_b; i >-1 ; i--) {
            if (j=size_a){
                c[k].adad=((a[j].adad+b[i].adad)%10);
            } else{
                c[k].adad=((a[j].adad+b[i].adad)%10+((a[j+1].adad+b[i+1].adad)-((a[j+1].adad+b[i+1].adad)%10)))%10;
            }
            j--;
            k--;
        }
    }
    if (c[0].adad!=0){
        for (int l = 0; l < size_c; l++) {
                printf("%d", c[l].adad);
        }
    }
    else if (c[0].adad==0){
        for (int l = 1; l < size_c; l++) {
            printf("%d", c[l].adad);
        }
    }
    return 0;
}