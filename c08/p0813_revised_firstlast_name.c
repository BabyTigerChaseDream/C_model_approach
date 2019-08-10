#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // init char array to all empty , if not , random  string will be there 
    char ch, initial, last_name[20]="";
    int i;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while ((ch = getchar()) != ' '); //Skip chars after first char until whitespace
    
    printf("I am here\n");
    for (i=0; ((ch = getchar()) != '\n') && (i<20); ) {
        if (ch != ' ')
        {
            //putchar(ch);
            last_name[i] = ch;
            i++;
        }

    }

    for (i=0; i<20; i++){
        printf("%c",last_name[i]);
    }
    
    printf(", %c.", initial);

    return 0;
}
