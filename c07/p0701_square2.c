/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    //  TODO: short doesn't work , WHY ???
  short i;
  int n;
  //int i, n;
  //long i,n;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  //scanf("%hd", &n);
  scanf("%d", &n);
  //scanf("%ld", &n);

  if (n < 0)
  {
      printf("n < 0");
      return 0;
  }
  for (i = 1; i <= n; i++)
  {
    //printf("%10d%10d\n", i, i * i);

    if ((i*i) < 0)
    {
        printf("n-1");
        //printf("%20d : %20d\n", i-1, (i-1) * (i-1) );
        //printf("%20ld : %20ld\n", i-1, (i-1) * (i-1) );
        printf("%20hd : %20hd\n", i-1, (i-1) * (i-1) );

        printf("n");
        //printf("%20d : %20d\n", i,  i*i  );
        //printf("%20ld : %20ld\n", i,  i*i  );
        printf("%20hd : %20hd\n", i,  i*i  );
        break;
    }
  }
   return 0;
}
