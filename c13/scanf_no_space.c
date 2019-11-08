#include<stdio.h>

void main(void)
{
    char str[80] ;
    //char *p = "kkk";
    char *p ;

    printf("Enter your string:\n>>> ");

    /*
    scanf("%s",str);
    printf("string is:  %s", str);
    */
    
    p= str;
    //scanf("%s",p);
    //printf("scanf string is:  %s", p);


    printf("Enter your gets string:\n>>> ");
    gets(p);
    printf("Gets string is:  %s", p);
}
