#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define UP 0 
#define DOWN 3 
#define LEFT 2 
#define RIGHT 1 

#define STEP 4
#define LETTER 26
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

void generate_random_walk(char walk[][10], int len)
{
    char ch;
    int i,j, next, num, delta;

    // init array 
    for (i=0;i<len;i++)
    {
        for (j=0;j<10;j++)
        {
            array[i][j] = '.';
        }
    }
    
    // generate random number
    srand((unsigned) time(NULL) );

    for (i=0,j=0,ch='A',num=1; num<=100;num++)
    {

        next = rand() % STEP; 

        if (array[i][j] == '.')
        {
            array[i][j] = ch;
        }else{
            next = 3-next;
        }
        
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
    
}
void print_array(char walk[][10], int len)
{
    int i,j;
    // print array 
    for (i=0;i<len;i++)
    {
        for (j=0;j<10;j++)
        {
            printf("%3c",walk[i][j]);
        }
        printf("\n");
    }
}
