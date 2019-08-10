#include<stdio.h>

#define PI 3.14159f
// #define FRAC 4.0f/3.0f
#define FRAC 4.0/3.0

void main(void)
{
   float radius, vol; 
   printf("Input radius : ");
   scanf("%f",&radius);
   vol=PI * FRAC * radius*radius*radius;
   printf("vol: %f",vol);
}
