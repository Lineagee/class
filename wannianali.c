#include<stdio.h>
int runnian(int year)
{
    int f = year%4;
    if (f==0)
        return 1;
    else
        return 0;
}


int day(int mouth)
{
    int year;
    if (mouth==2)
    {
        return runnian(year)?28:29;
    }
    else if(mouth==1||mouth==3||mouth==5||mouth==7||mouth==8||mouth==10||mouth==12)
         {
             return 31;
         }
         else
              return 30; 
     
}
 
 
 
 
int total(int year)
{
    int i, j, total_day, week, mouth, days; 
    total_day=0;  
    for(i=2023;i<year;i++){
       total_day+=runnian(i)?366:365; 
    }
    week=(total_day+1)%7;
    printf("Sum Mon Tue WEd Thu Fri Sat\n");
    for(j=1;j<week;j++){
        printf("    ");
    }
         for(mouth=1;mouth<=12;mouth++){
             for(days=1;days<=day(mouth);days++){
                    printf("%4d",days); 
                    if((total_day+days)%7==0)
                    {
                       printf("\n");
                    } 
             }  
             printf("\n"); 
             total_day+=day(mouth);
             week=(total_day+1)%7;
             printf("Sum Mon Tue WEd Thu Fri Sat\n");
             for(j=1;j<week;j++){
                 printf("    ");
             }
    }
    printf("\n");
       
}
    
    
    
int main()
{    
    int year;
    printf("What's year is this?\n");
    scanf("%d",&year);
    total(year);
    return 0;
}  
    
    
    
    
    
    
    
    
