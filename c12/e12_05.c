#include<stdio.h>
void main(void)
{
    int a[10];
    int *p;
   
    a[0] = 3;

    p=a;
    printf("check equal:%d:",p[2] == a[2]);
    printf("check equal:%d:",p[2] == a[0]);
}
