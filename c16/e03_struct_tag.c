#include<stdio.h>

typedef struct{
    double real,imaginary;
} complex;

struct cmplx{
    double real,imaginary;
} ;

complex make_complex(double i, double r)
{
    complex c;

    c.real = r;
    c.imaginary = i;

    return c;
}

void main(void){
    complex c1 = {.real=0.0, .imaginary=1.0};
    complex c2 = {.real=5.0};
    complex c3;

    double i = 0.9;
    double r = 2.5;

    c3= make_complex(i, r);

    printf("\ncomplex made of is :\
            i=%f, r=%f \n", c3.imaginary, c3.real);
}


