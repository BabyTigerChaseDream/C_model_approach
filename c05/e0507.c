#include<stdio.h>
void main(void)
{
    int d1,d2,d3,d4;
    int max1, max2, min1,min2, max, min;

    printf("Enter 4 digits");
    scanf("%d,%d,%d,%d",&d1,&d2,&d3,&d4);
    
    // group data 2 by 2 
    max1 = d1 > d2 ? d1 : d2;
    min1 = d1 < d2 ? d1 : d2;

    max2 = d3 > d4 ? d3 : d4;
    min2 = d3 < d4 ? d3 : d4;

    printf("max : %d\n", max1>max2 ? max1 :max2);
    printf("min: %d\n", min1<min2 ? min1:min2);
}
