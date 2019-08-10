#include<stdio.h>
void main(void)
{
    printf("****** F ******");
    printf("\n");
    printf("010E2 %f",010E2);
    printf("\n");
    printf("32.1E+5 %f",32.1E+5);
    printf("\n");
    printf("3.978e-2 %f",3.978e-2);
    printf("\n");
    // illegal below : 0 means octal but it contains 9 in it
    //printf("0790 %f",0790);
    printf("****** e ******");
    printf("\n");
    
    printf("010E2 %e",010E2);
    printf("\n");
    printf("32.1E+5 %e",32.1E+5);
    printf("\n");
    printf("-3.978e-2 %e",-3.978e-2);
    printf("\n");

    printf("****** g ******");
    printf("\n");
    
    printf("010E2 %g",010E2);
    printf("\n");
    printf("32.1E+5 %g",32.1E+5);
    printf("\n");
    printf("3.978e-2 %g",3.978e-2);
    printf("\n");
}
