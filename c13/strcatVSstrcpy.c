#include<string.h>
#include<stdio.h>

char *duplicate(const char *p)
{
    char *q;
    
    printf("*q is at :%p \n", q);
    strcpy(q,p);
    return q;
}

void main(void)
{
    char str1[5];
    char str11[15];
    char *ustr1="123";

    char *str2="hellohere";

    char *dup_q;
    
    dup_q = duplicate(str2);
    printf("dup_q is at :%p \n", dup_q);
/*
    strcpy(str1,str2);
    strcpy(str11,str2);

    puts(str1);
    puts(str11);

    printf("str2 address: %p\n",str2);

    printf("str1 address: %p\n",str1);
    printf("str11 address: %p\n",str11);
*/

/*
    strcat(str1,str2);
    strcat(str11,str2);
    strcat(ustr1,str2);

    puts(str1);
    puts(str11);
    puts(ustr1);

    printf("str2 address: %p\n",str2);

    printf("ustr1 address: %p\n",ustr1);
    printf("str1 address: %p\n",str1);
    printf("str11 address: %p\n",str11);
*/
    /*
    printf(" len is : %d\n",strlen(str2));
    */

    
}
