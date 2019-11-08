#include<stdio.h>

#include<stdbool.h>

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p=&a[0]; p<a+n; p++)
    {
        if (*p == key )
            return true;
    }
    return false;
}


void main(void)
{
    int temperatures[7][24] ={20,3,0,0,0,0,-1,40,0,0,0};

    bool is_32;

    is_32 = search(&temperatures[0][0], 7*24, 32);

    printf("Is 32: %d", is_32);
}
