#include<stdio.h>

int fact(int n);

int main(void)
{
    int n = 4;
    printf("%d! = %d\n",  n, fact(n)); 
    printf("%d! = %d\n",  0, fact(0)); 
    return 0;
}

int fact(int n)
{   
    int i, f = 1;
    if ((n == 0) || (n == 1))
        return 1;
    for (i=n;i>0;i--)
    {
        f *=i;
    }
    return f;

}
