/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* justify.c (Chapter 15, page 363) */
/* Formats a file of text */

#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

char *nameIn = "justin.txt";
char *nameOut = "justout.txt";

FILE *fdIn, *fdOut;

int main(void)
{
  char word[MAX_WORD_LEN+2];
  int word_len;

  // open file
  fdIn = fopen(nameIn,"r");
  if (fdIn == NULL)
  {
      printf("fdIn cannot open\n");
      exit(EXIT_FAILURE);
  }

  fdOut = fopen(nameOut,"w");
  if (fdOut == NULL)
  {
      printf("fdOut cannot open\n");
      exit(EXIT_FAILURE);
  }

  clear_line();
  for (;;) {
    read_word(word, MAX_WORD_LEN+1,fdIn);
    word_len = strlen(word);
    if (word_len == 0) {
      flush_line(fdOut);
      return 0;
    }
    if (word_len > MAX_WORD_LEN)
      word[MAX_WORD_LEN] = '*';
    if (word_len + 1 > space_remaining()) {
      write_line(fdOut);
      clear_line();
    }
    add_word(word);
  }
}
