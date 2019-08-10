#include<stdio.h>
void main(){
    int i,j,k;

    //(a) 
    i = 3; j = 4; k = 5;
    printf("(a)");
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);

    //(b) 
    i = 7; j = 8; k = 9;
    printf("(b)");
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
    
    //(c) 
    i = 7; j = 8; k = 9;
    printf("(c)");
    printf("%d ", (i = j) || (j - k));
    printf("%d %d %d", i, j, k);

    //(d) 
    i = 1; j = 1; k = 1;
    printf("(d)");
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
}
