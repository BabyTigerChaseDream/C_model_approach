#include<stdlib.h>

void main(void)
{
    int a[100];

    qsort(&a[50], 50, sizeof(int), compar);
}
