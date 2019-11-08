#include<stdio.h>

#define MAX_N 4 

void init_2_dimen_array(int *a, int n);

void main(void)
{
    int a[MAX_N][MAX_N];
    
    // print array pointer 
    int i=0,j=0;

    for(i=0; i<MAX_N; i++)
        for(j=0; j<MAX_N; j++)
            printf("a[%d][%d] = %p \n",i,j,&a[i][j]);
        printf("\n");

    init_2_dimen_array(&a[0][0], MAX_N);
    //init_2_dimen_array(&a[0], MAX_N);
    
    printf("Arrays: \n");
    for(i=0; i<MAX_N; i++)
        for(j=0; j<MAX_N; j++)
            printf("a[%d][%d] = %x \n",i,j,a[i][j]);
        printf("\n");
}

void init_2_dimen_array(int *a, int n)
{
   int *p;
   int counter = n;
    
   for(p=a; p<a+n*n; p++)
   {
        if (counter == n)
        {
            *p = 1;
            counter =0;
        }
        else
        {
            *p = 0;
            counter ++;
        }
   }
}
