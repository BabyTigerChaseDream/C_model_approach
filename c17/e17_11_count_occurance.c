#include<stdio.h>

struct node {
    int value;
    struct node *next;
}

int count_occurrences(struct node *list,  int n)
{
    struct node *p;
    int cnt = 0;

    for(p=list; p !=NULL; p=p->next)
    {
        if(p->value == n)
            cnt +++;
    }

    return cnt;
}
