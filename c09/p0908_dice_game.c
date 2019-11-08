#include<stdio.h>

int main(void)
{
    int wins = 0, losses = 0;
    char ch;
    srand((unsigned) time(NULL));
    
    do {
        printf("\n");
        if (play_game()) {
            wins++;
            printf("You win!\n");
        } else {
            losses++;
            printf("You lose!\n");
        }

        printf("\nPlay again? (y/n) ");
        scanf(" %c", &ch); 
    } while (toupper(ch) == 'Y');

    printf("\nWins: %d\tLosses: %d", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int roll1,roll2;

    roll1 = (rand() % 6) +1;
    roll2 = (rand() % 6) +1;

    return roll1+roll2;
}

bool play_game(void)
{
    int roll = roll_dice();
    int current_point = roll;

    printf("You rolled: %d\n", roll);

    if (roll == 7) || (roll == 11)
        return true;
    else if (roll == 2) || (roll == 3)
        return false;
    else
        printf("Your point is :%d", roll);

    while(true){
        roll =  roll_dice();

        if (roll == current_point)
            return true;
        else if (roll == 7)
            return false;
    }
}
