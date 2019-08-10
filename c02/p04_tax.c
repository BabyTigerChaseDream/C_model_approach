#include<stdio.h>

# define TAX_RATE 1.05f

void main(void)
{
    float income ;
    printf("Input income:");
    scanf("%f",&income);

    // input 100
    printf("with tax added: $%.2f", income* 1.05f);
    // %.2f -> 105
    
    printf("with tax added: $%f", income* 1.05f);
    // %f -> 104.999992 
}
