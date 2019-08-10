#include<stdio.h>
#include<ctype.h>

void main(void)
{
    char ch;
    float num=0, length=0;
    float ave_length;

    while(getchar() == ' ');
    
    // init value 
    num ++;
    length++;
    
    while( (ch=getchar()) != '\n')
    {
        switch(ch)
        {
            case ' ':
                num++;
            break;

            default:
                length++;
            break;

        }
        
    }
    ave_length =length/num;

    printf(" num: %f , lenght: %f",num, length);

    printf(" ave_length: %.2f",ave_length);
}
