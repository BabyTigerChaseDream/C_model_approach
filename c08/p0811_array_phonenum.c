#include<stdio.h>
void main(void)
{
    char num = 'Q';
    char num_array[15];
    int i; 

    printf("Please Enter phone number: \n");

    for(i=0; (i<15) && ((num=getchar()) != EOF) ; i++)
    {
        num_array[i] = num;
    }
    for (i=0; i<15; i++)
    {
        num = num_array[i];
        //printf("num is %c",num);
        switch(num)
        {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'R': case 'S':
                printf("7");
                break;
            case 'T': case 'V': case 'U':
                printf("8");
                break;
            case 'W': case 'X': case 'Y':
                printf("9");
                break;
            default:
                printf("%c", num);
    
        }
    }
}
