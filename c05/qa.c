#include<stdio.h>
void main(void)
{
   int i,j;
   i= 5;
   j=0;

   if ((j=i))
       printf("Should NOT display i=%d",j);
   //if (i=j)
   //    printf("Expect warining");

}
