#include<stdio.h>

#define WORDNUM 30
#define WORDLEN 20

char sentense[WORDNUM][WORDLEN+1];

void main(void)
{
    char my_str[(WORDLEN+1)*WORDNUM];
    char *p_my_str = my_str;

    int wordcnt = 0, i;

    printf("Input your sentense:\n");
    
    fgets(my_str, WORDLEN*WORDNUM, stdin);
    
    printf("my_str is : %s \n", my_str);
    
    while(*p_my_str && *p_my_str == ' ')
        p_my_str++;
    
    while(*p_my_str && (wordcnt < WORDNUM) )
    {
        if(*p_my_str != ' ' && *p_my_str != '\n')
            if(i<WORDLEN)
                sentense[wordcnt][i++] = *p_my_str;
            else
                sentense[wordcnt][i] = '\0';

        else
        {
            sentense[wordcnt][i] = '\0';
            wordcnt++;
            i=0;
        }

        p_my_str++;
    }

    for (i=wordcnt; i>= 0; i--)
    {
        printf("%s ",sentense[i]);
    }
}
