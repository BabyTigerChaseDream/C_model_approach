#include<stdio.h>
int main(void){
    int height, length, width, volumn,weight;

    printf("uninit: h,l,wid,v,wei: %d,%d,%d,%d,%d\n",height, length, width, volumn,weight);
    height = 8;
    length = 12;
    width = 10;
    volumn = height*length*width;
    weight=volumn/166;
    //weight=(volumn+165)/166;

    printf("Dimension: %dx%dx%d\n", length,width,height);
    printf("Volumn (cubic inches) : %d\n",volumn);
    printf("Dimensional weight (pounds): %d\n", weight);


}
