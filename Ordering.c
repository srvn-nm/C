#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    char film[10][1000];
    for(i=0;i<n;i++)
    {
        gets(film[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<1000;j++)
        {
            if(film[i][j]<='z'&&film[i][j]>='a')
                film[i][j]=film[i][j]+('A'-'a');
        }
        
        
    for(i=0;i<n;i++)
    {
        for(j=1;j<1000;j++)
        {
            if((film[i][j]<='Z' && film[i][j]>='A')&&(film[i][j-1]!=' ' && j!=1))
            film[i][j]=film[i][j]-('A'-'a');
        }
    }
}


    for(i=0;i<n;i++)
            puts(film[i]);

    return 0;
}