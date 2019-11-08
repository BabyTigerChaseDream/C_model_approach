#include<stdio.h>


int sum(int (*f)(int), int start, int end)
{
    int total = 0, i;
    for(i=start; i<=end; i++)
    {
        total += (*f)(i);
    }
    return total;
}

int func(int x)
{
    return x*x;
}

void main(void)
{
    int s, end;
    printf("Input ends number >>>");
    scanf("%d", &end);
    //s=sum(func, 1, 5);
    s=sum(func, 1, end);

    printf("Sum is : %d\n", s);
}
