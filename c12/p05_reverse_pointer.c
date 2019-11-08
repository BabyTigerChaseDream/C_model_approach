#include<stdio.h>

// algo refer here : https://www.geeksforgeeks.org/reverse-words-in-a-given-string/

#define MAX_LEN 20

void main(void)
{
    char *p, *w, arr[MAX_LEN], ch, term;
    int n=0, wc=0;
    
    printf("Enter a sentence: \n");

    while ( ((ch=getchar()) != '?') && (n<MAX_LEN) )
    {
        arr[n++] = ch;
    }
    
    term =  ch;
    printf("last char: %c",term);

    p = arr;
    printf("Reversal a sentence: \n");
    
    for(p = arr+n-1; p>=arr; p--)
    {
        if(*p != ' ')
        {
            wc++;
        }
        else
        {
            while(wc)
            {
                printf("%c",*(p+wc) );
                wc --;
            }
        }
    }

    printf("%c",term);
    
}
