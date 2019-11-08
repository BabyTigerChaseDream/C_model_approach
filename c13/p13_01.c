#include<stdio.h>
#include<string.h>

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
 
  return strlen(str);
}

void main(void)
{
    char smallest_word[20];
    char largest_word[20];

    char str[20];
    
    printf("Enter first word please: \n");
    read_line(str, 20) ;
    strcpy(smallest_word, str);
    strcpy(largest_word, str);

    while( read_line(str, 20) != 4){
        if (strcmp(str,smallest_word) < 0)
            strcpy(smallest_word, str);
        if (strcmp(str,smallest_word) > 0)
            strcpy(largest_word, str);
    }
    
    printf("smallest_word : %s \n", smallest_word);
    printf("largest_word: %s \n", largest_word);
}
