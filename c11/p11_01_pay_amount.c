#include<stdio.h>

void pay_amount(int dollars, int *twt, int *ten, int *f, int *one);

void main(void)
{
    int dollars;

    int *twt, *ten, *f, *one;
    
    printf(" *twt : %p", twt);
    printf(" *ten : %p", ten);
    printf(" *f: %p", f);
    printf(" *one : %p", one);
    /*
    
    int twt, ten, f, one;
    *twt = 0; 
    *ten = 0; 
    *f = 0; 
    *one = 0;

    printf("Enter a dollars amount: ");
    scanf("%d",&dollars);
    
    pay_amount(dollars, &twt, &ten, &f, &one);

    printf("$20: %d\n", twt);
    printf("$10: %d\n", ten);
    printf("$5: %d\n", f);
    printf("$1: %d\n", one);

    */
}

void pay_amount(int dollars, int *ptwt, int *pten, int *pf, int *pone)
{
    *ptwt = dollars / 20;
    dollars = dollars % 20;

    *pten = dollars / 10;
    dollars = dollars % 10;

    *pf = dollars / 5;
    dollars = dollars % 5;

    *pone = dollars / 1;
}
