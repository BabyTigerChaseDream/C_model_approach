#include<stdio.h>

// fraction format: numerator / denominator 
struct color{
    int red;
    int green;
    int blue;
};

//const struct color MAGENTA = {255, 0, 255}; 
const struct color MAGENTA = {.red=255, .blue=255}; 

void main(void)
{
    printf("color is :%3d/%.3d/%3d\n", MAGENTA.red,MAGENTA.green,MAGENTA.blue );
}
