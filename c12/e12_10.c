#include<stdio.h>

int *find_middle(int a[], int n);

void main(void)
{
    int a[3] = {1,2,3};
    int b[2] = {1,2};

    printf("a mid pointer: %p",find_middle(a,3));
    printf("b mid pointer: %p",find_middle(b,2));
}

int *find_middle(int a[], int n)
{
    return (a+n/2);
}
