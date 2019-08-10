#include<stdio.h>
void main(void)
{
    int d,n;
    printf("Input your number:");
    scanf("%d",&n);

    for(d=2; d<n; d++)
    {
        if (n % d == 0)
            break;
    }
    if (d<n)
        printf("%d is divisible by %d\n",n,d);
    else
        printf("%d is prime \n",n);
    

}
