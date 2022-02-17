#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>

FILE *players;
FILE *ships;
FILE *game;

typedef struct names{
char name[100];
long long int score;
} info[1];

typedef struct ships{
    int ship5x[5];
    int ship5y[5];
    int ship31x[3];
    int ship31y[3];
    int ship32x[3];
    int ship32y[3];
    int ship21x[2];
    int ship21y[2];
    int ship22x[2];
    int ship22y[2];
    int ship23x[2];
    int ship23y[2];
    int ship11[2];
    int ship12[2];
    int ship13[2];
    int ship14[2];
}player;
player p1,p2;

char board1[11][11],board2[11][11];
int play1[10][10],play2[10][10];

char turn_map2(char turn, int x, int y){
    if (turn=='a'){

    }
}

char turn_map_bot(){

}

char first_map(){
    printf("\n ");
    for (int i = 0; i <10 ; i++) {
        printf("%d ",i+1);
    }
    for (int k = 0; k <10 ; k++) {
        printf("\n%d",k+1);
        for (int j = 0; j < 10; j++) {
            printf("- ");
        }
    }
}

int search_name(FILE *players, const char *name){
    players=fopen("c:\\players.txt", "a+");
    if(players == NULL){
        printf("Cannot open file\n");
        return -1;
    }
    char str[100000];
    char *pos;
    while ((fgets(str, 1000000, players)) != NULL)
    {
        pos = strstr(str, name);
        if (pos != NULL)
        {
            break;
        } else{
            fwrite(&pos,sizeof(name),1,players);
        }
    }
}

int valid_ship51(int x, int y){
    if (p1.ship5x[0]==p1.ship5x[4]){
        if ((x==(p1.ship5x[0])&&y==(p1.ship5y[0]-1))||(x==(p1.ship5x[0]-1)&&y==(p1.ship5y[0]))||(x==(p1.ship5x[0]+1)&&y==(p1.ship5y[0]))||(x==(p1.ship5x[0])&&y==(p1.ship5y[0]))||(x==(p1.ship5x[1]-1)&&y==(p1.ship5y[1]))||(x==p1.ship5x[1]&&y==p1.ship5y[1])||(x==(p1.ship5x[1]+1)&&y==p1.ship5y[1])||(x==(p1.ship5x[2]-1)&&y==(p1.ship5y[2]))||(x==(p1.ship5x[2]+1)&&y==(p1.ship5y[2]))||(x==(p1.ship5x[2])&&y==(p1.ship5y[2]))||(x==(p1.ship5x[3]-1)&&y==(p1.ship5y[3]))||(x==(p1.ship5x[3])&&y==(p1.ship5y[3]))||(x==(p1.ship5x[3]+1)&&y==(p1.ship5y[3]))||(x==(p1.ship5x[4]-1)&&y==(p1.ship5y[4]))||(x==(p1.ship5x[4])&&y==(p1.ship5y[4]))||(x==(p1.ship5x[4]+1)&&y==(p1.ship5y[4]))||(x==(p1.ship5x[4])&&y==(p1.ship5y[4]+1))){
            return -1;
        } else{
            return 1;
        }
    }
    else if (p1.ship5y[0]==p1.ship5y[4]){
        if ((y==(p1.ship5y[0])&&x==(p1.ship5x[0]-1))||(y==(p1.ship5y[0]-1)&&x==(p1.ship5x[0]))||(y==(p1.ship5y[0]+1)&&x==(p1.ship5x[0]))||(y==(p1.ship5y[0])&&x==(p1.ship5x[0]))||(y==(p1.ship5y[1]-1)&&x==(p1.ship5x[1]))||(y==p1.ship5y[1]&&x==p1.ship5x[1])||(y==(p1.ship5y[1]+1)&&x==p1.ship5x[1])||(y==(p1.ship5y[2]-1)&&x==(p1.ship5x[2]))||(y==(p1.ship5y[2]+1)&&x==(p1.ship5x[2]))||(y==(p1.ship5y[2])&&x==(p1.ship5x[2]))||(y==(p1.ship5y[3]-1)&&x==(p1.ship5x[3]))||(y==(p1.ship5y[3])&&x==(p1.ship5x[3]))||(y==(p1.ship5y[3]+1)&&x==(p1.ship5x[3]))||(y==(p1.ship5y[4]-1)&&x==(p1.ship5x[4]))||(y==(p1.ship5y[4])&&x==(p1.ship5x[4]))||(y==(p1.ship5y[4]+1)&&x==(p1.ship5x[4]))||(y==(p1.ship5y[4])&&x==(p1.ship5x[4]+1))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship52(int x,int y){
    if (p2.ship5x[0]==p2.ship5x[4]){
        if ((x==(p2.ship5x[0])&&y==(p2.ship5y[0]-1))||(x==(p2.ship5x[0]-1)&&y==(p2.ship5y[0]))||(x==(p2.ship5x[0]+1)&&y==(p2.ship5y[0]))||(x==(p2.ship5x[0])&&y==(p2.ship5y[0]))||(x==(p2.ship5x[1]-1)&&y==(p2.ship5y[1]))||(x==p2.ship5x[1]&&y==p2.ship5y[1])||(x==(p2.ship5x[1]+1)&&y==p2.ship5y[1])||(x==(p2.ship5x[2]-1)&&y==(p2.ship5y[2]))||(x==(p2.ship5x[2]+1)&&y==(p2.ship5y[2]))||(x==(p2.ship5x[2])&&y==(p2.ship5y[2]))||(x==(p2.ship5x[3]-1)&&y==(p2.ship5y[3]))||(x==(p2.ship5x[3])&&y==(p2.ship5y[3]))||(x==(p2.ship5x[3]+1)&&y==(p2.ship5y[3]))||(x==(p2.ship5x[4]-1)&&y==(p2.ship5y[4]))||(x==(p2.ship5x[4])&&y==(p2.ship5y[4]))||(x==(p2.ship5x[4]+1)&&y==(p2.ship5y[4]))||(x==(p2.ship5x[4])&&y==(p2.ship5y[4]+1))){
            return -1;
        }
        else {
            return 1;
        }
    }
    else if (p2.ship5y[0]==p2.ship5y[4]){
        if ((y==(p2.ship5y[0])&&x==(p2.ship5x[0]-1))||(y==(p2.ship5y[0]-1)&&x==(p2.ship5x[0]))||(y==(p2.ship5y[0]+1)&&x==(p2.ship5x[0]))||(y==(p2.ship5y[0])&&x==(p2.ship5x[0]))||(y==(p2.ship5y[1]-1)&&x==(p2.ship5x[1]))||(y==p2.ship5y[1]&&x==p2.ship5x[1])||(y==(p2.ship5y[1]+1)&&x==p2.ship5x[1])||(y==(p2.ship5y[2]-1)&&x==(p2.ship5x[2]))||(y==(p2.ship5y[2]+1)&&x==(p2.ship5x[2]))||(y==(p2.ship5y[2])&&x==(p2.ship5x[2]))||(y==(p2.ship5y[3]-1)&&x==(p2.ship5x[3]))||(y==(p2.ship5y[3])&&x==(p2.ship5x[3]))||(y==(p2.ship5y[3]+1)&&x==(p2.ship5x[3]))||(y==(p2.ship5y[4]-1)&&x==(p2.ship5x[4]))||(y==(p2.ship5y[4])&&x==(p2.ship5x[4]))||(y==(p2.ship5y[4]+1)&&x==(p2.ship5x[4]))||(y==(p2.ship5y[4])&&x==(p2.ship5x[4]+1))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship311(int x,int y){
    if (p1.ship31x[0]==p1.ship31x[2]){
        if((x==(p1.ship31x[0])&&y==(p1.ship31y[0]-1))||(x==(p1.ship31x[0]-1)&&y==(p1.ship31y[0]))||(x==(p1.ship31x[0]+1)&&y==(p1.ship31y[0]))||(x==(p1.ship31x[1]-1)&&y==(p1.ship31y[1]))||(x==(p1.ship31x[1]+1)&&y==(p1.ship31y[1]))||(x==(p1.ship31x[2])&&y==(p1.ship31y[2]-1))||(x==(p1.ship31x[2]-1)&&y==(p1.ship31y[2]))||(x==(p1.ship31x[2]+1)&&y==(p1.ship31y[2]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p1.ship31y[0])&&x==(p1.ship31x[0]-1))||(y==(p1.ship31y[0]-1)&&x==(p1.ship31x[0]))||(y==(p1.ship31y[0]+1)&&x==(p1.ship31x[0]))||(y==(p1.ship31y[1]-1)&&x==(p1.ship31x[1]))||(y==(p1.ship31y[1]+1)&&x==(p1.ship31x[1]))||(y==(p1.ship31y[2])&&x==(p1.ship31x[2]-1))||(y==(p1.ship31y[2]-1)&&x==(p1.ship31x[2]))||(y==(p1.ship31y[2]+1)&&x==(p1.ship31x[2]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship312(int x,int y){
    if (p2.ship31x[0]==p2.ship31x[2]){
        if((x==(p2.ship31x[0])&&y==(p2.ship31y[0]-1))||(x==(p2.ship31x[0]-1)&&y==(p2.ship31y[0]))||(x==(p2.ship31x[0]+1)&&y==(p2.ship31y[0]))||(x==(p2.ship31x[1]-1)&&y==(p2.ship31y[1]))||(x==(p2.ship31x[1]+1)&&y==(p2.ship31y[1]))||(x==(p2.ship31x[2])&&y==(p2.ship31y[2]-1))||(x==(p2.ship31x[2]-1)&&y==(p2.ship31y[2]))||(x==(p2.ship31x[2]+1)&&y==(p2.ship31y[2]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p2.ship31y[0])&&x==(p2.ship31x[0]-1))||(y==(p2.ship31y[0]-1)&&x==(p2.ship31x[0]))||(y==(p2.ship31y[0]+1)&&x==(p2.ship31x[0]))||(y==(p2.ship31y[1]-1)&&x==(p2.ship31x[1]))||(y==(p2.ship31y[1]+1)&&x==(p2.ship31x[1]))||(y==(p2.ship31y[2])&&x==(p2.ship31x[2]-1))||(y==(p2.ship31y[2]-1)&&x==(p2.ship31x[2]))||(y==(p2.ship31y[2]+1)&&x==(p2.ship31x[2]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship321(int x,int y){
    if (p1.ship32x[0]==p1.ship32x[2]){
        if((x==(p1.ship32x[0])&&y==(p1.ship32y[0]-1))||(x==(p1.ship32x[0]-1)&&y==(p1.ship32y[0]))||(x==(p1.ship32x[0]+1)&&y==(p1.ship32y[0]))||(x==(p1.ship32x[1]-1)&&y==(p1.ship32y[1]))||(x==(p1.ship32x[1]+1)&&y==(p1.ship32y[1]))||(x==(p1.ship32x[2])&&y==(p1.ship32y[2]-1))||(x==(p1.ship32x[2]-1)&&y==(p1.ship32y[2]))||(x==(p1.ship32x[2]+1)&&y==(p1.ship32y[2]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p1.ship32y[0])&&x==(p1.ship32x[0]-1))||(y==(p1.ship32y[0]-1)&&x==(p1.ship32x[0]))||(y==(p1.ship32y[0]+1)&&x==(p1.ship32x[0]))||(y==(p1.ship32y[1]-1)&&x==(p1.ship32x[1]))||(y==(p1.ship32y[1]+1)&&x==(p1.ship32x[1]))||(y==(p1.ship32y[2])&&x==(p1.ship32x[2]-1))||(y==(p1.ship32y[2]-1)&&x==(p1.ship32x[2]))||(y==(p1.ship32y[2]+1)&&x==(p1.ship32x[2]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship322(int x,int y){
    if (p2.ship32x[0]==p2.ship32x[2]){
        if((x==(p2.ship32x[0])&&y==(p2.ship32y[0]-1))||(x==(p2.ship32x[0]-1)&&y==(p2.ship32y[0]))||(x==(p2.ship32x[0]+1)&&y==(p2.ship32y[0]))||(x==(p2.ship32x[1]-1)&&y==(p2.ship32y[1]))||(x==(p2.ship32x[1]+1)&&y==(p2.ship32y[1]))||(x==(p2.ship32x[2])&&y==(p2.ship32y[2]-1))||(x==(p2.ship32x[2]-1)&&y==(p2.ship32y[2]))||(x==(p2.ship32x[2]+1)&&y==(p2.ship32y[2]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p2.ship32y[0])&&x==(p2.ship32x[0]-1))||(y==(p2.ship32y[0]-1)&&x==(p2.ship32x[0]))||(y==(p2.ship32y[0]+1)&&x==(p2.ship32x[0]))||(y==(p2.ship32y[1]-1)&&x==(p2.ship32x[1]))||(y==(p2.ship32y[1]+1)&&x==(p2.ship32x[1]))||(y==(p2.ship32y[2])&&x==(p2.ship32x[2]-1))||(y==(p2.ship32y[2]-1)&&x==(p2.ship32x[2]))||(y==(p2.ship32y[2]+1)&&x==(p2.ship32x[2]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship211(int x, int y){
    if (p1.ship21x[0]==p1.ship21x[2]){
        if((x==(p1.ship21x[0])&&y==(p1.ship21y[0]-1))||(x==(p1.ship21x[0]-1)&&y==(p1.ship21y[0]))||(x==(p1.ship21x[0]+1)&&y==(p1.ship21y[0]))||(x==(p1.ship21x[1]-1)&&y==(p1.ship21y[1]))||(x==(p1.ship21x[1]+1)&&y==(p1.ship21y[1]))||(x==(p1.ship21x[1]+1)&&y==(p1.ship21y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p1.ship21y[0])&&x==(p1.ship21x[0]-1))||(y==(p1.ship21y[0]-1)&&x==(p1.ship21x[0]))||(y==(p1.ship21y[0]+1)&&x==(p1.ship21x[0]))||(y==(p1.ship21y[1]-1)&&x==(p1.ship21x[1]))||(y==(p1.ship21y[1]+1)&&x==(p1.ship21x[1]))||(y==(p1.ship21y[1]+1)&&x==(p1.ship21x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship212(int x, int y){
    if (p2.ship21x[0]==p2.ship21x[2]){
        if((x==(p2.ship21x[0])&&y==(p2.ship21y[0]-1))||(x==(p2.ship21x[0]-1)&&y==(p2.ship21y[0]))||(x==(p2.ship21x[0]+1)&&y==(p2.ship21y[0]))||(x==(p2.ship21x[1]-1)&&y==(p2.ship21y[1]))||(x==(p2.ship21x[1]+1)&&y==(p2.ship21y[1]))||(x==(p2.ship21x[1]+1)&&y==(p2.ship21y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p2.ship21y[0])&&x==(p2.ship21x[0]-1))||(y==(p2.ship21y[0]-1)&&x==(p2.ship21x[0]))||(y==(p2.ship21y[0]+1)&&x==(p2.ship21x[0]))||(y==(p2.ship21y[1]-1)&&x==(p2.ship21x[1]))||(y==(p2.ship21y[1]+1)&&x==(p2.ship21x[1]))||(y==(p2.ship21y[1]+1)&&x==(p2.ship21x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship221(int x, int y){
    if (p1.ship22x[0]==p1.ship22x[2]){
        if((x==(p1.ship22x[0])&&y==(p1.ship22y[0]-1))||(x==(p1.ship22x[0]-1)&&y==(p1.ship22y[0]))||(x==(p1.ship22x[0]+1)&&y==(p1.ship22y[0]))||(x==(p1.ship22x[1]-1)&&y==(p1.ship22y[1]))||(x==(p1.ship22x[1]+1)&&y==(p1.ship22y[1]))||(x==(p1.ship22x[1]+1)&&y==(p1.ship22y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p1.ship22y[0])&&x==(p1.ship22x[0]-1))||(y==(p1.ship22y[0]-1)&&x==(p1.ship22x[0]))||(y==(p1.ship22y[0]+1)&&x==(p1.ship22x[0]))||(y==(p1.ship22y[1]-1)&&x==(p1.ship22x[1]))||(y==(p1.ship22y[1]+1)&&x==(p1.ship22x[1]))||(y==(p1.ship22y[1]+1)&&x==(p1.ship22x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship222(int x, int y){
    if (p2.ship22x[0]==p2.ship22x[2]){
        if((x==(p2.ship22x[0])&&y==(p2.ship22y[0]-1))||(x==(p2.ship22x[0]-1)&&y==(p2.ship22y[0]))||(x==(p2.ship22x[0]+1)&&y==(p2.ship22y[0]))||(x==(p2.ship22x[1]-1)&&y==(p2.ship22y[1]))||(x==(p2.ship22x[1]+1)&&y==(p2.ship22y[1]))||(x==(p2.ship22x[1]+1)&&y==(p2.ship22y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p2.ship22y[0])&&x==(p2.ship22x[0]-1))||(y==(p2.ship22y[0]-1)&&x==(p2.ship22x[0]))||(y==(p2.ship22y[0]+1)&&x==(p2.ship22x[0]))||(y==(p2.ship22y[1]-1)&&x==(p2.ship22x[1]))||(y==(p2.ship22y[1]+1)&&x==(p2.ship22x[1]))||(y==(p2.ship22y[1]+1)&&x==(p2.ship22x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship231(int x, int y){
    if (p1.ship23x[0]==p1.ship23x[2]){
        if((x==(p1.ship23x[0])&&y==(p1.ship23y[0]-1))||(x==(p1.ship23x[0]-1)&&y==(p1.ship23y[0]))||(x==(p1.ship23x[0]+1)&&y==(p1.ship23y[0]))||(x==(p1.ship23x[1]-1)&&y==(p1.ship23y[1]))||(x==(p1.ship23x[1]+1)&&y==(p1.ship23y[1]))||(x==(p1.ship23x[1]+1)&&y==(p1.ship23y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p1.ship23y[0])&&x==(p1.ship23x[0]-1))||(y==(p1.ship23y[0]-1)&&x==(p1.ship23x[0]))||(y==(p1.ship23y[0]+1)&&x==(p1.ship23x[0]))||(y==(p1.ship23y[1]-1)&&x==(p1.ship23x[1]))||(y==(p1.ship23y[1]+1)&&x==(p1.ship23x[1]))||(y==(p1.ship23y[1]+1)&&x==(p1.ship22x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship232(int x, int y){
    if (p2.ship23x[0]==p2.ship23x[2]){
        if((x==(p2.ship23x[0])&&y==(p2.ship23y[0]-1))||(x==(p2.ship23x[0]-1)&&y==(p2.ship23y[0]))||(x==(p2.ship23x[0]+1)&&y==(p2.ship23y[0]))||(x==(p2.ship23x[1]-1)&&y==(p2.ship23y[1]))||(x==(p2.ship23x[1]+1)&&y==(p2.ship23y[1]))||(x==(p2.ship23x[1]+1)&&y==(p2.ship23y[1]))){
            return -1;
        } else{
            return 1;
        }
    } else{
        if((y==(p2.ship23y[0])&&x==(p2.ship23x[0]-1))||(y==(p2.ship23y[0]-1)&&x==(p2.ship23x[0]))||(y==(p2.ship23y[0]+1)&&x==(p2.ship23x[0]))||(y==(p2.ship23y[1]-1)&&x==(p2.ship23x[1]))||(y==(p2.ship23y[1]+1)&&x==(p2.ship23x[1]))||(y==(p2.ship23y[1]+1)&&x==(p2.ship22x[1]))){
            return -1;
        } else{
            return 1;
        }
    }
}

int valid_ship111(int x , int y){
    if((x==(p1.ship11[0])&&y==(p1.ship11[1]-1))||(x==(p1.ship11[0]-1)&&y==(p1.ship11[1]))||(x==(p1.ship11[0]+1)&&y==(p1.ship11[1]))||(x==(p1.ship11[1])&&y==(p1.ship11[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

int valid_ship112(int x , int y){
    if((x==(p2.ship11[0])&&y==(p2.ship11[1]-1))||(x==(p2.ship11[0]-1)&&y==(p2.ship11[1]))||(x==(p2.ship11[0]+1)&&y==(p2.ship11[1]))||(x==(p2.ship11[1])&&y==(p2.ship11[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

int valid_ship121(int x , int y){
    if((x==(p1.ship12[0])&&y==(p1.ship12[1]-1))||(x==(p1.ship12[0]-1)&&y==(p1.ship12[1]))||(x==(p1.ship12[0]+1)&&y==(p1.ship12[1]))||(x==(p1.ship12[1])&&y==(p1.ship12[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

int valid_ship122(int x , int y){
    if((x==(p2.ship12[0])&&y==(p2.ship12[1]-1))||(x==(p2.ship12[0]-1)&&y==(p2.ship12[1]))||(x==(p2.ship12[0]+1)&&y==(p2.ship12[1]))||(x==(p2.ship12[1])&&y==(p2.ship12[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

int valid_ship131(int x , int y){
    if((x==(p1.ship13[0])&&y==(p1.ship13[1]-1))||(x==(p1.ship13[0]-1)&&y==(p1.ship13[1]))||(x==(p1.ship13[0]+1)&&y==(p1.ship13[1]))||(x==(p1.ship13[1])&&y==(p1.ship13[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

int valid_ship132(int x , int y){
    if((x==(p2.ship13[0])&&y==(p2.ship13[1]-1))||(x==(p2.ship13[0]-1)&&y==(p2.ship13[1]))||(x==(p2.ship13[0]+1)&&y==(p2.ship13[1]))||(x==(p2.ship13[1])&&y==(p2.ship13[1]+1))){
        return -1;
    } else{
        return 1;
    }
}

void get_ships1(){
    printf("please enter your name");
    char name[1000000];
    scanf("%s",name);
    search_name(players,name);
    first_map();
    printf("Please enter the coordinates at the beginning of your five-box ship.");
    scanf("%d %d",&p1.ship5x[0],&p1.ship5y[0]);
    printf("Please enter the coordinates at the end of your five-box ship.");
    scanf("%d %d",&p1.ship5x[4],&p1.ship5y[4]);
    while (p1.ship5x[4]-p1.ship5x[0]!=4||p1.ship5y[4]-p1.ship5y[0]!=4){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship5x[0],&p1.ship5y[0]);
        scanf("%d %d",&p1.ship5x[4],&p1.ship5y[4]);
        if (p1.ship5x[4]-p1.ship5x[0]==4||p1.ship5y[4]-p1.ship5y[0]==4){
            break;
        }
    }
    if (p1.ship5x[0]==p1.ship5x[4]){
        int j=0;
        for (int i = p1.ship5y[0]; i <p1.ship5y[4] ; i++) {
            p1.ship5y[j]=i;
            p1.ship5x[j]=p1.ship5x[0];
            j++;
        }
    }
    else if (p1.ship5y[0]==p1.ship5y[4]){
        int j=0;
        for (int i = p1.ship5x[0]; i <p1.ship5x[4] ; i++) {
            p1.ship5x[j]=i;
            p1.ship5y[j]=p1.ship5y[0];
            j++;
        }
    }
    printf("Please enter the coordinates at the beginning of your first three-box ship.");
    scanf("%d %d",&p1.ship31x[0],&p1.ship31y[0]);
    printf("Please enter the coordinates at the end of your first three-box ship.");
    scanf("%d %d",&p1.ship31x[2],&p1.ship31y[2]);
    while (p1.ship31x[2]-p1.ship31x[0]!=2||p1.ship31y[2]-p1.ship31y[0]!=2){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship31x[0],&p1.ship31y[0]);
        scanf("%d %d",&p1.ship31x[2],&p1.ship31y[2]);
        if (p1.ship31x[2]-p1.ship31x[0]==2||p1.ship31y[2]-p1.ship31y[0]==2){
            break;
        }
    }
    if (p1.ship31x[0]==p1.ship31x[2]){
        int j=0;
        for (int i = p1.ship31y[0]; i <p1.ship31y[2] ; i++) {
            p1.ship31y[j]=i;
            p1.ship31x[j]=p1.ship31x[0];
            j++;
        }
    }
    else if (p1.ship31y[0]==p1.ship31y[2]){
        int j=0;
        for (int i = p1.ship31x[0]; i <p1.ship31x[2] ; i++) {
            p1.ship31x[j]=i;
            p1.ship31y[j]=p1.ship31y[0];
            j++;
        }
    }
    while (valid_ship51(p1.ship31x[0], p1.ship31y[0])==-1||valid_ship51(p1.ship31x[1], p1.ship31y[1])==-1||valid_ship51(p1.ship31x[2], p1.ship31y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship31x[0],&p1.ship31y[0]);
        scanf("%d %d",&p1.ship31x[2],&p1.ship31y[2]);
        if (valid_ship51(p1.ship31x[0], p1.ship31y[0])!=-1||valid_ship51(p1.ship31x[1], p1.ship31y[1])!=-1||valid_ship51(p1.ship31x[2], p1.ship31y[2])!=-1){
            if (p1.ship31x[0]==p1.ship31x[2]){
                int j=0;
                for (int i = p1.ship31y[0]; i <p1.ship31y[2] ; i++) {
                    p1.ship31y[j]=i;
                    p1.ship31x[j]=p1.ship31x[0];
                    j++;
                }
            }
            else if (p1.ship31y[0]==p1.ship31y[2]){
                int j=0;
                for (int i = p1.ship31x[0]; i <p1.ship31x[2] ; i++) {
                    p1.ship31x[j]=i;
                    p1.ship31y[j]=p1.ship31y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your second three-box ship.");
    scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
    printf("Please enter the coordinates at the end of your second three-box ship.");
    scanf("%d %d",&p1.ship32x[2],&p1.ship32y[2]);
    while (p1.ship32x[2]-p1.ship32x[0]!=2||p1.ship32y[2]-p1.ship32y[0]!=2){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
        scanf("%d %d",&p1.ship32x[2],&p1.ship32x[2]);
        if (p1.ship32x[2]-p1.ship32x[0]==2||p1.ship32y[2]-p1.ship32y[0]==2){
            break;
        }
    }
    if (p1.ship32x[0]==p1.ship32x[2]){
        int j=0;
        for (int i = p1.ship32y[0]; i <p1.ship32y[2] ; i++) {
            p1.ship32y[j]=i;
            p1.ship32x[j]=p1.ship32x[0];
            j++;
        }
    }
    else if (p1.ship32y[0]==p1.ship32y[2]){
        int j=0;
        for (int i = p1.ship32x[0]; i <p1.ship32x[2] ; i++) {
            p1.ship32x[j]=i;
            p1.ship32y[j]=p1.ship32y[0];
            j++;
        }
    }
    while (valid_ship51(p1.ship32x[0], p1.ship32y[0])==-1||valid_ship51(p1.ship32x[1], p1.ship32y[1])==-1||valid_ship51(p1.ship32x[2], p1.ship32y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
        scanf("%d %d",&p1.ship32x[2],&p1.ship32y[2]);
        if (valid_ship51(p1.ship32x[0], p1.ship32y[0])!=-1||valid_ship51(p1.ship32x[1], p1.ship32y[1])!=-1||valid_ship51(p1.ship32x[2], p1.ship32y[2])!=-1){
            if (p1.ship32x[0]==p1.ship32x[2]){
                int j=0;
                for (int i = p1.ship32y[0]; i <p1.ship32y[2] ; i++) {
                    p1.ship32y[j]=i;
                    p1.ship32x[j]=p1.ship32x[0];
                    j++;
                }
            }
            else if (p1.ship32y[0]==p1.ship32y[2]){
                int j=0;
                for (int i = p1.ship32x[0]; i <p1.ship32x[2] ; i++) {
                    p1.ship32x[j]=i;
                    p1.ship32y[j]=p1.ship32y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship311(p1.ship32x[0],p1.ship32y[0])==-1||valid_ship311(p1.ship32x[1],p1.ship32y[1])==-1||valid_ship311(p1.ship32x[2],p1.ship32y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
        scanf("%d %d",&p1.ship32x[2],&p1.ship32y[2]);
        if (valid_ship311(p1.ship32x[0],p1.ship32y[0])!=-1||valid_ship311(p1.ship32x[1],p1.ship32y[1])!=-1||valid_ship311(p1.ship32x[2],p1.ship32y[2])!=-1){
            if (p1.ship32x[0]==p1.ship32x[2]){
                int j=0;
                for (int i = p1.ship32y[0]; i <p1.ship32y[2] ; i++) {
                    p1.ship32y[j]=i;
                    p1.ship32x[j]=p1.ship32x[0];
                    j++;
                }
            }
            else if (p1.ship32y[0]==p1.ship32y[2]){
                int j=0;
                for (int i = p1.ship32x[0]; i <p1.ship32x[2] ; i++) {
                    p1.ship32x[j]=i;
                    p1.ship32y[j]=p1.ship32y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your first two-box ship.");
    scanf("%d %d",&p1.ship21x[0],&p1.ship21y[0]);
    printf("Please enter the coordinates at the end of your first two-box ship.");
    scanf("%d %d",&p1.ship21x[1],&p1.ship21y[1]);
    while (p1.ship21x[1]-p1.ship21x[0]!=1||p1.ship21y[1]-p1.ship21y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship21x[0],&p1.ship21y[0]);
        scanf("%d %d",&p1.ship21x[1],&p1.ship21y[1]);
        if (p1.ship21x[1]-p1.ship21x[0]==1||p1.ship21y[1]-p1.ship21y[0]==1){
            break;
        }
    }
    while (valid_ship51(p1.ship21x[0], p1.ship21y[0])==-1||valid_ship51(p1.ship21x[1], p1.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship21x[0],&p1.ship21y[0]);
        scanf("%d %d",&p1.ship21x[1],&p1.ship21y[1]);
        if (valid_ship51(p1.ship21x[0], p1.ship21y[0])!=-1||valid_ship51(p1.ship21x[1], p1.ship21y[1])!=-1){
            if (p1.ship21x[0]==p1.ship21x[1]){
                int j=0;
                for (int i = p1.ship21y[0]; i <p1.ship21y[1] ; i++) {
                    p1.ship21y[j]=i;
                    p1.ship21x[j]=p1.ship21x[0];
                    j++;
                }
            }
            else if (p1.ship21y[0]==p1.ship21y[1]){
                int j=0;
                for (int i = p1.ship21x[0]; i <p1.ship21x[1] ; i++) {
                    p1.ship21x[j]=i;
                    p1.ship21y[j]=p1.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship311(p1.ship21x[0],p1.ship21y[0])==-1||valid_ship311(p1.ship21x[1],p1.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship21x[0],&p1.ship21y[0]);
        scanf("%d %d",&p1.ship21x[1],&p1.ship21y[1]);
        if (valid_ship311(p1.ship21x[0],p1.ship21y[0])!=-1||valid_ship311(p1.ship21x[1],p1.ship21y[1])!=-1){
            if (p1.ship21x[0]==p1.ship21x[1]){
                int j=0;
                for (int i = p1.ship21y[0]; i <p1.ship21y[1] ; i++) {
                    p1.ship21y[j]=i;
                    p1.ship21x[j]=p1.ship21x[0];
                    j++;
                }
            }
            else if (p1.ship21y[0]==p1.ship21y[1]){
                int j=0;
                for (int i = p1.ship21x[0]; i <p1.ship21x[1] ; i++) {
                    p1.ship21x[j]=i;
                    p1.ship21y[j]=p1.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship321(p1.ship21x[0],p1.ship21y[0])==-1||valid_ship321(p1.ship21x[1],p1.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship21x[0],&p1.ship21y[0]);
        scanf("%d %d",&p1.ship21x[1],&p1.ship21y[1]);
        if (valid_ship321(p1.ship21x[0],p1.ship21y[0])!=-1||valid_ship321(p1.ship21x[1],p1.ship21y[1])!=-1){
            if (p1.ship21x[0]==p1.ship21x[1]){
                int j=0;
                for (int i = p1.ship21y[0]; i <p1.ship21y[1] ; i++) {
                    p1.ship21y[j]=i;
                    p1.ship21x[j]=p1.ship21x[0];
                    j++;
                }
            }
            else if (p1.ship21y[0]==p1.ship21y[1]){
                int j=0;
                for (int i = p1.ship21x[0]; i <p1.ship21x[1] ; i++) {
                    p1.ship21x[j]=i;
                    p1.ship21y[j]=p1.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your second two-box ship.");
    scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
    printf("Please enter the coordinates at the end of your second two-box ship.");
    scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
    while (p1.ship22x[1]-p1.ship22x[0]!=1||p1.ship22y[1]-p1.ship22y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
        scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
        if (p1.ship22x[1]-p1.ship22x[0]==1||p1.ship22y[1]-p1.ship22y[0]==1){
            break;
        }
    }
    while (valid_ship51(p1.ship22x[0], p1.ship22y[0])==-1||valid_ship51(p1.ship22x[1], p1.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
        scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
        if (valid_ship51(p1.ship22x[0], p1.ship22y[0])!=-1||valid_ship51(p1.ship22x[1], p1.ship22y[1])!=-1){
            if (p1.ship21x[0]==p1.ship21x[1]){
                int j=0;
                for (int i = p1.ship22y[0]; i <p1.ship22y[1] ; i++) {
                    p1.ship22y[j]=i;
                    p1.ship22x[j]=p1.ship22x[0];
                    j++;
                }
            }
            else if (p1.ship22y[0]==p1.ship22y[1]){
                int j=0;
                for (int i = p1.ship22x[0]; i <p1.ship22x[1] ; i++) {
                    p1.ship22x[j]=i;
                    p1.ship22y[j]=p1.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship311(p1.ship22x[0],p1.ship22y[0])==-1||valid_ship311(p1.ship22x[1],p1.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
        scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
        if (valid_ship311(p1.ship22x[0],p1.ship22y[0])!=-1||valid_ship311(p1.ship22x[1],p1.ship22y[1])!=-1){
            if (p1.ship22x[0]==p1.ship22x[1]){
                int j=0;
                for (int i = p1.ship22y[0]; i <p1.ship22y[1] ; i++) {
                    p1.ship22y[j]=i;
                    p1.ship22x[j]=p1.ship22x[0];
                    j++;
                }
            }
            else if (p1.ship22y[0]==p1.ship22y[1]){
                int j=0;
                for (int i = p1.ship22x[0]; i <p1.ship22x[1] ; i++) {
                    p1.ship22x[j]=i;
                    p1.ship22y[j]=p1.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship321(p1.ship22x[0],p1.ship22y[0])==-1||valid_ship321(p1.ship22x[1],p1.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
        scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
        if (valid_ship321(p1.ship22x[0],p1.ship22y[0])!=-1||valid_ship321(p1.ship22x[1],p1.ship22y[1])!=-1){
            if (p1.ship22x[0]==p1.ship22x[1]){
                int j=0;
                for (int i = p1.ship22y[0]; i <p1.ship22y[1] ; i++) {
                    p1.ship22y[j]=i;
                    p1.ship22x[j]=p1.ship22x[0];
                    j++;
                }
            }
            else if (p1.ship22y[0]==p1.ship22y[1]){
                int j=0;
                for (int i = p1.ship22x[0]; i <p1.ship22x[1] ; i++) {
                    p1.ship22x[j]=i;
                    p1.ship22y[j]=p1.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship211(p1.ship22x[0],p1.ship22y[0])==-1||valid_ship211(p1.ship22x[1],p1.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship22x[0],&p1.ship22y[0]);
        scanf("%d %d",&p1.ship22x[1],&p1.ship22y[1]);
        if (valid_ship211(p1.ship22x[0],p1.ship22y[0])!=-1||valid_ship211(p1.ship22x[1],p1.ship22y[1])!=-1){
            if (p1.ship22x[0]==p1.ship22x[1]){
                int j=0;
                for (int i = p1.ship22y[0]; i <p1.ship22y[1] ; i++) {
                    p1.ship22y[j]=i;
                    p1.ship22x[j]=p1.ship22x[0];
                    j++;
                }
            }
            else if (p1.ship22y[0]==p1.ship22y[1]){
                int j=0;
                for (int i = p1.ship22x[0]; i <p1.ship22x[1] ; i++) {
                    p1.ship22x[j]=i;
                    p1.ship22y[j]=p1.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your third two-box ship.");
    scanf("%d %d",&p1.ship23x[0],&p1.ship23x[0]);
    printf("Please enter the coordinates at the end of your third two-box ship.");
    scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
    while (p1.ship23x[1]-p1.ship23x[0]!=1||p1.ship23y[1]-p1.ship23y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (p1.ship23x[1]-p1.ship23x[0]==1||p1.ship23y[1]-p1.ship23y[0]==1){
            break;
        }
    }
    while (valid_ship51(p1.ship23x[0], p1.ship23y[0])==-1||valid_ship51(p1.ship23x[1], p1.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (valid_ship51(p1.ship23x[0], p1.ship23y[0])!=-1||valid_ship51(p1.ship23x[1], p1.ship23y[1])!=-1){
            if (p1.ship23x[0]==p1.ship23x[1]){
                int j=0;
                for (int i = p1.ship23y[0]; i <p1.ship23y[1] ; i++) {
                    p1.ship23y[j]=i;
                    p1.ship23x[j]=p1.ship23x[0];
                    j++;
                }
            }
            else if (p1.ship23y[0]==p1.ship23y[1]){
                int j=0;
                for (int i = p1.ship23x[0]; i <p1.ship23x[1] ; i++) {
                    p1.ship23x[j]=i;
                    p1.ship23y[j]=p1.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship311(p1.ship23x[0],p1.ship23y[0])==-1||valid_ship311(p1.ship23x[1],p1.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (valid_ship311(p1.ship23x[0],p1.ship23y[0])!=-1||valid_ship311(p1.ship23x[1],p1.ship23y[1])!=-1){
            if (p1.ship23x[0]==p1.ship23x[1]){
                int j=0;
                for (int i = p1.ship23y[0]; i <p1.ship23y[1] ; i++) {
                    p1.ship23y[j]=i;
                    p1.ship23x[j]=p1.ship23x[0];
                    j++;
                }
            }
            else if (p1.ship23y[0]==p1.ship23y[1]){
                int j=0;
                for (int i = p1.ship23x[0]; i <p1.ship23x[1] ; i++) {
                    p1.ship23x[j]=i;
                    p1.ship23y[j]=p1.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship321(p1.ship23x[0],p1.ship23y[0])==-1||valid_ship321(p1.ship23x[1],p1.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (valid_ship321(p1.ship23x[0],p1.ship23y[0])!=-1||valid_ship321(p1.ship23x[1],p1.ship23y[1])!=-1){
            if (p1.ship23x[0]==p1.ship23x[1]){
                int j=0;
                for (int i = p1.ship23y[0]; i <p1.ship23y[1] ; i++) {
                    p1.ship23y[j]=i;
                    p1.ship23x[j]=p1.ship23x[0];
                    j++;
                }
            }
            else if (p1.ship23y[0]==p1.ship23y[1]){
                int j=0;
                for (int i = p1.ship23x[0]; i <p1.ship23x[1] ; i++) {
                    p1.ship23x[j]=i;
                    p1.ship23y[j]=p1.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship211(p1.ship23x[0],p1.ship23y[0])==-1||valid_ship211(p1.ship23x[1],p1.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (valid_ship211(p1.ship23x[0],p1.ship23y[0])!=-1||valid_ship211(p1.ship23x[1],p1.ship23y[1])!=-1){
            if (p1.ship23x[0]==p1.ship23x[1]){
                int j=0;
                for (int i = p1.ship23y[0]; i <p1.ship23y[1] ; i++) {
                    p1.ship23y[j]=i;
                    p1.ship23x[j]=p1.ship23x[0];
                    j++;
                }
            }
            else if (p1.ship23y[0]==p1.ship23y[1]){
                int j=0;
                for (int i = p1.ship23x[0]; i <p1.ship23x[1] ; i++) {
                    p1.ship23x[j]=i;
                    p1.ship23y[j]=p1.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship221(p1.ship23x[0],p1.ship23y[0])==-1||valid_ship221(p1.ship23x[1],p1.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship23x[0],&p1.ship23y[0]);
        scanf("%d %d",&p1.ship23x[1],&p1.ship23y[1]);
        if (valid_ship221(p1.ship23x[0],p1.ship23y[0])!=-1||valid_ship221(p1.ship23x[1],p1.ship23y[1])!=-1){
            if (p1.ship23x[0]==p1.ship23x[1]){
                int j=0;
                for (int i = p1.ship23y[0]; i <p1.ship23y[1] ; i++) {
                    p1.ship23y[j]=i;
                    p1.ship23x[j]=p1.ship23x[0];
                    j++;
                }
            }
            else if (p1.ship23y[0]==p1.ship23y[1]){
                int j=0;
                for (int i = p1.ship23x[0]; i <p1.ship23x[1] ; i++) {
                    p1.ship23x[j]=i;
                    p1.ship23y[j]=p1.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates of your first one-box ship.");
    scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
    while (valid_ship51(p1.ship11[0], p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship51(p1.ship11[0], p1.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship311(p1.ship11[0],p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship311(p1.ship11[0],p1.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship321(p1.ship11[0],p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship321(p1.ship11[0],p1.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship211(p1.ship11[0],p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship211(p1.ship11[0],p1.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship221(p1.ship11[0],p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship221(p1.ship11[0],p1.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship231(p1.ship11[0],p1.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship11[0],&p1.ship11[1]);
        if (valid_ship231(p1.ship11[0],p1.ship11[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates  of your second one-box ship.");
    scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
    while (valid_ship51(p1.ship12[0], p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship51(p1.ship12[0], p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship311(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship311(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship321(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship321(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship211(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship211(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship221(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship221(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship231(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship231(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship111(p1.ship12[0],p1.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship12[0],&p1.ship12[1]);
        if (valid_ship111(p1.ship12[0],p1.ship12[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates of your third one-box ship.");
    scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
    while (valid_ship51(p1.ship13[0], p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship51(p1.ship13[0], p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship311(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship311(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship321(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship321(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship211(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship211(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship221(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship221(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship231(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship231(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship111(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship111(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship121(p1.ship13[0],p1.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship13[0],&p1.ship13[1]);
        if (valid_ship121(p1.ship13[0],p1.ship13[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates of your fourth one-box ship.");
    scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
    while (valid_ship51(p1.ship14[0], p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship51(p1.ship14[0], p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship311(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship311(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship321(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship321(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship211(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship211(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship221(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship221(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship231(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship231(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship111(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship111(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship121(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship121(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship131(p1.ship14[0],p1.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship14[0],&p1.ship14[1]);
        if (valid_ship131(p1.ship14[0],p1.ship14[1])!=-1){
            break;
        }
    }
}
void get_ships2(){
    printf("please enter your name");
    char name[1000000];
    scanf("%s",name);
    search_name(players,name);
    first_map();
    printf("Please enter the coordinates at the beginning of your five-box ship.");
    scanf("%d %d",&p2.ship5x[0],&p2.ship5y[0]);
    printf("Please enter the coordinates at the end of your five-box ship.");
    scanf("%d %d",&p2.ship5x[4],&p2.ship5y[4]);
    while (p2.ship5x[4]-p2.ship5x[0]!=4||p2.ship5y[4]-p2.ship5y[0]!=4){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship5x[0],&p2.ship5y[0]);
        scanf("%d %d",&p2.ship5x[4],&p2.ship5y[4]);
        if (p2.ship5x[4]-p2.ship5x[0]==4||p2.ship5y[4]-p2.ship5y[0]==4){
            break;
        }
    }
    if (p2.ship5x[0]==p2.ship5x[4]){
        int j=0;
        for (int i = p2.ship5y[0]; i <p2.ship5y[4] ; i++) {
            p2.ship5y[j]=i;
            p2.ship5x[j]=p2.ship5x[0];
            j++;
        }
    }
    else if (p2.ship5y[0]==p2.ship5y[4]){
        int j=0;
        for (int i = p2.ship5x[0]; i <p2.ship5x[4] ; i++) {
            p2.ship5x[j]=i;
            p2.ship5y[j]=p2.ship5y[0];
            j++;
        }
    }
    printf("Please enter the coordinates at the beginning of your first three-box ship.");
    scanf("%d %d",&p2.ship31x[0],&p2.ship31y[0]);
    printf("Please enter the coordinates at the end of your first three-box ship.");
    scanf("%d %d",&p2.ship31x[2],&p2.ship31y[2]);
    while (p2.ship31x[2]-p2.ship31x[0]!=2||p2.ship31y[2]-p2.ship31y[0]!=2){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship31x[0],&p2.ship31y[0]);
        scanf("%d %d",&p2.ship31x[2],&p2.ship31y[2]);
        if (p2.ship31x[2]-p2.ship31x[0]==2||p2.ship31y[2]-p2.ship31y[0]==2){
            break;
        }
    }
    if (p2.ship31x[0]==p2.ship31x[2]){
        int j=0;
        for (int i = p2.ship31y[0]; i <p2.ship31y[2] ; i++) {
            p2.ship31y[j]=i;
            p2.ship31x[j]=p2.ship31x[0];
            j++;
        }
    }
    else if (p2.ship31y[0]==p2.ship31y[2]){
        int j=0;
        for (int i = p2.ship31x[0]; i <p2.ship31x[2] ; i++) {
            p1.ship31x[j]=i;
            p1.ship31y[j]=p1.ship31y[0];
            j++;
        }
    }
    while (valid_ship51(p1.ship31x[0], p1.ship31y[0])==-1||valid_ship51(p1.ship31x[1], p1.ship31y[1])==-1||valid_ship51(p1.ship31x[2], p1.ship31y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship31x[0],&p1.ship31y[0]);
        scanf("%d %d",&p1.ship31x[2],&p1.ship31y[2]);
        if (valid_ship51(p1.ship31x[0], p1.ship31y[0])!=-1||valid_ship51(p1.ship31x[1], p1.ship31y[1])!=-1||valid_ship51(p1.ship31x[2], p1.ship31y[2])!=-1){
            if (p1.ship31x[0]==p1.ship31x[2]){
                int j=0;
                for (int i = p1.ship31y[0]; i <p1.ship31y[2] ; i++) {
                    p1.ship31y[j]=i;
                    p1.ship31x[j]=p1.ship31x[0];
                    j++;
                }
            }
            else if (p1.ship31y[0]==p1.ship31y[2]){
                int j=0;
                for (int i = p1.ship31x[0]; i <p1.ship31x[2] ; i++) {
                    p1.ship31x[j]=i;
                    p1.ship31y[j]=p1.ship31y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your second three-box ship.");
    scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
    printf("Please enter the coordinates at the end of your second three-box ship.");
    scanf("%d %d",&p1.ship32x[2],&p1.ship32y[2]);
    while (p1.ship32x[2]-p1.ship32x[0]!=2||p1.ship32y[2]-p1.ship32y[0]!=2){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
        scanf("%d %d",&p1.ship32x[2],&p1.ship32x[2]);
        if (p1.ship32x[2]-p1.ship32x[0]==2||p1.ship32y[2]-p1.ship32y[0]==2){
            break;
        }
    }
    if (p1.ship32x[0]==p1.ship32x[2]){
        int j=0;
        for (int i = p1.ship32y[0]; i <p1.ship32y[2] ; i++) {
            p1.ship32y[j]=i;
            p1.ship32x[j]=p1.ship32x[0];
            j++;
        }
    }
    else if (p1.ship32y[0]==p1.ship32y[2]){
        int j=0;
        for (int i = p1.ship32x[0]; i <p1.ship32x[2] ; i++) {
            p1.ship32x[j]=i;
            p1.ship32y[j]=p1.ship32y[0];
            j++;
        }
    }
    while (valid_ship51(p1.ship32x[0], p1.ship32y[0])==-1||valid_ship51(p1.ship32x[1], p1.ship32y[1])==-1||valid_ship51(p1.ship32x[2], p1.ship32y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p1.ship32x[0],&p1.ship32y[0]);
        scanf("%d %d",&p1.ship32x[2],&p1.ship32y[2]);
        if (valid_ship51(p1.ship32x[0], p1.ship32y[0])!=-1||valid_ship51(p1.ship32x[1], p1.ship32y[1])!=-1||valid_ship51(p1.ship32x[2], p1.ship32y[2])!=-1){
            if (p1.ship32x[0]==p1.ship32x[2]){
                int j=0;
                for (int i = p1.ship32y[0]; i <p1.ship32y[2] ; i++) {
                    p1.ship32y[j]=i;
                    p1.ship32x[j]=p1.ship32x[0];
                    j++;
                }
            }
            else if (p1.ship32y[0]==p1.ship32y[2]){
                int j=0;
                for (int i = p1.ship32x[0]; i <p1.ship32x[2] ; i++) {
                    p1.ship32x[j]=i;
                    p1.ship32y[j]=p1.ship32y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship312(p2.ship32x[0],p2.ship32y[0])==-1||valid_ship312(p2.ship32x[1],p2.ship32y[1])==-1||valid_ship312(p2.ship32x[2],p2.ship32y[2])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship32x[0],&p2.ship32y[0]);
        scanf("%d %d",&p2.ship32x[2],&p2.ship32y[2]);
        if (valid_ship312(p2.ship32x[0],p2.ship32y[0])!=-1||valid_ship312(p2.ship32x[1],p2.ship32y[1])!=-1||valid_ship312(p2.ship32x[2],p2.ship32y[2])!=-1){
            if (p2.ship32x[0]==p2.ship32x[2]){
                int j=0;
                for (int i = p2.ship32y[0]; i <p2.ship32y[2] ; i++) {
                    p2.ship32y[j]=i;
                    p2.ship32x[j]=p2.ship32x[0];
                    j++;
                }
            }
            else if (p2.ship32y[0]==p2.ship32y[2]){
                int j=0;
                for (int i = p2.ship32x[0]; i <p2.ship32x[2] ; i++) {
                    p2.ship32x[j]=i;
                    p2.ship32y[j]=p2.ship32y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your first two-box ship.");
    scanf("%d %d",&p2.ship21x[0],&p2.ship21y[0]);
    printf("Please enter the coordinates at the end of your first two-box ship.");
    scanf("%d %d",&p2.ship21x[1],&p2.ship21y[1]);
    while (p2.ship21x[1]-p2.ship21x[0]!=1||p2.ship21y[1]-p2.ship21y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship21x[0],&p2.ship21y[0]);
        scanf("%d %d",&p2.ship21x[1],&p2.ship21y[1]);
        if (p2.ship21x[1]-p2.ship21x[0]==1||p2.ship21y[1]-p2.ship21y[0]==1){
            break;
        }
    }
    while (valid_ship52(p2.ship21x[0], p2.ship21y[0])==-1||valid_ship52(p2.ship21x[1], p2.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship21x[0],&p2.ship21y[0]);
        scanf("%d %d",&p2.ship21x[1],&p2.ship21y[1]);
        if (valid_ship52(p2.ship21x[0], p2.ship21y[0])!=-1||valid_ship52(p2.ship21x[1], p2.ship21y[1])!=-1){
            if (p2.ship21x[0]==p2.ship21x[1]){
                int j=0;
                for (int i = p2.ship21y[0]; i <p2.ship21y[1] ; i++) {
                    p2.ship21y[j]=i;
                    p2.ship21x[j]=p2.ship21x[0];
                    j++;
                }
            }
            else if (p2.ship21y[0]==p2.ship21y[1]){
                int j=0;
                for (int i = p2.ship21x[0]; i <p2.ship21x[1] ; i++) {
                    p2.ship21x[j]=i;
                    p2.ship21y[j]=p2.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship312(p2.ship21x[0],p2.ship21y[0])==-1||valid_ship312(p2.ship21x[1],p2.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship21x[0],&p2.ship21y[0]);
        scanf("%d %d",&p2.ship21x[1],&p2.ship21y[1]);
        if (valid_ship312(p2.ship21x[0],p2.ship21y[0])!=-1||valid_ship312(p2.ship21x[1],p2.ship21y[1])!=-1){
            if (p2.ship21x[0]==p2.ship21x[1]){
                int j=0;
                for (int i = p2.ship21y[0]; i <p2.ship21y[1] ; i++) {
                    p2.ship21y[j]=i;
                    p2.ship21x[j]=p2.ship21x[0];
                    j++;
                }
            }
            else if (p2.ship21y[0]==p2.ship21y[1]){
                int j=0;
                for (int i = p2.ship21x[0]; i <p2.ship21x[1] ; i++) {
                    p2.ship21x[j]=i;
                    p2.ship21y[j]=p2.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship322(p2.ship21x[0],p2.ship21y[0])==-1||valid_ship322(p2.ship21x[1],p2.ship21y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship21x[0],&p2.ship21y[0]);
        scanf("%d %d",&p2.ship21x[1],&p2.ship21y[1]);
        if (valid_ship322(p2.ship21x[0],p2.ship21y[0])!=-1||valid_ship322(p2.ship21x[1],p2.ship21y[1])!=-1){
            if (p2.ship21x[0]==p2.ship21x[1]){
                int j=0;
                for (int i = p2.ship21y[0]; i <p2.ship21y[1] ; i++) {
                    p2.ship21y[j]=i;
                    p2.ship21x[j]=p2.ship21x[0];
                    j++;
                }
            }
            else if (p2.ship21y[0]==p2.ship21y[1]){
                int j=0;
                for (int i = p2.ship21x[0]; i <p2.ship21x[1] ; i++) {
                    p2.ship21x[j]=i;
                    p2.ship21y[j]=p2.ship21y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your second two-box ship.");
    scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
    printf("Please enter the coordinates at the end of your second two-box ship.");
    scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
    while (p2.ship22x[1]-p2.ship22x[0]!=1||p2.ship22y[1]-p2.ship22y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
        scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
        if (p2.ship22x[1]-p2.ship22x[0]==1||p2.ship22y[1]-p2.ship22y[0]==1){
            break;
        }
    }
    while (valid_ship52(p2.ship22x[0], p2.ship22y[0])==-1||valid_ship52(p2.ship22x[1], p2.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
        scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
        if (valid_ship52(p2.ship22x[0], p2.ship22y[0])!=-1||valid_ship52(p2.ship22x[1], p2.ship22y[1])!=-1){
            if (p2.ship21x[0]==p2.ship21x[1]){
                int j=0;
                for (int i = p2.ship22y[0]; i <p2.ship22y[1] ; i++) {
                    p2.ship22y[j]=i;
                    p2.ship22x[j]=p2.ship22x[0];
                    j++;
                }
            }
            else if (p2.ship22y[0]==p2.ship22y[1]){
                int j=0;
                for (int i = p2.ship22x[0]; i <p2.ship22x[1] ; i++) {
                    p2.ship22x[j]=i;
                    p2.ship22y[j]=p2.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship312(p2.ship22x[0],p2.ship22y[0])==-1||valid_ship312(p2.ship22x[1],p2.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
        scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
        if (valid_ship312(p2.ship22x[0],p2.ship22y[0])!=-1||valid_ship312(p2.ship22x[1],p2.ship22y[1])!=-1){
            if (p2.ship22x[0]==p2.ship22x[1]){
                int j=0;
                for (int i = p2.ship22y[0]; i <p2.ship22y[1] ; i++) {
                    p2.ship22y[j]=i;
                    p2.ship22x[j]=p2.ship22x[0];
                    j++;
                }
            }
            else if (p2.ship22y[0]==p2.ship22y[1]){
                int j=0;
                for (int i = p2.ship22x[0]; i <p2.ship22x[1] ; i++) {
                    p2.ship22x[j]=i;
                    p2.ship22y[j]=p2.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship322(p2.ship22x[0],p2.ship22y[0])==-1||valid_ship322(p2.ship22x[1],p2.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
        scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
        if (valid_ship322(p2.ship22x[0],p2.ship22y[0])!=-1||valid_ship322(p2.ship22x[1],p2.ship22y[1])!=-1){
            if (p2.ship22x[0]==p2.ship22x[1]){
                int j=0;
                for (int i = p2.ship22y[0]; i <p2.ship22y[1] ; i++) {
                    p2.ship22y[j]=i;
                    p2.ship22x[j]=p2.ship22x[0];
                    j++;
                }
            }
            else if (p2.ship22y[0]==p2.ship22y[1]){
                int j=0;
                for (int i = p2.ship22x[0]; i <p2.ship22x[1] ; i++) {
                    p2.ship22x[j]=i;
                    p2.ship22y[j]=p2.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship212(p2.ship22x[0],p2.ship22y[0])==-1||valid_ship212(p2.ship22x[1],p2.ship22y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship22x[0],&p2.ship22y[0]);
        scanf("%d %d",&p2.ship22x[1],&p2.ship22y[1]);
        if (valid_ship212(p2.ship22x[0],p2.ship22y[0])!=-1||valid_ship212(p2.ship22x[1],p2.ship22y[1])!=-1){
            if (p2.ship22x[0]==p2.ship22x[1]){
                int j=0;
                for (int i = p2.ship22y[0]; i <p2.ship22y[1] ; i++) {
                    p2.ship22y[j]=i;
                    p2.ship22x[j]=p2.ship22x[0];
                    j++;
                }
            }
            else if (p2.ship22y[0]==p2.ship22y[1]){
                int j=0;
                for (int i = p2.ship22x[0]; i <p2.ship22x[1] ; i++) {
                    p2.ship22x[j]=i;
                    p2.ship22y[j]=p2.ship22y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates at the beginning of your third two-box ship.");
    scanf("%d %d",&p2.ship23x[0],&p2.ship23x[0]);
    printf("Please enter the coordinates at the end of your third two-box ship.");
    scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
    while (p2.ship23x[1]-p2.ship23x[0]!=1||p2.ship23y[1]-p2.ship23y[0]!=1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (p2.ship23x[1]-p2.ship23x[0]==1||p2.ship23y[1]-p2.ship23y[0]==1){
            break;
        }
    }
    while (valid_ship52(p2.ship23x[0], p2.ship23y[0])==-1||valid_ship52(p2.ship23x[1], p2.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (valid_ship52(p2.ship23x[0], p2.ship23y[0])!=-1||valid_ship52(p2.ship23x[1], p2.ship23y[1])!=-1){
            if (p2.ship23x[0]==p2.ship23x[1]){
                int j=0;
                for (int i = p2.ship23y[0]; i <p2.ship23y[1] ; i++) {
                    p2.ship23y[j]=i;
                    p2.ship23x[j]=p2.ship23x[0];
                    j++;
                }
            }
            else if (p2.ship23y[0]==p2.ship23y[1]){
                int j=0;
                for (int i = p2.ship23x[0]; i <p2.ship23x[1] ; i++) {
                    p2.ship23x[j]=i;
                    p2.ship23y[j]=p2.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship312(p2.ship23x[0],p2.ship23y[0])==-1||valid_ship312(p2.ship23x[1],p2.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (valid_ship312(p2.ship23x[0],p2.ship23y[0])!=-1||valid_ship312(p2.ship23x[1],p2.ship23y[1])!=-1){
            if (p2.ship23x[0]==p2.ship23x[1]){
                int j=0;
                for (int i = p2.ship23y[0]; i <p2.ship23y[1] ; i++) {
                    p2.ship23y[j]=i;
                    p2.ship23x[j]=p2.ship23x[0];
                    j++;
                }
            }
            else if (p2.ship23y[0]==p2.ship23y[1]){
                int j=0;
                for (int i = p2.ship23x[0]; i <p2.ship23x[1] ; i++) {
                    p2.ship23x[j]=i;
                    p2.ship23y[j]=p2.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship322(p2.ship23x[0],p2.ship23y[0])==-1||valid_ship322(p2.ship23x[1],p2.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (valid_ship322(p2.ship23x[0],p2.ship23y[0])!=-1||valid_ship322(p2.ship23x[1],p2.ship23y[1])!=-1){
            if (p2.ship23x[0]==p2.ship23x[1]){
                int j=0;
                for (int i = p2.ship23y[0]; i <p2.ship23y[1] ; i++) {
                    p2.ship23y[j]=i;
                    p2.ship23x[j]=p2.ship23x[0];
                    j++;
                }
            }
            else if (p2.ship23y[0]==p2.ship23y[1]){
                int j=0;
                for (int i = p2.ship23x[0]; i <p2.ship23x[1] ; i++) {
                    p2.ship23x[j]=i;
                    p2.ship23y[j]=p2.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship212(p2.ship23x[0],p2.ship23y[0])==-1||valid_ship212(p2.ship23x[1],p2.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (valid_ship212(p2.ship23x[0],p2.ship23y[0])!=-1||valid_ship212(p2.ship23x[1],p2.ship23y[1])!=-1){
            if (p2.ship23x[0]==p2.ship23x[1]){
                int j=0;
                for (int i = p2.ship23y[0]; i <p2.ship23y[1] ; i++) {
                    p2.ship23y[j]=i;
                    p2.ship23x[j]=p2.ship23x[0];
                    j++;
                }
            }
            else if (p2.ship23y[0]==p2.ship23y[1]){
                int j=0;
                for (int i = p2.ship23x[0]; i <p2.ship23x[1] ; i++) {
                    p2.ship23x[j]=i;
                    p2.ship23y[j]=p2.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    while (valid_ship222(p2.ship23x[0],p2.ship23y[0])==-1||valid_ship222(p2.ship23x[1],p2.ship23y[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship23x[0],&p2.ship23y[0]);
        scanf("%d %d",&p2.ship23x[1],&p2.ship23y[1]);
        if (valid_ship222(p2.ship23x[0],p2.ship23y[0])!=-1||valid_ship222(p2.ship23x[1],p2.ship23y[1])!=-1){
            if (p2.ship23x[0]==p2.ship23x[1]){
                int j=0;
                for (int i = p2.ship23y[0]; i <p2.ship23y[1] ; i++) {
                    p2.ship23y[j]=i;
                    p2.ship23x[j]=p2.ship23x[0];
                    j++;
                }
            }
            else if (p2.ship23y[0]==p2.ship23y[1]){
                int j=0;
                for (int i = p2.ship23x[0]; i <p2.ship23x[1] ; i++) {
                    p2.ship23x[j]=i;
                    p2.ship23y[j]=p2.ship23y[0];
                    j++;
                }
            }
            break;
        }
    }
    printf("Please enter the coordinates of your first one-box ship.");
    scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
    while (valid_ship52(p2.ship11[0], p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship52(p2.ship11[0], p2.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship312(p2.ship11[0],p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship312(p2.ship11[0],p2.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship322(p2.ship11[0],p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship322(p2.ship11[0],p2.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship212(p2.ship11[0],p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship212(p2.ship11[0],p2.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship222(p2.ship11[0],p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship222(p2.ship11[0],p2.ship11[1])!=-1){
            break;
        }
    }
    while (valid_ship232(p2.ship11[0],p2.ship11[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship11[0],&p2.ship11[1]);
        if (valid_ship232(p2.ship11[0],p2.ship11[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates  of your second one-box ship.");
    scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
    while (valid_ship52(p2.ship12[0], p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship52(p2.ship12[0], p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship312(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship312(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship322(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship322(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship212(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship212(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship222(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship222(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship232(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship232(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    while (valid_ship112(p2.ship12[0],p2.ship12[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship12[0],&p2.ship12[1]);
        if (valid_ship112(p2.ship12[0],p2.ship12[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates of your third one-box ship.");
    scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
    while (valid_ship52(p2.ship13[0], p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship52(p2.ship13[0], p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship312(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship312(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship322(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship322(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship212(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship212(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship222(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship222(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship232(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship232(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship112(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship112(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    while (valid_ship122(p2.ship13[0],p2.ship13[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship13[0],&p2.ship13[1]);
        if (valid_ship122(p2.ship13[0],p2.ship13[1])!=-1){
            break;
        }
    }
    printf("Please enter the coordinates of your fourth one-box ship.");
    scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
    while (valid_ship52(p2.ship14[0], p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship52(p2.ship14[0], p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship312(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship312(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship322(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship322(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship212(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship212(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship222(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship222(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship232(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship232(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship112(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship112(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship122(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship122(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
    while (valid_ship132(p2.ship14[0],p2.ship14[1])==-1){
        printf("not acceptable. enter again.");
        scanf("%d %d",&p2.ship14[0],&p2.ship14[1]);
        if (valid_ship132(p2.ship14[0],p2.ship14[1])!=-1){
            break;
        }
    }
}
void turn_operation(){

}

int main() {
    printf("Hello, lets have fun during this battle:)!\n");
    get_ships1();
    get_ships2();
    fwrite(&p1,sizeof(ships),1,ships);
    fwrite(&p2,sizeof(ships),1,ships);
     return 0;
}
