#include<stdio.h>
#include<stdlib.h>

char *duplicate(const char *str)
{
    char *new_str = malloc(len(str)+1);

    if (new_str == NULL)
    {
        printf("fail to assign pointer, exit");
        return NULL;
    }

    // new mem allocation works
    strcpy(new_str,str);

    return new_str;
}
