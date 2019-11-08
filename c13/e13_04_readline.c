#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n)
{
  int ch, i = 0;

  // a) skip white space before beginning to store input char
  while (isspace(ch = getchar()))
    ;
  while (ch != '\n' && ch != EOF) {
    // b) stop at first white space in input
    if(isspace(ch)){
        printf("[Warning] space here , abort !\n");
        return;
    }

    if (i < n)
      str[i++] = ch;
    else{
        // d) leave behind char has no room to store 
        printf("[Warning] reach string limits, abort !\n");
        return;
    }
    ch = getchar();
  }
  // c) stop reading at first "\n" and store "\n" to string
  if ( ch == '\n')
      str[i++] = ch;

  str[i] = '\0';
  return i;
}
