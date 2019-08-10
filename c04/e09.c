#include<stdio.h>
void main(void)
{
   int i=7, j=8, k;

    i *=j+1;
    printf("i *=j+1: %d %d \n",i,j);
 
    i=j=k=1;
    i += j += k;
    printf("i += j += k : %d %d %d\n",i,j,k);

    i=1; j=2; k=3;
    i -= j -= k;
    printf("i -= j -= k : %d %d %d\n",i,j,k);

    i=2; j=1; k=0;
    i *= j *= k;
    printf("i *= j *= k : %d %d %d\n",i,j,k);


}
