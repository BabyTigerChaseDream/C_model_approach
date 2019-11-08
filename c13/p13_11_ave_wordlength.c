#include<stdio.h>
#include<ctype.h>

#define MAXLEN 100

double compute_average_word_length(const char *sentense)
{
    int wordcnt = 0;
    int length = 0;

    while(*sentense && *sentense == ' ')
        sentense++;
    
    wordcnt ++;

    while(*sentense)
    {
        if(*sentense != ' ' && *sentense != '\n')
            length ++;
        if(*sentense == ' ')
            wordcnt ++;
        
        sentense ++;
    }

    printf("total words : %d \n", wordcnt);
    printf("total length : %d \n", length);

    return (double) (length/wordcnt) ;
}

void main(void)
{
   char sentense[MAXLEN];
   double len = 0;

    fgets(sentense, sizeof(sentense), stdin);

    len = compute_average_word_length(sentense);
    printf("average len is %f\n", len);
    
}
