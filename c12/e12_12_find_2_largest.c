#include<stdio.h>
#include<limits.h>

void find_two_largest(const int *a, int n, int *largest,
                int *second_largest);

void main(void)
{
    int a[10] = {1,10,3,5,9,7,10,21,15,30};
    int b[10] = {34,3,5,-9,7,10,2,6,-15,0};

    int largest, second_largest; 
    
    find_two_largest(a, 10, &largest, &second_largest);
    printf("1st large:%d , 2nd large: %d\n ",largest, second_largest);

    find_two_largest(b, 10, &largest, &second_largest);
    printf("1st large:%d , 2nd large: %d\n ",largest, second_largest);
}

void find_two_largest(const int *a, int n, int *largest,
                int *second_largest)
{
    const int *p;
    *largest = INT_MIN;
    *second_largest = INT_MIN;

    for(p=a; p<a+n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p < *largest && *p > *second_largest)
        {
            *second_largest = *p;
        }

    }

}
