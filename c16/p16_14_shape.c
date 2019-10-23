#include<stdio.h>

#define PI 3.1415
#define RECT 1
#define CIRCLE 2

struct point {int x, y;};

struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

float compute_area(struct shape s)
{
    float area;

    int shape_kind = s.shape_kind;

    switch(shape_kind)
    {
        case RECT:
            area = s.u.rectangle.height * s.u.rectangle.width;
        break;

        case CIRCLE:
            area = PI*s.u.circle.radius * s.u.circle.radius;
        break;
        default:
            printf("Unknown shape \n");
            area = 0;
        break;

    }

    return area;
}

struct shape shift_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale_shape(struct shape s, double scale)
{
    int shape_kind = s.shape_kind;

    switch(shape_kind)
    {
        case RECT:
            s.u.rectangle.height *= scale ;
            s.u.rectangle.width *= scale ;
        break;

        case CIRCLE:
            s.u.circle.radius *=scale;
        break;
        default:
            printf("Unknown shape \n");
        break;

    }
    
    return s;
}

void main(void)
{
    s.shape_kind = CIRCLE;
    s.u.circle.radius = 5;
    printf("Area of circle with radius %d: %.2f\n", s.u.circle.radius,
            compute_area(s));

    s.shape_kind = RECT;
    s.center.x = 12;
    s.center.y = 20;
    s.u.rectangle.height = 5;
    s.u.rectangle.width = 10;
    printf("Center of rectangle: %d,%d\n", s.center.x, s.center.y);
    printf("Area of rectangle with height %d and width %d: %.0f\n", 
            s.u.rectangle.height, s.u.rectangle.width, compute_area(s));

    s = shift_shape(s, 5, 10);
    printf("Center of shifted rectangle: %d,%d\n", s.center.x,
            s.center.y);

    s.shape_kind = CIRCLE;
    s.u.circle.radius = 5;
    s = scale_shape(s, 1.5);
    printf("Circle new radius after scaled by 1.5: %d\n", s.u.circle.radius);
}
