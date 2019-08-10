#include<stdio.h>
void main(void)
{
    int num, d1, d2, d3;
    int total; 

    printf("Enter 3 Digital : ");
    scanf("%d", &num);
    
    //// m1 : split num into digits 
    //d3=num / 100;
    //d2= (num / 10) % 10;
    //d1=num % 10;

    //// m2 : no split of digits 
    total = (num %10 *100) + num/10%10*10 + num / 100;
    printf("%.3d \n",total);
}
