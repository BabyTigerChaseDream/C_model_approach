#include<stdio.h>
void main(void)
{
    int decNum;
    int d0,d1,d2,d3,d4;

    printf("Enter decimal num 0-32767 :");
    scanf("%d", &decNum);
    
    d0 = decNum % 8 ;
    d1 = decNum /8 % 8;
    d2 = decNum /8/8 % 8;
    d3 = decNum /8/8/8 % 8;
    d4 = decNum /8/8/8/8 % 8;

    printf("8  Num is :%d%d%d%d%d",d4,d3,d2,d1,d0);
}
