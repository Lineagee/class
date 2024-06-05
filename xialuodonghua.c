#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct{
     int x;
     int y;
     char (*p)();
}weizhi;



void clear()
{
    system("clear");
}

char print(int x,int y,char (*c)(x))
{
    printf("\033[%d;%dH",y,x);
    (*c)(x);
}

char add (int x)
{
    int i, j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6+x;j++)
        {  
            if(j==3+x||i==0)
                printf("\033[31m*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    char (*p)(int x) = &add;
    int A[100][2];
    int x, y, j;
    int i = 0;
    clear();
    while(1)
    {
        if(x==0&&y==0)
        {
            break;
        }
        printf("x= y= ");
        scanf("%d %d",&x,&y);
        for(j=0;j<1;j++){
            A[i][j]=y;
            A[i][j+1]=x;
        }
        print(x,y,p);
        fflush(stdout);
        usleep(1000000);
        clear();
        i++;
    }
    int a = i;
    if (x==0&&y==0)
    {
        for(i=0;i<(a+1);i++){
            for(j=0;j<1;j++){
            print(A[i][j],A[i][j+1],p);
            fflush(stdout);
            usleep(1000000);
            clear();
            }
        }
    }
    return 0;
}
