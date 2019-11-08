#include <stdio.h>
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_demonimator);

int main(void)
{
    int num, denom, r_num, r_denom;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    reduce(num, denom, &r_num, &r_denom);
    printf("In lowest terms: %d/%d", r_num, r_denom );

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_demonimator)
{
    int n,m,temp;

    m = numerator;
    n = denominator;

    while (n != 0) {
       temp = m % n;
       m = n;
       n = temp;
    }

    *reduced_numerator = numerator / m;
    *reduced_demonimator = denominator / m;
}

