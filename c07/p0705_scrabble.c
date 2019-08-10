#include<stdio.h>
#include<ctype.h>
void main(void)
{
    char num ;
    int sum = 0;
    printf("Please Enter word: \n");
    
    
    while ((num=getchar()) != '\n')
    //while ((num=getchar()) != EOF)
    {
        switch(toupper(num))
        {
            case 'A': case 'E': case 'I':case 'L':case 'N':case 'O':
            case 'R':case 'S':case 'T':case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': 
            case 'M':case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V':
            case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default:
                break;
    
        }
    }

    printf("Scrabble value: %d",sum);
}
