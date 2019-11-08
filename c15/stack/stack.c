#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include "stack.h"

#define STACK_SIZE 15 

struct node {
    int value;
    struct node * next;
};

void make_empty(struct node **plist)
{
    struct node *entry;

    while(*plist !=NULL )
    {
        entry  = *plist;
        plist= &(*plist)->next
        
        free(entry);
    }
}

bool is_empty(struct node **plist)
{
    return *plist == NULL;
}

bool push(struct node **plist, int n)
{
    struct node * new_node = malloc(sizeiof(struct node));
    if (!new_node)
    {
        return false;
    }
    else
    {
        new_node->value = n;
        new_node->next = *plist;

        *plist = new_node;
        return true;
    }
}

struct node * pop(struct node **plist)
{
    if (*plist)
        return *plist;
    else
        return NULL;
}

