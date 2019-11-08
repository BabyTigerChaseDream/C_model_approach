
#ifndef STACK_H
#define STACK_H

void stack_overflow(void);

void stack_underflow(void);

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int ch);

char pop(void);

bool isoperator(char oper);

bool isoperand(int oper);


#endif
