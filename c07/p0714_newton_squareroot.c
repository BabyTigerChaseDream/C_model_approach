#include<stdio.h>
#include<math.h>

void main(void)
{
    double x, y=1.0, pre_y, ave, div;
    
    printf("Enter a positive xber:");
    scanf("%lf",&x);

    do{
        pre_y = y;
        div = x / y;
        ave = (div + y)/2;    
        y = ave;

        printf("pre_y=%lf,div=%lf,ave=%lf,y=%lf \n", 
                pre_y,div,ave,y);

    } while(fabs( pre_y - y) > 0.00001);

    printf("==>  Square root is %lf\n",y);
}
