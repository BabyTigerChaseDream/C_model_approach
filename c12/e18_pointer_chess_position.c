#include<stdio.h>

int evaluate_position(char *b, int l);

int main(void)
{
    char chess_board[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                              {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'p', 'p', 'p', 'p', 'B', 'p', 'p', 'p'},
                              {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

    printf("Evaluate chess positions: %d", evaluate_position(&chess_board[0][0], 8*8));
    return 0;
}

int evaluate_position(char *board, int length)
{
    char *p;
    int white_sum = 0, black_sum = 0;

    for (p=board; p < board+length; p++)
    {
        switch(*p)
        {
            case 'Q':
                white_sum +=9;
            break;
            case 'R':
                white_sum +=5;
            break;
            case 'B':
            case 'N':
                white_sum +=3;
            break;
            case 'P':
                white_sum +=1;
            break;
            case 'q':
                black_sum +=9;
            break;
            case 'r':
                black_sum +=5;
            break;
            case 'b':
            case 'n':
                black_sum +=3;
            break;
            case 'p':
                black_sum +=1;
            break;
        }
    }

    return (white_sum - black_sum );
}
