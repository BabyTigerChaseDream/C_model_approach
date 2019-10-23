#include<stdio.h>
#include<stdbool.h>

struct point {int x, y;};

struct rectangle { struct point upper_left, lower_right;};

// help func
int compute_length(struct rectangle r)
{
    int length = r.lower_right.x-r.upper_left.x;
    return length;
}

int compute_width(struct rectangle r)
{
    int width = r.upper_left.y - r.lower_right.y;
    return width;
}

// a) area of r
int compute_area(struct rectangle r)
{
    return compute_width(r) * compute_length(r);
}

// b) center point 
struct point compute_center(struct rectangle r)
{
    struct point center;

    center.x =  r.upper_left.x + compute_length(r)/2; 
    center.y =  r.lower_right.y + compute_width(r)/2; 

    return center;
}

// c) 
struct rectangle modify_rectangle(struct rectangle r, int x, int y)
{
    struct rectangle mr;

    mr.upper_left.x = r.upper_left.x+x;
    mr.upper_left.y = r.upper_left.y+y;

    mr.lower_right.x = r.lower_right.x+x;
    mr.lower_right.y = r.lower_right.y+y;

    return mr;
}

// d) 
bool point_in_r (struct rectangle r, struct point p)
{
    return ( (p.x<=r.lower_right.x && p.x >=r.upper_left.x) &&
            (p.y<=r.upper_left.y && p.y >=r.lower_right.y));
}

void main(void)
{
    struct point upper_left = {0, 5};
    struct point lower_right = {10, 0};

    struct rectangle r1 = {upper_left, lower_right};
    printf("Area: %d\n", compute_area(r1));
    struct point center = compute_center(r1);
    printf("Center: %d,%d\n", center.x, center.y);
    struct rectangle r2 = modify_rectangle(r1, 10, 10);
    struct point center2 = compute_center(r2);
    printf("Center: %d,%d\n", center2.x, center2.y);

    struct point p1 = {15, 10};
    struct point p2 = {1, 1};
    printf("Rectangle upper left: %d,%d\n", r2.upper_left.x, r2.upper_left.y);
    printf("Rectangle lower right: %d,%d\n", r2.lower_right.x, r2.lower_right.y);
    printf("Point %d,%d is in rectangle?: %d\n", p1.x, p1.y,
            point_in_r(r2, p1));

    printf("Point %d,%d is in rectangle?: %d\n", p2.x, p2.y,
            point_in_r(r2, p2));
}
