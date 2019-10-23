#include<stdio.h>

// fraction format: numerator / denominator 
struct fraction{
    int numerator;
    int denominator;
};

int get_gcd(int n, int m)
{
    int remainder;
    
    while (n != 0) {
       remainder = m % n;
       m = n;
       n = remainder;
       printf("m is [%d], n is [%d]\n",m,n);
    }
    printf("Greatest common divisor: %d\n", m);
    return m;
}

// a) reduce term
struct fraction reduce_fraction_term(struct fraction f)
{
    int gcd;
    struct fraction reduce_f;

    gcd = get_gcd(f.numerator, f.denominator);
   
    reduce_f.numerator = f.numerator / gcd; 
    reduce_f.denominator= f.denominator / gcd; 

    return reduce_f;
}

// b) add fraction
struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;
    
    f=reduce_fraction_term(f);
    return f;
}

// c) substract 
struct fraction sub_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;

    f=reduce_fraction_term(f);
    return f;
}

// d) multiply 
struct fraction mul_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;

    f=reduce_fraction_term(f);
    return f;
}

// e)devide 
struct fraction dev_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;

    f=reduce_fraction_term(f);
    return f;
}

// display fraction
void showfraction(struct fraction f)
{
    printf(" %d/%d; ",f.numerator, f.denominator);
}

void main(void)
{
    struct fraction f, f1={.numerator=4, .denominator=5}, f2={.numerator=2, .denominator=6};

    printf("2 fractions : \n");
    printf(" f1:");
    showfraction(f1);
    printf(" f2:");
    showfraction(f2);

    // add 
    f = add_fractions(f1,f2);
    printf("[add]");
    showfraction(f);
    // sub
    f = sub_fractions(f1,f2);
    printf("\n[sub]");
    showfraction(f);
    // mul
    f = mul_fractions(f1,f2);
    printf("\n[mul]");
    showfraction(f);
    // dev
    f = dev_fractions(f1,f2);
    printf("\n[dev]");
    showfraction(f);
}
