#include<stdio.h>
#include<stdlib.h>

double median(double x, double y, double z)
{
    double mid;
    if (x <= y){
        if (y <= z){
            mid = y;
        }else{
            mid = x>=z ? x:z;
        }
    }else{
        if (y >= z){
            mid = y;
        }else{
            mid = x<=z ? x:z;
        }
    } 
    return mid;
    //exit(0);
}
