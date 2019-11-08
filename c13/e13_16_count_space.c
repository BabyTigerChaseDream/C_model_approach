#include<stdio.h>

int count_spaces(const char *s)
{
    int count = 0;

    while (*s)
        if (*s++ == ' ')
            count++;
    return count;
}

void main(void)
{
    char * str1 = "I have 3 spaces";
    char * str2 = "I have 4 spaces ";

    char * str3 = " I h ave 6 spaces ";

    printf("str1 : (%s) space: %d\n",str1, count_spaces(str1));
    printf("str2 : (%s) space: %d\n",str2, count_spaces(str2));
    printf("str3 : (%s) space: %d\n",str3, count_spaces(str3));
}
