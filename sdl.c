#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void clear()
{
    system("clear");
}

int main()
{
    FILE *fp;
    int i, j;
    int b = 1;
    char m[1000];
    char A[1000];

    fp = fopen("sdl2.c", "w");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    fclose(fp);

    printf("Type 'null' to stop:\n");

    fp = fopen("sdl2.c", "a");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while (1)
    {
        printf("Input: ");
        scanf("%s", m);
        if (strcmp(m, "null") == 0)
        {
            break;
        }
        fprintf(fp, "%s ", m); // Write input to file
    }
    fclose(fp);

    clear();

    fp = fopen("sdl2.c", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while (fgets(A, sizeof(A), fp) != NULL)
    {
        for(i=0;i<10;i++)
        {
            b++;
            if(b<100)
            {
                printf("\n\n\n\n\n\n\n\n\n\n");
                for(j=0;j<b;j++)
                {
                    printf(" ");
                }
            }
            fgets(A, sizeof(A), fp); //fp是一个文件指针，不能直接打印它的内容，用fscanf 或者 fgets 来读取文件内容并打印
            printf("\x1b[36mCyan%s",A);
            fflush(stdout);
            usleep(1000000);
            clear();
        } 
    }

    fclose(fp);
    return 0;
}
