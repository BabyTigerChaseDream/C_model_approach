#include<stdio.h>
#include<stdbool.h>

// fraction format: numerator / denominator 
struct color{
    int red;
    int green;
    int blue;
};

//const struct color MAGENTA = {255, 0, 255}; 
const struct color MAGENTA = {.red=255, .blue=255}; 

struct color make_color(int red, int green, int blue)
{
    struct color c ;

    if (red >255)
        c.red = 255;
    else if (red < 0)
        c.red = 0;
    else 
        c.red = red;


    if (green >255)
        c.green = 255;
    else if (green < 0)
        c.green = 0;
    else 
        c.green = green;

    if (blue >255)
        c.blue = 255;
    else if (blue < 0)
        c.blue = 0;
    else 
        c.blue = blue;

    return c;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return (color1.red == color2.red) && 
            (color1.green == color2.green) &&
            (color1.blue == color2.blue);
}

#define RANGE03(x) ( (x)>0 && (x)<3 )
#define BRT(x) (int)((x)/0.7)
struct color brighter(struct color c)
{
    if (c.red ==0 && c.green ==0 && c.blue == 0)
        c.red =c.green = c.blue = 3;

    c.red = RANGE03(c.red) ? BRT(3) :BRT(c.red); 
    c.green = RANGE03(c.green) ? BRT(3) :BRT(c.green); 
    c.blue = RANGE03(c.blue) ? BRT(3) :BRT(c.blue); 

    c.red =  c.red > 255 ? 255:c.red; 
    c.green =  c.green > 255 ? 255:c.green; 
    c.blue =  c.blue > 255 ? 255:c.blue; 

    return c;
}

#define DK(x) (int)((x)*0.7)
struct color darker(struct color c)
{
    c.red = DK(c.red); 
    c.green = DK(c.green); 
    c.blue = DK(c.blue); 

    return c;
}
void main(void)
{
    struct color c1 = make_color(255, 0, 255);
    struct color c2 = make_color(255, 0, 0);
    struct color c3 = make_color(2, 1, 2);
    struct color brc3 = brighter(c3);
    struct color dac3 = darker(c3);
    printf("struct c1 red value: %d\n", getRed(c1));
    printf("Is struct c1 equal to struct c2?: %d\n", equal_color(c1, c2));
    printf("Brightened struct c3: %d,%d,%d\n", brc3.red, brc3.green, brc3.blue);
    printf("Darkened struct c3: %d,%d,%d\n", dac3.red, dac3.green, dac3.blue);

}

