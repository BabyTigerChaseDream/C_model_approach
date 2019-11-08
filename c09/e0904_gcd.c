#include<stdio.h>

int gcd(int m, int n);

int main(void)
{
    printf("GCD of %d and %d is : %d \n", 12, 28, gcd(12,28));
}

int gcd(int m, int n)
{
    int remainder ;

    if(n == 0)
        return m;

    while(n>0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}
