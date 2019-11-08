#include<stdio.h>

void main(void)
{
    int a[10];
    long b[10];
    int *p, *q;
    long *j, *k;

    p= &a[0];
    q= &a[4];
    
    printf("q-p is %ld \n",p-q);

    printf("q is %p\n",q);
    printf("p is %p\n",p);

    j= &b[0];
    k= &b[4];
    
    printf("[b] j-k is %ld \n",j-k);

    printf("[b] j is %p\n",j);
    printf("[b] k is %p\n",k);
}
