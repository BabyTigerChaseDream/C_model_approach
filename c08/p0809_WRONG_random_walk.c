#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* WRONG WRONG WRONG implementation 
#define UP 0 
#define DOWN 3 
#define LEFT 2 
#define RIGHT 1 

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

*/
 
// RIGHT ONE BELOW:
// https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch08/Projects/09.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_ROWS 10
#define NUM_COLS 10
#define EMPTY_CELL '.'

#define NUM_MOVES 4
#define LEFT 0
#define DOWN 1
#define UP 2
#define RIGHT 3

int main(void)
{
    char grid[NUM_ROWS][NUM_COLS], letter;
    bool potential_move[NUM_MOVES];
    int i, row, col, potential_move_count, generated_move;

    srand((unsigned) time(NULL));

    /* Populate the grid with '.' */
    for (row = 0; row < NUM_ROWS; row++) {
        for (col = 0; col < NUM_COLS; col++) {
            grid[row][col] = '.';
        }
    }

    /* Perform alphabet trail through grid cells */
    row = 0; col = 0;
    for (letter = 'A'; letter <= 'Z'; letter++) {

        grid[row][col] = letter;

        /* Reset potential_move array and count for current cell */
        for (i = 0; i < NUM_MOVES; potential_move[i] = false, i++)
            ; /* empty loop body */
        potential_move_count = 0;

        /* Find all potential moves from the current cell */
        if (col-1 >= 0 && grid[row][col-1] == EMPTY_CELL) {
            potential_move[LEFT] = true;
            potential_move_count++;
        }
        if (row+1 < NUM_ROWS && grid[row+1][col] == EMPTY_CELL) {
            potential_move[DOWN] = true;
            potential_move_count++;
        }
        if (row-1 >= 0 && grid[row-1][col] == EMPTY_CELL) {
            potential_move[UP] = true;
            potential_move_count++;
        }
        if (col+1 < NUM_COLS && grid[row][col+1] == EMPTY_CELL) {
            potential_move[RIGHT] = true;
            potential_move_count++;
        }

        /* Break if no moves are possible from current cell */
        if (potential_move_count == 0)
            break;

        /* Generate random moves until one matches a potential move, then perform 
         * move */
        while (true) {
            generated_move = rand() % NUM_MOVES;

            if (potential_move[generated_move] == true) {
                switch(generated_move) {
                    case LEFT:  col--;
                                break;
                    case DOWN:  row++;
                                break;
                    case UP:    row--;
                                break;
                    case RIGHT: col++;
                                break;
                }
                break;    /* generated move performed, break */
            } else {
                continue; /* generated move not possible, continue */
            }
        }
    }
             
    /* Print the final grid state */
    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            printf("%2c", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}
