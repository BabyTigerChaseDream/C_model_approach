#include<stdio.h>
#include<stdlib.h>

void *my_malloc(size_t size)
{
    void *my_ptr;

    my_ptr = malloc(size);

    if(my_ptr == NULL)
    {
        printf("pointer allocation failed \n");
        return exit(EXIT_FAILURE);
    }
    else
        return my_ptr;

}

void main(void)
{
 char *p = my_malloc(10);
}
