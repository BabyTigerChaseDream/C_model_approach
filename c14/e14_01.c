#include<stdio.h>
#include<math.h>

//#define DISP(f,x) printf(#f"(%g) = (%g)\n", x, f(x))
//#define DISP2(f,x) printf(#f"(%g) = (%g)\n", x, f(x))

#define PRINT_INT(n) printf(#n"=%d\n",n+3)
#define CONCAT(n,f) n##f 

void main(void)
{
    //DISP(sqrt, 3.0);
//    DISP2(sqrt, 3.0);
    
    PRINT_INT(5);
    
    CONCAT(max,8)
}
