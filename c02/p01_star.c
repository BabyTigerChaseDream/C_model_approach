#include<stdio.h>
void main(void)
{
    printf("V1:: \n");
    for(int i =0; i<5; i++) 
    {
        printf("%*c\n",i, '*'); 
    }

    /*
    printf("V2");
    for(i =0; i<5; i++) 
    {
        printf("%*s\n",i, '@'); 
    }
    */
}
