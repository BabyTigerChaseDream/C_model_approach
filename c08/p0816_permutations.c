#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

void main(void)
{
    int i, letter_counter[26] ={0};
    char ch, std_array[20], my_array[20];
    bool prematurate = true;

    printf("Enter standard string:");
    
    i=0;
    while( (ch=getchar()) != '\n' && i<20) 
    {
       std_array[i++] = ch; 

       if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
           letter_counter[ch-'a'] ++;
    }
    
    printf("Enter my string:");
    i=0;
    while( (ch=getchar()) != '\n' && i<20) 
    {
       my_array[i++] = ch; 
       if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
           letter_counter[ch-'a'] -- ;
    }
    
    for(i=0; i<26; i++)
    {
        if (letter_counter[i] != 0)
        {
            prematurate = false;
            break;
        }
    }
    
    if (prematurate)
        printf("Strings permaturate\n");
    else 
        printf("Strings not permaturate\n");
}

