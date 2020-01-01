#include<stdio.h>

void main(void)
{
    long int* p;
    long int* Q;
    long int lint=123456;

    p=&lint;

    int cnt = 0;

    printf("p: %p\n", p);

    Q = p+1;
    printf("Q: %p\n", Q);

    printf("Q minus p : %ld", Q-p);
}
