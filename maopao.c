#include<stdio.h>
#define row 5
int main()
{
    int A[row];
    int i, tmp;
    printf("A[row]=\n");
    scanf("%d %d %d %d %d",&A[0],&A[1],&A[2],&A[3],&A[4]);
    for(int j=0;j<5;j++){
        for(i=4;i>=1;i--){
            if(A[i]<A[i-1])
            {
                tmp=A[i-1];
                A[i-1]=A[i];
                A[i]=tmp;
            }
        }
    }    
    printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
    
    return 0;
}
