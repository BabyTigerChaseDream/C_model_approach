#include<stdio.h>

#include<stdbool.h>

/* Returns a pointer to the array element containing the largest value */
int find_largest(int a[], int n)
{
    int *p, *largest;

    for (p = a, largest = a; p < a + n; p++) {
        if (*p > *largest)
            largest = p;
    }
    return *largest;
}

void main(void)
{
    int temperatures[7][24] ={20,3,0,0,0,0,-1,40,0,0,0};
    int i=0, *p, (*k)[24];
    int r=0;

    int largest_temp;

    bool is_32;

    for(i=0; i<7; i++)
    {
        largest_temp = find_largest(temperatures[i],24);
        printf("[1] temp: %d\n",largest_temp) ;
    }
    
    for(i=0; i<7; i++)
    {
        largest_temp = find_largest(&temperatures[i][0],24);
        printf("[2] temp: %d\n",largest_temp) ;
    }

}
