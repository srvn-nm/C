#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count=0;

struct node {
    int data;
    struct node *next;
    struct node *prev;
}info[10000];

struct node *head = NULL;
struct node *current = NULL;
struct node *last = NULL;

int main() {
    int dataa[10000];
    for (int i =0; ;i++) {
        scanf("%d",&dataa[i]);
        if (dataa[i]!=0){
            info[i].data=dataa[i];
            count++;
        }
        else if (dataa[i]==0){
            break;
        }
    }
    int arr[count];
    int t;
    t=count-1;
    for (int j = 0; j < count; j++) {
          arr[j] = info[t].data;
          printf("%d\t", arr[j]);
            t--;
            if(t<0){
                return 0;
            }
    }
    return 0;
}