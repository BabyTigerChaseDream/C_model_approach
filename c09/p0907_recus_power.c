#include<stdio.h>
/*
// raw version power
int compute_polynomial(int x)
{
    return (  (3 * (x * x * x * x * x))
            + (2 * (x * x * x * x))
            - (5 * (x * x * x))
            - (x * x)
            + (7 * x)
            - 6);
}
*/

// advanced - recursive version
int compute_polynomial(int x, int n)
{
    if(n == 0)
        return 1;
    if (n % 2 == 0)
        return compute_polynomial(x, n/2)*compute_polynomial(x, n/2);
    else if (n % 2 == 1)
        return x*compute_polynomial(x, n-1);
}

int main(void)
{
    int x,n;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("%d\n", compute_polynomial(x, n));

    return 0;
}
