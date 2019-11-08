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

#define N 5 

/*
int main(void)
{
  int i;
  char cmd[N][100] ={};
  printf("Enter commands: \n");
  for (i = 0; i < N; i++)
    scanf("%s", cmd[i]);

  printf("In reverse order:");
  for (i = N - 1; i >= 0; i--)
    printf("[%d] %s\n", i, cmd[i]);
  printf("\n");

  return 0;
}
*/

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
  int i;
    
  printf("[argc] %d\n",argc);
  printf("[argv] %s \n", *argv);

  for (i = argc - 1; i > 0; i--)
    printf("%s ", argv[i]);
  printf("\n");

  return 0;
}
