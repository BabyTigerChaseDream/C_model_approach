/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* deal.c (Chapter 8, page 173) */
/* Deals a random hand of cards */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  int r_rank, r_suite;
  const char *rank_code[] = 
    {
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirty",
        "fourty"
    };

  const char *suit_code[] = 
    {
        "clubs",
        "diamonds",
        "hearts",
        "spades"
    };

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:");
  while (num_cards > 0) {
    r_suite= rand();
    suit = r_suite % NUM_SUITS;     /* picks a random suit */
    //printf("\tRand suite is : %d\n", r_suite);

    r_rank= rand();
    rank = r_rank % NUM_RANKS;
    //printf("\tRand rank is : %d\n", r_rank);

    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %s of %s\n", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");

  return 0;
}
