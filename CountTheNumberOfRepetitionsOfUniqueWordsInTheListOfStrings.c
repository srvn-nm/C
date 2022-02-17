#include <stdio.h>
#include <stdlib.h>

struct count{
    char word[20];
    int cnt;
};
int main()
{

    int rows, len ;
    scanf( "%d %d", &rows, &len);
    char trash[2];
    scanf("%c",trash);
    char strings [rows][len] ;


    for(int i = 0 ; i< rows ; i++){
        scanf("%[^\n]s" , strings[i]);
        scanf("%c",trash);
    }
    struct count result[1000];

    int res_len = frequency(rows, len, strings, result) ;
    for(int m= 0 ; m<  res_len ; m++){
        printf("%s %s", result[m].word, " ");
        printf("%d %c", result[m].cnt, '\n');
    }

    return 0;
}
int frequency(int rows , int len , char strings[rows][len] , struct count result[]) {
    char word[20];
    int last ;
    int res_len = 0;
    for(int i =0 ; i< rows ; i++){
        last =-1;
        for(int j =0 ; j< len ; j++){

            if(strings[i][j] == ' ' || strings[i][j] == '\0'){
                strncpy(word , strings[i] + last+1 ,j - last-1);
                word[j -last-1 ] = '\0';
               // printf("%s", "(");
              //  printf("%s", word);
              //  printf("%s", ")");
                last = j;
                int didFind = 0;
                for(int m= 0 ; m<  res_len ; m++){
                  //  printf("compare");
                  //  printf("%s", result[m].word);
                  //  printf("%s", word);
                    if(strcmp(result[m].word, word)==0){
                        result[m].cnt ++;
                        didFind = 1;
                    }
                }
                if(didFind == 0 && strcmp(word, "") != 0){
                    struct count newItem ;
                    newItem.cnt= 1;
                    strcpy(newItem.word, word);
                    result[res_len] = newItem;
                    res_len++;
                }
            }
            if(strings[i][j] == '\0')
                break;
        }

    }
    return res_len;
}