#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

#define UNITLEN 1
int main(int argc, char *argv[]){
    FILE *fd;
    FILE *encryfd;

    int n, encryword;
    char *fname, *encryname; 
    char curword, prevword;
    bool repeat=false;

    if(argc != 3){
        printf("usage: runlength [file to encryt] [encrypted file] \n");
    }

    fname = argv[1];
    encryname = argv[2];

    if ((fd=fopen(fname, "rb")) == NULL){
       // error  
       printf("File open wrong \n");
       exit(EXIT_FAILURE);
    }

    // create encrypted file
    if ((encryfd=fopen(encryname, "wb")) == NULL){
       // error  
       printf("File open wrong \n");
       exit(EXIT_FAILURE);
    }
   
    //prevword = NULL; 
    encryword = 0x01;

    for(int offset = 0; ; offset++){
        // read one byte each time 
        if( (n=fread(&curword, UNITLEN, 1, fd)) > 0 ) {
            /*
            if (offset == 0){
                prevword =  curword;
                // first words need compare
                continue;
            }
            */
            if (curword == prevword){
                encryword ++;
            }else{
                if (offset == 0){
                    prevword =  curword;
                    // first words need compare
                    continue;
                }
                // write encryword(count) to encryfd
                if( fwrite(&encryword, UNITLEN, 1, encryfd) == 0 ) {
                    if(ferror(fd)){
                        printf("FILE error\n");
                        exit(EXIT_FAILURE);
                    }
                }
                // write previous word to encryfd
                if( fwrite(&prevword, UNITLEN, 1, encryfd) == 0 ) {
                    if(ferror(encryfd)){
                        printf("FILE error\n");
                        exit(EXIT_FAILURE);
                    }
                }
                // reset encryword to 1 
                encryword = 0x01;
            }
            prevword = curword;
        }else{
           if(ferror(fd)){
                printf("FILE error\n");
           }
           if(feof(fd)){
                printf("reach EOF exist...ing\n");
           }
           break; 
        }
    }
    
    fclose(fd);
    fclose(encryfd);

    return 0;
}
