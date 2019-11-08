#include<stdio.h>

#define LEN 17

int loop_count = 0;

void selection_sort(int a[], int len);

void main(void)
{
    int a[LEN] = {9,3,19,10,1,13,15,6,0,4,14,8,11,5,2,7,12};

    int len;

    selection_sort(a,LEN);
    
    printf("\n**********\n");
    // printf a out
    for (len=0; len<LEN; len++)
        printf("%d ",a[len]);
        printf("\n***** & *****\n");
}

void selection_sort(int a[], int len)
{
    int i, j, temp;
    
    loop_count ++;
    printf("loop_count is %d:",loop_count);
    if (len == 0)
        return; 

    for (i=1; i<len; i++)
    {
        if (a[i]<a[i-1])
        {
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
    }

    printf("\n***** & *****\n");
    for (j=0; j<len; j++)
        printf("%d ",a[j]);
    printf("\n***** & *****\n");

    len = len-1;
    selection_sort(a, len);
    return; 
}
