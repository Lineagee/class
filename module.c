#ifndef STDIO_H
#define STDIO_H
extern int a;
int module();
int module2();
#endif


#include "stdio.h"
extern int a = 10;
int module()
{
    int b = 2;
    return b;
}


int module2()
{
    int c = 3;
    return c;
}

