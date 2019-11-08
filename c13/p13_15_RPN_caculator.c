
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>

#define STACK_SIZE 15 

#define MAX 100 

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Expression too complex \n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("Not enough operands ! \n");
    exit(EXIT_SUCCESS);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top] ;
}

bool isoperator(char oper)
{
    switch(oper)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        //case '=':
            return true;
        default:
            return false;
    }
}

bool isoperand(int oper)
{
    if (oper <= 9 && oper >= 0)
        return true;
    else
        return false;
}

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

/*
 Newly added by using pointer 
*/
int evaluate_RPN_expression(const char *expression)
{

    char ch;
    int result, operand1, operand2;

    while( ch = *expression++ )
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
            //printf("result is : %d \n", result);
            return result;
        }
        else{
            printf("Ends\n");
            break;
        }

    }   
}

void main(void)
{
    char expression[MAX];
    int result;
    
    printf("Enter an RPN expression :");
    fgets(expression, MAX, stdin);
    result = evaluate_RPN_expression(expression);
    
    printf("result is : %d\n", result);
}
