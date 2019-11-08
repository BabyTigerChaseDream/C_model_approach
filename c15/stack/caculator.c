
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>

#include "stack.h"


int caculator(int operand1, int operand2, char operator) 
{
    int result;
    
    switch(operator)
    {
        case '+':
           result = operand1 + operand2;
           break;
        case '-':
           result = operand1 - operand2;
           break;
        case '*':
           result = operand1 * operand2;
           break;
        case '/':
           result = operand1 / operand2;
           break;
        default:
           exit(EXIT_FAILURE);
    }

    return result;
}

void main(void)
{
    char ch;
    int result, operand1, operand2;
    
    printf("Enter an RPN expression :");
    while( ch=getchar() )
    {
        if (ch == ' ')
            continue;

        if ( (ch <= '9') && (ch >= '0') ) {
            // ch = ch- '0';
            printf("push %d\n", ch-'0');
            push(ch-'0');
        } 
        else if (isoperator(ch))
        {
             // pop 2 operands
             operand2 = pop();
             operand1 = pop();

             result = caculator(operand1,operand2,ch);
             push(result);
             
        }else if (ch == '='){
            printf(" === ");
            result = pop();
            printf("result is : %d \n", result);
        }
        else{
            printf("Ends\n");
            return ;
        }
    }
}
