#include<stdio.h>
void main(void)
{
    int d;
    char commmand;

    printf("Enter interger:");
    scanf("%d", &d);

    printf("Enter commands :");
    commmand = getchar();    


    printf("Result is :");
    printf("d is %d\n", d);
    printf("commmand is %c\n", commmand);

}
