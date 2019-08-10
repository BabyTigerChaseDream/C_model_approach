#include<stdio.h>
void main(void)
{
    int i, n=0, sum=0;
    printf("while starts:");
    while(n<10){
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++;
    }
    printf("while n is %d",n);

printf("for starts:");
    n=0, sum=0;
    for(n=0; n<10; n++){
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
    }
    printf("for starts:");
    printf("for n is %d",n);
}
