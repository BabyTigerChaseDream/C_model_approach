#include<stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

typedef unsigned long u_long;

GENERIC_MAX(long)

GENERIC_MAX(u_long)

void main(void)
{
    printf("value : %d ",long_max(1,2)) ;
}
