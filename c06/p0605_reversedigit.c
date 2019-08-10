#include<stdio.h>
void main(void)
{
    int num, d;
    printf("Input num:");
    scanf("%d",&num);

    do{
        d= num %10;
        printf("%.1d",d);
        //printf("%1d",d);
        num =num/10;
    }while(num !=0);
}
