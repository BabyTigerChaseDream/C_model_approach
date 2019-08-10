#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   bool weekend[] = {[5]=1, [6]=1};

    for (int i=0; i< (int) (sizeof(weekend)/sizeof(weekend[0])); i++)
    {
        printf("weekend[%d]: %d\n",i, weekend[i]);
    }
}
