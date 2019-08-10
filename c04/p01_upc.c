#include<stdio.h>
void main(void)
{
    int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9;
    int d_1st;
    int checksum;
    int mod_checksum;

    printf("Enter first (single) digit:");
    scanf("%d",&d_1st);

    printf("Enter first group of 5 digit:");
    scanf("%d%d%d%d%d",&d0,&d1,&d2,&d3,&d4);
    printf("Enter second group of 5 digit:");
    scanf("%d%d%d%d%d",&d5,&d6,&d7,&d8,&d9);


    checksum = 9 - ( (d_1st+d1+d3+d5+d7+d9) *3 +(d0+d4+d6+d8+d2) - 1) % 10;
    printf("Check Digital:%d\n",checksum);

    mod_checksum = 9 - ((d_1st+d1+d3+d5+d7+d9+d0+d4+d6+d8+d2) - 1) % 10;
    printf("Mod Check Digital:%d\n",checksum);
}
