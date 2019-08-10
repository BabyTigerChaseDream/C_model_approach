/*
#include <stdio.h>

// Compile using C99 or C11 standards, otherwise %zu format won't work 
int main (void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    typedef int8_t Int8;
    typedef int16_t Int16;
    typedef int32_t Int32;

    printf("Size of int8: %zu byte (%zu bits).\n", sizeof(Int8), sizeof(Int8) * 8);
    printf("Size of int16: %zu bytes (%zu bits).\n", sizeof(Int16), sizeof(Int16) * 8);
    printf("Size of int32: %zu bytes (%zu bits).\n", sizeof(Int32), sizeof(Int32) * 8);

    return 0;
}
