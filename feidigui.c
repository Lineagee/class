#include<stdio.h>
#define row 5 
int main()
{
    int i, j, tmp;
    int A[row];
    printf("A[row]=\n");
    scanf("%ld %ld %ld %ld %ld",&A[0],&A[1],&A[2],&A[3],&A[4]);
    for (i=0;i<=3;i++){
        for(j=i+1;j<=4;j++){
            if(A[i]>A[j])
            {    
                tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    printf("%ld %ld %ld %ld %ld\n ",A[0],A[1],A[2],A[3],A[4]);
    return 0;
}
