#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX_LEN 10

int main(int argc, char *argv[]){
    FILE *fd;

    int size = MAX_LEN + 1, n;
    //char *fname, *contents=malloc(size);
    char *fname, *contents=malloc(MAX_LEN);
    
    if(argc != 2){
        printf("usage: prog [file to output] \n");
    }

    fname = argv[1];
    if ((fd=fopen(fname, "rb")) == NULL){
       // error  
       printf("File open wrong \n");
       exit(EXIT_FAILURE);
    }
    
    int offset = 0; 
    //while( fgets(contents, size, fd) != NULL ) {
    while( (n=fread(contents, 1, MAX_LEN, fd)) > 0 ) {
        printf("    %3d  ",offset);
        // display in hex 
        char ch = contents[0];
        for(int i=0; i<n; i++)
            printf("%x ",contents[i]);
        printf("     ");
    
        // display in char 
        for(int i=0; i<n; i++)
            printf("%c ",isprint(contents[i]) ? contents[i]:'.');
        printf("\n");
        offset +=MAX_LEN;
    }
    
    fclose(fd);

    return 0;
}
