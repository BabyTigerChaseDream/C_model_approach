#include<stdio.h>
/*
void main(void)
{
    float n, e, factorial=1.0f;

    printf("Please Enter a number:");
    scanf("%f", &n);

    if (n<=0)
        printf("none positve number : return 0");

    for (int i=1; i<=n; i++)
    {
        factorial *= i;
        e += 1.0f/factorial; 
    }

    printf("Result is : %f", e);
}

*/

// program 06/12 
void main(void)
{
    float n, e, factorial=1.0f;

    printf("Please Enter a float term:");
    scanf("%f", &n);
    
    int i = 1;

    for (int i=1; ; i++)
    //for(;;) 
    {
        factorial *= i;

        if (1.0f/factorial < n)
        {
            printf("Exceeds : %f\n",n);
            //printf("Result e is %f\n",e);
            break;
        }

        e += 1.0f/factorial; 
        printf("e is %f\n",e);
        //i++;
    }

    printf("Result is : %f\n", e);
}
