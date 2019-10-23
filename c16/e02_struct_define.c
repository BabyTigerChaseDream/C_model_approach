#include<stdio.h>
/*
// a) 
struct {
    double real,imaginary;
    //double imaginary;
} c1,c2,c3;

// b) 
void main(void){
    struct {
        double real,imaginary;
        //double imaginary;
    } c1 = {.real=0.0, .imaginary=1.0},
        c2 = {.real=5.0},
        //c2 = {.real=1.0, .imaginary=0.0},
        c3;
    printf("Before copy c1 -> c2");
    printf("\nc1.real=%f;c1.imaginary=%f\n",c1.real,c1.imaginary);
    printf("\nc2.real=%f;c2.imaginary=%f\n",c2.real,c2.imaginary);
    printf("\nc3.real=%f;c3.imaginary=%f\n",c3.real,c3.imaginary);


    c2 = c1;
    printf("After copy c1 -> c2");
    printf("\nc1.real=%f;c1.imaginary=%f\n",c1.real,c1.imaginary);
    printf("\nc2.real=%f;c2.imaginary=%f\n",c2.real,c2.imaginary);
}
*/

struct front{
    int x;
};

struct {
    int y;
}end;

enum CH {A=7,B=7} ch; 

void main(void)
{
    struct front f;
    //struct end e;
    
    //ch x;
    enum CH x;
    printf("ch is %d\n",ch=8);
}
