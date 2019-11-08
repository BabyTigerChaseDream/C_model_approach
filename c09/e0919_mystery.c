#include<stdio.h>
void pb(int n);

void main(void)
{
    int num;
    printf("Input a number:");
    scanf("%d",&num);
    pb(num);
}

void pb(int n)
{
    if(n!=0){
        pb(n/2);
        putchar('0' + n %2);
    }
}
