/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n, num;

  printf("Enter a number: ");
  scanf("%ld", &num);
  
  while (num > 0){
      n = num;
      while (n > 0) {
          digit = n % 10;
          digit_seen[digit]++;
          n /= 10;
      }

      printf("Digit :");
      for (int i=0; i< (int)( sizeof(digit_seen)/sizeof(digit_seen[0]) ); i++) 
      {
          printf(" %7d",i);
      }
      printf("\nOccur :");
      for (int i=0; i< (int)( sizeof(digit_seen)/sizeof(digit_seen[0]) ); i++) 
      {
          printf(" %7d",digit_seen[i]);
      }

      // clean up counter
      for (int i=0; i< (int)( sizeof(digit_seen)/sizeof(digit_seen[0]) ); i++) 
      {
          digit_seen[i] =0;
      }

    printf("\nEnter a number: ");
    scanf("%ld", &num);
  }
  return 0;
}
