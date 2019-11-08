#include<stdio.h>

int max(int a[], int n)
{
    int i, m;
    m = a[0];
    for (i=1; i<n; i++)
    {
       m = m > a[i] ? m:a[i];
    }

    return m;
}

int average(int a[], int n)
{
    int i, sum=0;
    for (i=0; i<n; i++)
    {
        sum += a[i];
    }

    return  sum / n;
}


int positive_num(int a[], int n)
{
    int i, m=0;
    for (i=0; i<n; i++)
    {
        if(a[i]>0)
            m++;
    }

    return m;
}
