#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // init char array to all empty , if not , random  string will be there 
    char ch, initial, my_string[200]="", oneword[20] ="";
    int length,i,j;

    // collect char 
    printf("Input your sentense : ");

    for (i=0; i<200; i++)
    {
        ch= getchar();
        my_string[i] = ch;
        
        if((ch =='!') || (ch =='.') || (ch =='?'))
            break;
    }; 
    printf("Exist\n");
    
    length = i;
    printf("totally %d char collected !\n",length+1);
    
    // debug 
    for(i=0;i<200;i++)
        printf("%c",my_string[i]);
    
    printf("\n === \n");
    // reverse char 
    // initial : ?/./!
    initial = my_string[length];

    for(i=length-1, j=0; i>0,j<20; i--)
    {
       // select singleword
       oneword[j++]= my_string[i];
       if((my_string[i] == ' ') || (i == 0))
       {
           if (i == 0)
            printf(" ");
           for(;j>0;)
               printf("%c",oneword[--j]);
           oneword[20]="";
           j=0;
       }
    }

    printf("%c",initial);
    return 0;
}
