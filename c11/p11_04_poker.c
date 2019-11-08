/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* poker.c (Chapter 10, page 233) */
/* Classifies a poker hand */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
/* prototypes */
void read_cards(int *num_in_rank, int *num_in_suit);
void analyze_hand(int *num_in_rank, int *num_in_suit, 
            bool *pstraight, bool *pflush, bool *pfour, 
            bool *pthree, int *ppairs);
void print_result( bool *pstraight, bool *pflush, bool *pfour, 
            bool *pthree, int *ppairs);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{

  int num_in_rank[NUM_RANKS];
  int num_in_suit[NUM_SUITS];
  int pairs = 0;   /* can be 0, 1, or 2 */
  bool straight = false, flush = false, four = false, three = false;

  for (;;) {
    straight = false; flush = false; four = false; three = false; pairs = 0;
    read_cards(&num_in_rank[0], &num_in_suit[0]);
    analyze_hand(&num_in_rank[0], &num_in_suit[0], &straight, &flush, &four, &three, &pairs);
    print_result(&straight, &flush, &four, &three, &pairs);
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(int *num_in_rank, int *num_in_suit)
{
  bool card_exists[NUM_RANKS][NUM_SUITS];
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for (rank = 0; rank < NUM_RANKS; rank++) {
    *(num_in_rank+rank) = 0;
    for (suit = 0; suit < NUM_SUITS; suit++)
      card_exists[rank][suit] = false;
  }

  for (suit = 0; suit < NUM_SUITS; suit++){
    *(num_in_suit+suit) = 0;
    
  }

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (card_exists[rank][suit])
      printf("Duplicate card; ignored.\n");
    else {
      //*(num_in_rank+rank) = *(num_in_rank+rank) +1;
      (*(num_in_rank+rank))++; 
      *(num_in_suit+suit) = *(num_in_suit+suit) +1;
      card_exists[rank][suit] = true;
      cards_read++;
    }
  }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(int *num_in_rank, int *num_in_suit, 
            bool *pstraight, bool *pflush, bool *pfour, 
            bool *pthree, int *ppairs)
{
  int num_consec = 0;
  int rank, suit;


  /* check for flush */
  for (suit = 0; suit < NUM_SUITS; suit++)
    if ( *(num_in_suit+suit) == NUM_CARDS)
      *pflush = true;

  /* check for straight */
  rank = 0;
  while ( *(num_in_rank+rank) == 0) rank++;
  for (; rank < NUM_RANKS && *(num_in_rank+rank) > 0; rank++)
    num_consec++;
  if (num_consec == NUM_CARDS) {
    *pstraight = true;
    return;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (rank = 0; rank < NUM_RANKS; rank++) {
    if (*(num_in_rank+rank) == 4) *pfour = true;
    if (*(num_in_rank+rank) == 3) *pthree = true;
    if (*(num_in_rank+rank) == 2) *ppairs++;
  }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(bool *pstraight, bool *pflush, bool *pfour, bool *pthree, int *ppairs)
{
  if (*pstraight && *pflush) printf("Straight flush");
  else if (*pfour)         printf("Four of a kind");
  else if (*pthree &&
           *ppairs == 1)   printf("Full house");
  else if (*pflush)        printf("Flush");
  else if (*pstraight)     printf("Straight");
  else if (*pthree)        printf("Three of a kind");
  else if (*ppairs == 2)   printf("Two pairs");
  else if (*ppairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}
