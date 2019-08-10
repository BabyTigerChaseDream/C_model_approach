#include<stdio.h>
void main(void)
{
    int i = 10;
    
    printf("*********\n");
    while (i>0) {
        printf("while(i--) T minus %d and counting \n",i);
        i--;

    }

    printf("*********\n");
    i = 10;

    while (i>0) {
        printf("while(--i) T minus %d and counting \n",i);
        --i;

    }    

    i = 10;
    printf("*********\n");
    for (i=10; i>0; i--){
        printf("for(i--) T minus %d and counting \n",i);
    }

    printf("*********\n");
    i = 10;
    for (i=10; i>0; --i){
        printf("for(--i) T minus %d and counting \n",i);
    }    
}
