#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

#define UNITLEN 1
int main(int argc, char *argv[]){
    FILE *fd, *encryfd;
    char *fname, *encryname; 
    int i ;

    unsigned char ch,cnt ;

    if(argc != 2){
        printf("usage: runlength [encrypted file] \n");
    }

    encryname = argv[1];
    fname = malloc(sizeof(encryname)+sizeof(".org")+1);
    //fname = strcat(encryname,".org");
    fname ="forcename";

    // open and read encryed file 
    if ((encryfd=fopen(encryname, "rb")) == NULL){
       // error  
       printf("File %s open wrong \n",encryname);
       exit(EXIT_FAILURE);
    }

    // create org file
    if ((fd=fopen(fname, "wb")) == NULL){
       // error  
       printf("File %s open wrong \n",fname);
       exit(EXIT_FAILURE);
    }
   
    while( fread(&cnt, UNITLEN, 1, encryfd) > 0 && fread(&ch, UNITLEN, 1, encryfd) >0 ) {
        //printf("cnt(s) : %c\n",cnt) ;
        //printf("ch: %c\n", ch);
        for(i=0; i<cnt; i++){
            // write encryword(count) to encryfd
            if( fwrite(&ch, UNITLEN, 1, fd) == 0 ) {
                if(ferror(fd)){
                    printf("FILE error\n");
                    exit(EXIT_FAILURE);
                }
            }
        }
    }

    // check while exit due to error or eof 
    if(ferror(encryfd)){
        printf("FILE error\n");
        exit(EXIT_FAILURE);
    }
    if(feof(encryfd)){
        printf("reach EOF exist...ing\n");
    }

    fclose(fd);
    fclose(encryfd);
    
    printf("Output is in %s\n", fname);
    return 0;
}
