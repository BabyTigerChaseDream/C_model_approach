/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* canopen.c (Chapter 22, page 547) */
/* Checks whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char *fname;

  if (argc < 2) {
    printf("usage: canopen filename1 filename2 ... filenameN\n");
    exit(EXIT_FAILURE);
  }
  argv = ++argv;
/*
  while(*argv){
    printf("[argv] %s\n",*argv); 
    *argv++;
  }
*/
  while(*argv){
      if ((fp = fopen(*argv, "r")) == NULL) {
          printf("%s can't be opened\n", *argv);
          //exit(EXIT_FAILURE);
          *argv++;
          continue;
      }

      printf("%s can be opened\n", *argv);
      fclose(fp);
      *argv++;
  }
  return 0;
}
