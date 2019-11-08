#include<stdio.h>
#include<ctype.h>

int compute_scrabble_value(const char *word)
{
    char ch;
    int sum=0;
     while ( ch=*word++ )
    {
        switch(toupper(ch))
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
     return sum;
}

void main(int argc, char **argv)
{
    int i, sum = 0;

    for (i=1; i< argc; i++)
    {
        sum = compute_scrabble_value(argv[i]);
        printf("Scrabble value of %s is : %d\n",argv[i], sum);
    }
}
