#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 50

void reverse_name(char *name)
{
    char *p = name, initial;

    while (*p && *p == ' ')
        p++;
    initial = *p++;

    while (*p && *p++ != ' ');

    while (*p && *p != '\n')
        putchar(*p++);
    printf(", %c.", initial);
}

int main(void)
{
    char fullname[MAX_LEN], initial;
    
    printf("Enter a first and last name: ");
    fgets(fullname, sizeof(fullname), stdin);
   
    reverse_name(fullname);

    return 0;
}
