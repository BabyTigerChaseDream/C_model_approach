#include<stdio.h>

# define LENGTH (int)(sizeof(a)/sizeof(a[0]))
void main(void)
{
   int a[] = {[6]=6, [9]=9, [2]=2};
   int i;
    
   printf("len of a is %d:", LENGTH);
    
   for (i=0; i<LENGTH; i++)
   {
     printf("%d \n",a[i]);
   }
}
