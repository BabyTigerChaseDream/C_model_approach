#include<stdio.h>

double innner_product(const double *a, const double *b, int n);

void main(void)
{
    double prod;
    double a[2] ={1.0,2.0};
    double b[2] ={1.0,2.0};

    //prod = innner_product( a, b, 2);
    prod = innner_product( (double []){1.0,2.0}, (double []){1.0,2.0}, 2);

    printf("prod: %f",prod);
}

double innner_product(const double *a, const double *b, int n)
{
    const double *p, *q;
    double product ;

    for (p=a,q=b; p<a+n,q<b+n; q++,p++)
        product += *p * *q;
    return product;
}
