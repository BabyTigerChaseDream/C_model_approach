#include<stdio.h>

int num_digit(int n);

int main(void)
{
    printf("%d has digit: %d \n", 20928, num_digit(20928));
    printf("%d has digit: %d \n", 0, num_digit(0));
}

int num_digit(int n)
{
    int i=0;
    
    while(n>0)
    {
        n=n/10;
        i++;
    }

    return i;
}
