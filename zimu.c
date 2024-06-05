#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *r[100];
    char A[50];
    int t = 0;
    for(int i =0;i<100;i++)
    {
        printf("%d:",i+1);
        fgets(A,50,stdin);
         if(strcmp(A,"End\n")==0)
        {
            break;
        }
        A[strcspn(A,"\n")] = '\0';
        r[i]=(char*)calloc(1,sizeof(A)+1);
        strcpy (r[i],A);
        t++;
    }
    for(int j =0;j<t;j++)
    {
        printf("%d:%s\n",j,r[j]);
    }

    for(int k = 0; k < t; k++)
      {
          int count[256] = {0};
          for(int m = 0; m < strlen(r[k]); m++)
          {
              count[(int)r[k][m]]++;
          }
          for(int n = 0; n < 256; n++)
          {
              if(count[n] != 0)
            {
                  printf("%c:%d  ",(char)n, count[n]);
            }
          }  
          printf("\n");
      }
    for(int i =0;i<t;i++)
    {
        free(r[i]);    
    }
    return 0;
}
            
        
