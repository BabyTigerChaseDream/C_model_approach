#include<stdio.h>
void main(void)
{
    int days, start;
    int i;

    printf("Enter num of days in month");
    scanf("%d",&days);

    printf("Enter starting days of the week");
    scanf("%d",&start);

    for (i=1; i<start; i++)
    {
        printf(" ");
    }

    for (i=1; i<=days; i++)
    {
        printf("%3d ",i);
        if ( (start+i)%7 == 1)
            printf("\n");
    }

}
