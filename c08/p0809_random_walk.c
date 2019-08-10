#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define UP 0 
#define DOWN 1 
#define LEFT 2 
#define RIGHT 3 

#define STEP 4
#define LETTER 26

void main(void)
{
    char array[10][10], ch;
    int i,j, next, num, delta;

    // init array 
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            array[i][j] = '.';
        }
    }
    
    srand((unsigned) time(NULL) );

    for (i=0,j=0,ch='A',num=1; num<=100;num++)
    {
        if (array[i][j] == '.')
        {
            array[i][j] = ch;
        }else{
            break;
        }

        
        next = rand() % STEP; 
        switch(next)
        {
            case UP:
                i=i-1;
                if (i<0)
                    break;
            break;

            case DOWN:
                i=i+1;
                if (i>9)
                    break;
            break;

            case LEFT:
                j=j-1;
                if(j<0)
                    break;
            break;

            case RIGHT:
                j=j+1;
                if(j>10)
                    break;
            break;
        }
        
        delta = num %  LETTER;

        ch = 'A' + delta;
    }
    
    // print array 
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            printf("%3c",array[i][j]);
        }
        printf("\n");
    }
}
