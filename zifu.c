#include<stdio.h>
#define row 5
int main()
{
    char A[row];
    printf("a=\n");
    scanf("%5c",&A);
    int i;
    for(i=0;i<5;i++){
         if(A[i]=='A')
       {
           printf("    *    \n   * *   \n  *****  \n *     * \n*       *\n");
       }
       else if(A[i]=='B')
            {
               printf("*****\n*   *\n*   *\n*****\n*   *\n*   *\n*****\n");
            }
            else if(A[i]=='C')
                  {
                      printf("*****\n*\n*    \n*\n*****\n");     
                  }
                  else if(A[i]=='D')
                       {
                           printf("*****\n*   *\n*   *\n*   *\n*****\n");
                       }
                       else if(A[i]=='E')
                            {
                                printf("*****\n*\n*\n*****\n*\n*\n*****\n");
                            }
                            else  if(A[i]=='F')
                                  {
                                      printf("*****\n*    \n*\n*****\n*\n*\n");
                                  }
                                  else if(A[i]=='H')
                                       {
                                          printf("*   *\n*   *\n*****\n*   *\n*   *\n");
                                       }  
                                       else if(A[i]=='I')
                                            {
                                                printf("*****\n  *  \n  *  \n  *  \n*****\n");     
                                            }
       
    } 
    return 0;
}
