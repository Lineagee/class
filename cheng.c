#include<stdio.h>
void matrix_mulit(double A[3][4],double B[4][5],double C[3][5])
{
    C[0][0]==0;
    int i, j, k;
    for (i=0;i<3;i++)
    {
        for(k=0;k<5;k++)
        {
            for(j=0;j<5;j++)
            {
                C[i][k] += A[i][j]*B[j][i];
            }
        }    
    }
}



int main()
{
    double C[3][5];
    double A[3][4]={{1,2,3,4},{5,6,7,8},{9,11,12,13}};
    double B[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    matrix_mulit(A,B,C);
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%f   ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
