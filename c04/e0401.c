#include<stdio.h>
void main(void)
{
    int i=5, j=3;
    // 1 2
    printf("%d %d\n",i/j,i%j);

     i=2; 
     j=3;
    // 0
    printf("%d \n",(i+10)%j);

    i=7;
    j=8; 
    int k=9;
    // 1
    printf("%d \n",(i+10)%k/j);
}
