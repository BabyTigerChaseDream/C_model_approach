#include<stdio.h>
#include<stdlib.h>
int main(int argc, char**argv)
{
   FILE *fd;
    int ch;

   if(argc<2){
    printf("Usage: fcat [filename] ... [filenameN]");
    exit(EXIT_FAILURE);
   }

   for(int n=1; n<argc; n++){
    if( fd=fopen(argv[n], "r") ) {
        while( (ch=getc(fd)) != EOF){
            // check if any file error occurred 
            if( ferror(fd) == 0 )
                putchar(ch);    
        }
    }else{
        printf("Cannot open file\n") ;
        exit(EXIT_FAILURE);
    }
   }

   return 0;
}

