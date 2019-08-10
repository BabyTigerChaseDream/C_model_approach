#include<stdio.h>
#include<ctype.h>

void main(void)
{
    int i, letter_num[26];
    char ch, startCh = 'A';
    
    // init array
    for (ch=startCh; ch<'Z'; ch++)
    {
        switch(ch)
        {
            case 'A': case 'E': case 'I':case 'L':case 'N':case 'O':
            case 'R':case 'S':case 'T':case 'U':
                letter_num[ch-'A'] = 1;
                break;
            case 'D': case 'G':
                letter_num[ch-'A'] = 2;
                break;
            case 'B': case 'C': 
            case 'M':case 'P':
                letter_num[ch-'A'] = 3;
                break;
            case 'F': case 'H': case 'V':
            case 'W': case 'Y':
                letter_num[ch-'A'] = 4;
                break;
            case 'K':
                letter_num[ch-'A'] = 5;
                break;
            case 'J': case 'X':
                letter_num[ch-'A'] = 8;
                break;
            case 'Q': case 'Z':
                letter_num[ch-'A'] = 10;
                break;
            default:
                break;

        }
    }
    
    int sum = 0;
    printf("Please enter letters: ");
    while((ch=getchar()) != '\n')
    {
        sum += letter_num[toupper(ch)-'A'];
    }

    printf("sum is %d \n", sum);
    
}
