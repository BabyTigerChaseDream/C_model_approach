
#ifndef STACK_H
#define STACK_H

struct node{
    int value;
    struct node *next;
};

void make_empty(struct node **list);

bool is_empty(struct node **list);

bool push(struct node **list, int n);

int pop(struct node **list);

#endif
