/*
#include<stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char oper;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d /%d,%d /%d", &num1, &denom1, &num2, &denom2);
    
    printf("Input + - * /");
    oper = getchar();

    switch(oper)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 + denom2;
            printf("The sum is %d/%d\n", result_num, result_denom);
        break;

        case '-':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 - denom2;
            printf("The sub is %d/%d\n", result_num, result_denom);
        break;

        case '*':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The multiply is %d/%d\n", result_num, result_denom);
        break;

        case '/':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 / denom2;
            printf("The devide is %d/%d\n", result_num, result_denom);
        break;

        default:
            printf("unrecognized oper\n");
    }

    return 0;
}
*/

/* Using non-const in case label */
#include<stdio.h> 
int main() 
{ 
  int i = 10; 
  int c = 10; 
  switch(c)  
  { 
    case i: // not a "const int" expression 
         printf("Value of c = %d", c); 
         break; 
    /*Some more cases */
                     
  } 
  return 0; 
} 
