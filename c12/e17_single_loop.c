#include<stdio.h>

int sum_two_dimensional_array(const int a[][LEN], int n);

void main(void)
{
    
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
   const int *p ;
   int sum;

   for (p=&a[0][0]; p<&a[0][0]+LEN*n; p++)
       sum + = *P;

   return sum;
}
