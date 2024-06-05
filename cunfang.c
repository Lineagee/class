#include<stdio.h>
int main()
{
    int i, j;
    int A[2][3];
    printf("A[2][3]=\n");
    scanf("%d %d %d %d %d %d",&A[0][0],&A[0][1],&A[0][2],&A[1][0],&A[1][1],&A[1][2]);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++){
            printf("%p\n",&A[i][j]);
        }
    }
    return 0;
}
