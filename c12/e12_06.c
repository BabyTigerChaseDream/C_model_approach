#include<stdio.h>

int sum_array(const int a[], int n);

void main(void)
{
   const int a[10] = {1,2,3,4,5,6,7,8,9,10};
   int sum ;
   sum=sum_array(a, 10);

   printf("Sum %d:", sum);
}

int sum_array(const int a[], int n)
{
    const int *p; 
    int sum;

    for(p=a; p<a+n; p++)
        sum += *p;
    return sum;
}
