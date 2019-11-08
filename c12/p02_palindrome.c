#include<stdio.h>

#define MAX_LEN 80

/*
// 
void main(void)
{
    int r, l, inx=0, i=0;
    
    char arr[MAX_LEN], ch;

    printf("Enter a message: >>>");
    
    while( (ch=getchar()) != '\n')
    {
       arr[inx++] = ch;
    }

    l=0;
    r = inx -1;
    
    for(i=0; i<inx/2; i++)
    {
       if( arr[l] != arr[r])
       {
           printf("NOT Palindrome !\n");  
           break;
       }

       l++;
       r--;
    }

    if (i>=inx/2)
       printf(" Palindrome !\n");  

}
*/

void main(void)
{
    int inx=0, i=0;
    
    char arr[MAX_LEN], ch, *pl, *pr;

    printf("Enter a message: >>>");
    
    while( (ch=getchar()) != '\n')
    {
       arr[inx++] = ch;
    }
    
    for(pl = arr, pr = arr+inx-1; pl < pr; pl++,pr--)
    {
       if( *pl != *pr)
       {
           printf("NOT Palindrome !\n");  
           break;
       }

    }

    if (pl >= pr) 
       printf(" Palindrome !\n");  

}
