#include<stdio.h>

#define MAX_LEN 80

void main(void)
{
    int c = 0 ;
    
    char arr[MAX_LEN], ch, *p;

    
    printf("Input your string>> \n");

    while( (ch = getchar()) != '\n' )
    {
        arr[c++] = ch;
    }
/*
    printf("Reversed string in arr >> \n");
    while( c>=0 )
    {
        ch = arr[--c];
        printf("%c",ch);
    }
*/

    p=arr+c;
    printf("\nReversed string in pointer >> \n");
    while( p>=arr )
    {
        printf("%c",*p--);
    }

}
