#include<stdio.h>

#define MAXLEN 80

/*
// 
void main(void)
{
    int r, l, inx=0, i=0;
    
    char arr[MAXLEN], ch;

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

/* chapter 12 / p02 
void main(void)
{
    int inx=0, i=0;
    
    char arr[MAXLEN], ch, *pl, *pr;

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
*/

/* 
 * chapter 13 / pointer 
 * */

#include<stdbool.h>
//bool is_palindrome(const char *message)
//{
//    /* 
//    without "const" keyword , compile reports error:
//        " p13_17_palindrome.c:79:11: warning: assignment discards ‘const’ qualifier 
//        from pointer target type [-Wdiscarded-qualifiers]
//        start = message; "
//        because it assigned const char to "none" const char (2 char * points to same area)
//        which means data pointed by this pointer can be changed
//        Doesn't follow "const" rule of message 
//        */
//     
//    const char *start, *end;
//
//    start = message;
//
//    while(*message)
//        message++;
//    end = message;
//
//    for (;start<end; start++, end--)
//        if(*start != *end)
//            return false;
//    return true;
//}
//
//void main(void)
//{
//   char message[MAXLEN];
//
//   fgets(message, MAXLEN, stdin);
//   printf("is_palindrome ?  %s \n", is_palindrome(message) ? "YES":"NO");
//
//}

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define N 50

bool is_palindrome(const char *message);

int main(void)
{
    char message[N+1];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin); 
    if (message[strlen(message)-1] == '\n') {
        message[strlen(message)-1] = '\0';
    }
    printf("%spalindrome", is_palindrome(message) ? "" : "Not a ");
    return 0;
}

bool is_palindrome(const char *message)
{
    const char *left = message;
    while (*message) {
        message++;
    }
    const char *right = --message;

    for (; left < right; left++, right--) {
        if (!(*left == *right))
            return false;
    }
    return true;
}
