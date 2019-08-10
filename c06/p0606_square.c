#include<stdio.h>
void main(void)
{
    int n,i;

    printf("Enter the num: ");
    scanf("%d",&n);

    for (i=1; i*i<=n; i++)
    {
       printf("square: %d\n",i*i); 
    }

}
