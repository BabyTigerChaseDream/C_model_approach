#include<stdio.h>

struct pinball_machine{
    char name[40+1];
    int year;
    enum {EM, SS} ;
    //enum {EM, SS} type;
    int players;
};

/*
struct {
    char name[40+1];
    int year;
    enum {E, S} type;
    int players;
}_pinball_machine;
*/

void main(void)
{
}
