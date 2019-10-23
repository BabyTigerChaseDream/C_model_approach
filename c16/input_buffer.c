#include<stdio.h>
#include<ctype.h>

#define NAME_LEN 25
#define MAX_PARTS 100

char name[NAME_LEN+1];
int on_hand;
/*
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}
*/

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    printf("Got space : %c\n",ch);
  while (ch != '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}

void main(void)
{

  printf("Enter quantity on hand: ");
  scanf("%d", &on_hand);
  printf("Enter part name: ");
  read_line(name, NAME_LEN);

  // display value 
  printf("on_hand: %d\n",on_hand);
  printf("name : %s\n",name);

}

