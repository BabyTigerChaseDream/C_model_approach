/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DECADE 1
#define ZERO 0

int main(int argc, char *argv[])
{
  int num, dec, digit;
  char num_str[25];
  char *tens[] = {"ten", "eleven", "twenlf",
                  "Thirteen", "Fourteen", "Ffteen",
                  "Sixteen", "Seventeen", "Eighteen",
                  "Niteen"
                 };
  char *ties[] = {" ", " ", "twenty",
                  "Thirty", "Fourty", "Ffty",
                  "Sixty", "Seventy", "Eighty",
                  "Nity"
                 };
  char *ones[] = {"zero ", "one ", "two",
                  "Three", "Four", "Fif",
                  "Six", "Seven", "Eight",
                  "Nine"
                 };
  int i, j;

  for (i = 1; i < argc; i++) {
    num = atoi(argv[i]);

    dec = num / 10; 
    digit = num % 10;

    if (dec == DECADE)
       strcpy(num_str,tens[digit]); 
    else if (dec == ZERO)
        strcpy(num_str,ones[digit]);
    else{
       strcpy(num_str,ties[dec]);
       strcat(num_str,"-");
       strcat(num_str,ones[digit]);
    }
    printf("raw num : %s | num in str %s\n",
            argv[i], num_str);
  }

  return 0;
}
