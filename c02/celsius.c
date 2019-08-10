#include <stdio.h>

#define FREEZEING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Input fahrenheit temp:");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-FREEZEING_PT) * SCALE_FACTOR;

    printf("celsius equivalent: %.1f\n", celsius);
    return 0;
}
