/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c (Chapter 20, page 515) */
/* Performs XOR encryption */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

/*
int main(void)
{
  int orig_char, new_char;

  while ((orig_char = getchar()) != EOF) {
    new_char = orig_char ^ KEY;
    if (isprint(orig_char) && isprint(new_char))
      putchar(new_char);
    else
      putchar(orig_char);
  }

  return 0;
}
*/

int main(int argc, char *argv[])
{
    int i=0;
    FILE *fdin, *fdout;

    char *iname, *oname;

    int old_ch, new_ch;

    if(argc != 3){
        printf(" usage: xor [input file] [output file]\n");
        exit(EXIT_FAILURE);
    }
    iname = argv[1];
    oname = argv[2];

    // open read fd
    if( (fdin=fopen(iname, "rb")) == NULL ){
        printf("input %s cannot open \n",iname);
        exit(EXIT_FAILURE);
    }

    // output write fd
    if( (fdout=fopen(oname, "wb")) == NULL ){
        printf("output %s cannot open \n",oname);
        exit(EXIT_FAILURE);
    }
    
    while( (old_ch=fgetc(fdin)) != EOF ){
        new_ch= old_ch ^ KEY ;
        if( fputc(new_ch, fdout) == EOF){
            printf(" Write (ch: %c) to file has error \n ", new_ch);
            exit(EXIT_FAILURE);
        }
    }

    fclose(fdin);
    fclose(fdout);

    return 0;
}
