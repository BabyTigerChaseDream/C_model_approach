#include<stdio.h>
void main(void){
    int num = 4;
    switch(num){
        case 1:
            printf("1");
        /* no error reported in below case branch
         * even thou they are not defined*/
        defualt:
            printf("2");
        name:
            printf("kkk");
    
    }
}
