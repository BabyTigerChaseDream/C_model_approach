#include<stdio.h>
void main(void)
{
    double n, i, factor=1;

    printf("Enter a num:");
    scanf("%lf", &n);

    for (i=n; i>0; i--)
    {
       factor *=i; 
    }

    printf("factor is %lf",factor);
}
