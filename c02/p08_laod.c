#include<stdio.h>

int main(void)
{
    float load,interest_rate, mon_pay;

    printf("Enter Load:");
    scanf("%f",&load);
    printf("Enter interest_rate:");
    scanf("%f",&interest_rate);
    printf("Enter mon_pay:");
    scanf("%f",&mon_pay);

    float mon_interest = (interest_rate/100)/12 +1;

    load *=mon_interest;
    load-=mon_pay;
    printf("balancce 1st : $%.2f \n", load);

    load *=mon_interest;
    load-=mon_pay;
    printf("balancce 2nd: $%.2f \n", load);
}
