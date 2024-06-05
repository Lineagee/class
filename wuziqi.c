#include<stdio.h>
#define size 5
int A[size][size]={0};
void qipan()
{
    int i, j;
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
}



int panduan(int row,int col,int count,int xingzhuang)
{
        int i, j;
        for (i=row + 1;i<size&&A[i][col]==xingzhuang;i++)
        {
            count++;
        }
        for (i=row - 1;i>=0&&A[i][col]==xingzhuang;i--)
        {
            count++;
        }
        if (count==5)
        {
            printf("%d is winer",xingzhuang);
            return 0;
        }
        
        count=1;
        for (i=col+1;i<size&&A[row][i]==xingzhuang;i++)
        {
            count++;
        }
        for (i=col-1;i>=0&&A[row][i]==xingzhuang;i--)
        {
            count++;
        }
        if(count==5)
        {
            printf("%d is winer",xingzhuang);
            return 0;
        }
        
        count=1;
        for (i=row+1,j=col+1;i<size&&j<size&&A[i][j]==xingzhuang;i++,j++)
        {
            count++;
        }
        for (i=row-1,j=col-1;i>=0&&j>=0&&A[i][j]==xingzhuang;i--,j--)
        {
            count++;
        }
        if(count==5)
        {
            printf("%d is winer",xingzhuang);
            return 0;
        }
        
        
        count=1;
        for (i=row+1,j=col-1;i<size&&j>0&&A[i][j]==xingzhuang;i++,j--)
        {
            count++;
        }
        for (i=row-1,j=col+1;i>=0&&j<size&&A[i][j]==xingzhuang;i--,j++)
        {
            count++;
        }
        if(count==5)
        {
            printf("%d is winer",xingzhuang);
            return 0;
        }
           
           
            int b = 3 ;
            return b;
        
    
}



int main()
{
    int qizi = 1;
    int count = 1;
    int row, col;
    int a;
    while(a=3)
    {
        scanf("%d %d",&row,&col);
        A[row][col]=qizi;
        qipan();
        a=panduan(row,col,count,qizi);
        qizi=(qizi==1)?2:1;
    }
    return 0;
}    



