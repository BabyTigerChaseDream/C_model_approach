#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define AREALEN 3
#define EXCHANGE 3
#define NUM 4

#define BUFSIZE 1024

struct phone_num {
    char area[AREALEN+1];
    char exchange[EXCHANGE+1];
    char num[NUM+1];
} pnum;


void main(int argc, char *argv[])
{
       FILE *fd;

      if(argc!=2) {
        printf("Usage: prog inputfile\n");
        exit(EXIT_FAILURE);
      }

      if ( (fd=fopen(argv[1], "r")) == NULL ){
         printf("Cannot open file %s \n", argv[1]);
         exit(EXIT_FAILURE);
      }
      // read contents from FILE 
      char *buffer = malloc(BUFSIZE), *ch;
      int i, line = 1;
        
      if(buffer == NULL)
      {
        printf("failed to allocate memory for buffer\n");
      }

      while( fgets(buffer, BUFSIZE+1, fd) ){
          i = 0; // init value of i
        while(buffer && i<AREALEN ){
            ch =  buffer;
            if (isdigit(*ch))
            {
                pnum.area[i]=*ch;
                i++;
            }
            //buffer = buffer+1 ;
            buffer ++;
        }
        //pnum.area[i] = '\n';
        pnum.area[i] = '\0';

        i = 0;
        while(buffer && i<EXCHANGE){
            ch =  buffer;
            if (isdigit(*ch))
            {
                pnum.exchange[i]=*ch;
                i++;
            }
            //buffer = buffer+1 ;
            buffer ++;
        }
        //pnum.exchange[i] = '\n';
        pnum.exchange[i] = '\0';

        i = 0;
        while(buffer && i<NUM){
            ch =  buffer;
            if (isdigit(*ch))
            {
                pnum.num[i]=*ch;
                i++;
            }
            //buffer = buffer+1 ;
            buffer ++;
        }
        //pnum.num[i] = '\n';
        pnum.num[i] = '\0';

      printf("(%s)  %s-%s\n", pnum.area, pnum.exchange, pnum.num);

      }
}
