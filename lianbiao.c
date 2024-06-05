#include<stdio.h>
#include<stdlib.h>

typedef struct list_item {
    int x;
    struct list_item *next;
} list_item;
 
list_item *create(int x)
{
    list_item *p;
    p = (list_item *)calloc(1,sizeof(list_item));
    p -> x = x;
    p -> next = NULL;    
    return p;
}


list_item *a_list()
{
    list_item *head, *p;
    head = create(0);
    p = head;
    for(int i =1;i<3;i++)
    {
        p -> next = create(i);
        p = p -> next;
    }
    return head;
}

void erase_list(list_item *head)
{
    list_item *p;
    while(head ->next)
    {
        p = head -> next;
        head -> next = p -> next;
        free(p);
    }
}
   
int main()
{
    list_item *head, *tem;
    head = a_list();
    tem = head;
    while(tem != NULL)
    {   
        printf("%d -> ",tem -> x);
        tem = tem ->next;
    }
    printf("NULL\n");
    erase_list(head);     
    printf("erase over\n");
    return 0;
}
