#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    FILE *fd;
    int num_c=0, num_w=0, num_s=0;
    bool in_word=false;
    char ch;

    if( (fd = fopen(argv[1],"rb")) != NULL){
       // cnt chars
       while(fgetc(fd)  != EOF)
           num_c++;

       // cnt words  - TODO
       rewind(fd);
       while( (ch=fgetc(fd)) != EOF){
           if( in_word &&  isspace(ch) )
           {
            num_w++;
            in_word = false;
           }
           else if( !in_word && !isspace(ch) )
           {
            in_word = true;
           }
       }
        
       // cnt lines- TODO
       rewind(fd);
       //while( (ch=fgetc(fd)) != EOF){
       while( (ch=fgetc(fd)) == '\n'){
           //if (ch == '\n')
           num_s++;
       }
    }else{
        exit(EXIT_FAILURE);
    }
    printf("Total char:%d\n word: %d\n lines: %d\n", num_c, num_w, num_s);

    printf("\n in int: %ld", '\n');
}
