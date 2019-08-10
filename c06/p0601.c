#include<stdio.h>
void main(void)
{
    float f, fm;

    fm = 0;
    
    do{
        printf("Enter a number :");
        scanf("%f", &f);

        fm = fm >= f ? fm:f;
    }
    while(f!=0);

    printf("Max data: %f",fm);
}
