#include<stdio.h>
#include<stdlib.h>

struct point {int x, y;};

struct rectangle {struct point upper_left, lower_right;};

struct rectangle *p;

void main(void)
{
    p = malloc(sizeof(struct point));
    if(p == NULL)
        exit(EXIT_FAILURE);

    p->upper_left.x =10;
    p->upper_left.y =25;

    p->lower_right.x =20;
    p->lower_right.y =15;

    printf("upper_left: x( %d ) , y ( %d ) \n",
            p->upper_left.x, p->upper_left.y);

    printf("lower_right: x( %d ) , y ( %d ) \n",
            p->lower_right.x, p->lower_right.y);
}
