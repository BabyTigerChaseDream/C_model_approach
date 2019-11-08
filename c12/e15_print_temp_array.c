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
    int i=0, *p, (*k)[24];

    bool is_32;

    //for (p=&temperatures[i][0]; p<&temperatures[i][0] + 7*24; p++)
    for (p=temperatures[i]; p<temperatures[i] + 24; p++)
    {
       printf("temp: %d\n",*p) ;
    }
    
    int n = 0;
    
    printf("\n***********\n");
    for (k=&temperatures[i]; n<24; n++)
    {
       printf("temp: %d\n",(*k)[n]) ;
    }

    // incompatible assignment
    k=temperatures[0];
}
