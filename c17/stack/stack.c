#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include "stack.h"

void make_empty(struct node **plist)
{
    struct node *entry;

    while(*plist)
    {
        entry = *plist;
        plist = &(*plist)->next;
        free(entry);
    }
}

bool is_empty(struct node **plist)
{
    return *plist == NULL;
}

bool push(struct node **plist, int n)
{
    struct node *new = malloc(sizeof(struct node));
    if(new == NULL)
        return false;
    printf("%s:%d > value =%d\n", __FUNCTION__,__LINE__,n);
    new->value = n;
    new->next = *plist;

    *plist = new;
    return true;
}

int pop(struct node **plist)
{

    if(is_empty(plist))
    {
        printf("stack empty:\n");
        exit(EXIT_FAILURE);
    }

    printf("%s:%d \n", __FUNCTION__,__LINE__);
    int value ;
    value = (*plist)->value;
    *plist = (*plist)->next;
    //nnode = &(*plist)->next;
    
    return value;
}

void main(void)
{
    struct node *list =  malloc(sizeof(struct node));
    //list->next  = NULL;
    list->value = 0;
    
    struct node *p_node;
    int i;

    for (int i=1; i<10; i++)
    {
        if (list)
        {
            push(&list, i);
        }
    }
   
    while(list)
    {
        i= pop(&list);
        printf("node [%d]\n",i);
    }
}
