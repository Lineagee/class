#include<stdio.h>
#define row 2
#define col 3
int two_dim_arry_access(int *x,int i,int j,int m,int n,int c)
{
    int k =m*c+n;
    return k;
}

int main()
{
    int A[row][col] = {{1,2,3},{4,5,6}};
    int a = two_dim_arry_access(&A[0][0],0,0,1,2,3);
    int b = two_dim_arry_access(&A[1][2],1,2,1,2,3);
    printf("%d %d\n",a,b);

    return 0;
}
