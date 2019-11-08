#include<stdio.h>
#include<stdlib.h>

int *create_array(int n, int initial_value)
{
    int *array = malloc(n*sizeof(int));

    if (array == NULL)
    {
        printf("malloc failed \n");
        return NULL;
    }

    // init array
    /*
    while(array) // grow unlimited , no boundary till program crash 
    {
        printf("Array is %p, i=%d", array, i);
        *array = initial_value;
        array ++;
        i++;
    }
    */

    // bug fix version
    int *p;

    for (p = array; p < array + n; p++)
        *p = initial_value;

    return array;
}

int main(void)
{
    int *arr = create_array(5, 7);
    int *p = arr;

    while (p < arr + 5)
        printf("%d ", *p++);
    printf("\n");
    
}
