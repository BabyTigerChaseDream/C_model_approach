#include<stdio.h>
void main(void)
{
    int sum = 0;
    
    char ch;

    while ( (ch=getchar()) != '\n')
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum += 1;
            break;
        }
    }

    printf("Total vowels : %d", sum);

}
