#include<stdio.h>

# define L 40

void main(void)
{
    int i=0, j=1;
    // just declare here 
    int fib[L] ={0,1} ;

    for (int n=2; n<L; n++)
    {
        fib[n] = fib[n-2]+fib[n-1];
    }

    for (int n=0; n<L; n++)
    {
        printf("fib[%d]: %d\n",n,fib[n]) ;
    }
}
