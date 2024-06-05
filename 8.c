#include<stdio.h>
int A[8][8] = {0};
int fang(int m,int n)
{
    int i, j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(A[i][j]>0)
            {
                return 0;
            }
        }   
    }
    for(i=m,j=n;i>=0,j>=0;i--,j--)
    {
        if(A[i][j]>0)
        {
            return 0;
        }
    }
    for(i=m,j=n;i>=0,j<8;i--,j++)
    {
        if(A[i][j]>0)
        {
            return 0;
        }
    }
    for(i=m,j=n;i<8,j>=0;i++,j--)
    {
        if(A[i][j]>0)
        {
            return 0;
        }
    }
    for(i=m,j=n;i<8,j<8;i++,j++)
    {
        if(A[i][j]>0)
        {
            return 0;
        }
    }
    return 1;
}



int main()
{
    int i, j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(fang(i,j))
            {
                A[i][j]==1;
            }
        }
    }
     for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
