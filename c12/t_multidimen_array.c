#include<stdio.h>
#define NUM_COLS 3
#define NUM_ROWS 3

void main(void)
{
    int a[NUM_ROWS][NUM_COLS], i;
    int (*p)[NUM_COLS];
    int (*k)[NUM_COLS];

    p = &a[0][0];
    printf("p : %p\n",p);
    printf("p+1 : %p\n",p+1);
    
    printf("&a[0][0] : %p\n",&a[0][0]);
    printf("&a[0][0] + 1: %p\n",&a[0][0] + 1);

    printf("&a[0] : %p\n",&a[0]);
    printf("&a[0] +1: %p\n",&a[0] + 1);

    printf("a : %p\n",a);
    printf("a+1: %p\n",a + 1);

    printf("a == &a[0] ? %d \n", a==&a[0]);
    printf("a+1 == &a[0]+1 ? %d \n", (a+1) == (&a[0]+1) );

    k = &a[0];
    printf("k : %p\n",k);
    printf("k+1 : %p\n",k+1);
}

