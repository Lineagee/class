#include<stdio.h>
int sam(char A[][6],int i, int l)
{
    int sam =0;
    if(i<4)
    {
        for(l=0;l<=5;l++)
        {
            sam+=A[i][l];
            
        }
    }
    
    return sam;
}





int main()
{
    char A[5][6];
    int l = 0;
    int i, j, k;
    char t, tmp;
    printf("A[5][6]=\n");
    scanf("%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c",&A[0][0],&A[0][1],&A[0][2],&A[0][3],&A[0][4],&A[0][5],&A[1][0],&A[1][1],&A[1][2],&A[1][3],&A[1][4],&A[1][5],&A[2][0],&A[2][1],&A[2][2],&A[2][3],&A[2][4],&A[2][5],&A[3][0],&A[3][1],&A[3][2],&A[3][3],&A[3][4],&A[3][5],&A[4][0],&A[4][1],&A[4][2],&A[4][3],&A[4][4],&A[4][5]);
    
    for(j=0;j<=4;j++){
        for(k=0;k<=4;k++){
            if(A[j][k]>A[j][k+1])
            {
                t=A[j][k];
                A[j][k]=A[j][k+1];
                A[j][k+1]=t;
            }
        }
    }
    for(i=0;i<=3;i++){
        if(sam(A,i,l)>sam(A,i+1,l))
        {
            for(l=0;l<=5;l++){
                tmp=A[i][l];
                A[i][l]=A[i+1][l];
                A[i+1][l]=tmp; 
            }    
        }   
    } 
    printf("%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c\n%c %c %c %c %c %c\n",A[0][0],A[0][1],A[0][2],A[0][3],A[0][4],A[0][5],A[1][0],A[1][1],A[1][2],A[1][3],A[1][4],A[1][5],A[2][0],A[2][1],A[2][2],A[2][3],A[2][4],A[2][5],A[3][0],A[3][1],A[3][2],A[3][3],A[3][4],A[3][5],A[4][0],A[4][1],A[4][2],A[4][3],A[4][4],A[4][5]);
    
    return 0;
}               
        
