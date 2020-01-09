/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 15, page 364) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  if (num_words > 0) {
    line[line_len] = ' ';
    line[line_len+1] = '\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(FILE *fdOut)
{
  int extra_spaces, spaces_to_insert, i, j;

  extra_spaces = MAX_LINE_LEN - line_len;
  for (i = 0; i < line_len; i++) {
    if (line[i] != ' ')
      //putchar(line[i]);
      putc(line[i], fdOut);
    else {
      spaces_to_insert = extra_spaces / (num_words - 1);
      
      //spaces_to_insert=spaces_to_insert+2;
      
      for (j = 1; j <= spaces_to_insert + 1; j++)
        putc('  ',fdOut);
        //putchar(' ');
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
  }
  //putchar('\n');
  putc('  ',fdOut);
}

void flush_line(FILE *fd)
{
  if (line_len > 0)
    fputs(line, fd);
}
