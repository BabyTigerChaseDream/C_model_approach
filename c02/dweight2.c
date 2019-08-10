#include<stdio.h>
int main(void){
    int height, length, width, volumn,weight;

    printf("uninit: h,l,wid,v,wei: %d,%d,%d,%d,%d\n",height, length, width, volumn,weight);

    printf("Input height:");
    scanf("%d",&height);

    printf("Input length:");
    scanf("%d",&length);

    printf("Input width:");
    scanf("%d",&width);

    volumn = height*length*width;
    weight=volumn/166;
    //weight=(volumn+165)/166;

    printf("Dimension: %dx%dx%d\n", length,width,height);
    printf("Volumn (cubic inches) : %d\n",volumn);
    printf("Dimensional weight (pounds): %d\n", weight);


}
