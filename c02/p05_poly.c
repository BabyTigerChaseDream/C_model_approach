#include <stdio.h>

int addfunc(int x)
{
    
    printf("x : %d",x);
    int sum = (3 * (x * x * x * x * x)
                 + (2 * (x * x * x * x))
                 - (5 * (x * x * x))
                 - (x * x)
                 + (7 * x)
                 - 6);
    
    return sum ;
}

int polyfunc(int x)
{
    
    printf("\nx : %d",x);

    int polysum ;
    polysum = ((((3*x +2)*x-5)*x -1)*x +7)*x -6; 
    return polysum; 
}

int main(void)
{
    int x , addsum, polysum;
    printf("Enter a value: ");
    scanf("%d", &x);

    addsum = addfunc(x);
    printf("\nadd  result: %d", addsum);
    
    polysum= polyfunc(x);
    printf("\npoly result: %d", polysum);
    return 0;
}

