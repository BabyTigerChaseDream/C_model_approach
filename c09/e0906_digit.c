#include<stdio.h>
/*
int digit(int n,int p);

int main(void)
{
    printf("%d has digit: %d \n", 20928, digit(20928, 3));
    printf("%d has digit: %d \n", 19860925, digit(19860925, 5));
    printf("%d has digit: %d \n", 0, digit(0, 3));
}

int digit(int n, int p)
{
    int num, i=0;
    
    while(n>0)
    {
        num = n % 10; 
        n=n/10;
        i++;
        if (i==p)
            return num;
    }

    return 0;
}
*/

/* Cool logic in standard solution *
 */

int digit(int n, int k)
{
    int i;
    for (i=1; i<k; i++)
        n/ = 10;
    return n %10;
}

