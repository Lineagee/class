#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void clear()
{
    system("clear");//清屏
}

int main()
{
    char *p = "hello!there is SDU!";
    clear();
    int i, j;
    int a =1;
    for (i=0;i<10;i++)
    {   
        a++;
        if(a<100)
        {
            printf("\n\n\n\n\n\n\n");
            for(j=0;j<a;j++)
            {
                printf(" ");
            }
        }
        printf("\033[1;31m%s",p);//前面是字符颜色的ANSI码
        fflush(stdout);//立刻显示输出内容
        usleep(1000000);//延迟
        clear();
    }
    return 0;
}
