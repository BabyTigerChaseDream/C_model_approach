/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* reverse.c (Chapter 8, page 164) */
/* Reverses a series of numbers */

#include <stdio.h>
#include <stdlib.h>

#define N 5 

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
  int i, sum=0;
    
  //printf("[argc] %d\n",argc);
  //printf("[argv] %s \n", *argv);

  for (i = argc - 1; i > 0; i--)
    //printf("%s ", argv[i]);
    sum += atoi(argv[i]);

  printf("sum is %d\n", sum);

  return 0;
}
