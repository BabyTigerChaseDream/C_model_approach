#include<stdio.h>
double inner_product(double a[], double b[], int n)
{
    int i, prod=1;
    for (i=0; i<n; i++)
    {
        prod += a[i]*b[i];
    }
    return prod;
}

int main(void)
{
    double a[5] = {6, 3, 9, 12, 14};
    double b[5] = {2, 17, 8, 5, 10};

    printf("Inner product sum: %lf", inner_product(a, b, 5));

    return 0;
}
