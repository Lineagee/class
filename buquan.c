#include<stdio.h>
int main()
{
    long x = 1;
    char A[] = {'C','!','Y','Y','D','S','!','\0'};
    char *p = &A[0];
    x = p;
    printf("%s\n",x);
    return 0;
}
