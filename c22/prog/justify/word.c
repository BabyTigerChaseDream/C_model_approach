/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* word.c (Chapter 15, page 363) */

#include <stdio.h>
#include "word.h"

int read_char(FILE *fdIn)
{
  int ch = getc(fdIn);

  if (ch == '\n' || ch == '\t')
    return ' ';
  return ch;
}

/* 
 * original readword version 
void read_word(char *word, int len)
{
  int ch, pos = 0;

  while ((ch = read_char()) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    // why not skip the part below , once exceeds amx_len
    // assign "end of string" to word
    ch = read_char();
  }
  word[pos] = '\0';
}
*/

/*
void read_word(char *word, int len)
{
  int ch, pos = 0;

  while ((ch = read_char()) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    else
    {
        word[pos-1]= '*';
        pos++;
        break;
    }
    // why not skip the part below , once exceeds amx_len
    // assign "end of string" to word
    ch = read_char();
  }
  word[pos] = '\0';
}
*/

void read_word(char *word, int len, FILE *fdIn)
{
  int ch, pos = 0;

  while ((ch = read_char(fdIn)) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    else
    {
        word[pos-1]= '*';
        pos++;
        break;
    }
    // why not skip the part below , once exceeds amx_len
    // assign "end of string" to word
    ch = read_char(fdIn);
  }
  word[pos] = '\0';
}
