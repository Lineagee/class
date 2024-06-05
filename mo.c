#include "stdio.h"
#include<stdio.h>
int a;
int module();
int module2();
int main()
{
    int b = module();
    int c = module2();
    printf("%d %d %d\n",b,c,a);
    return 0;
}

