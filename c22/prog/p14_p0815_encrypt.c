#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define FNAMESIZE 20
char * result;
// concat 2 strings 
char *concat(char *s1, char *s2)
{
    result = malloc(strlen(s1) + strlen(s2) +1 );
    if (result == NULL){
        printf("fail to alloc mem for result");
        return NULL;
    }

    strcpy(result, s1);
    strcat(result, s2);
    printf("\n[concat] result : %s\n\n", result);

    return result;
}

int main(void)
{

    FILE *fd, *fdenc;
    char *fname=malloc(FNAMESIZE+1), *fencname;
    int n, i=0, length;
    
    printf("[fgets] Enter file to be encrypted :");
    // TODO : why below said : fname is NULL ????
    // root cause: fgets store ending "\n" from user input
    // so it can never find a file name ends with a '\n'
    fgets(fname, FNAMESIZE+1, stdin);
    printf("[strlen of fgets fname] %ld\n", strlen(fname));

    printf("[scanf] Enter file to be encrypted :");
    scanf("%s", fname);
    printf("[strlen of scanf fname] %ld\n", strlen(fname));
    
    /*
    // dbg 
    printf("[DBG] org file: %s\n", fname);
    fd = fopen(fname, "r");
    if (fd == NULL)
    {
        printf("fname is NULL, abort ...");
        exit(EXIT_FAILURE);
    }

    printf("Enter shift amount:");
    scanf("%d",&n);

    printf("[DBG] org file: %s\n", fname);
    fd = fopen(fname, "r");
    if (fd == NULL)
    {
        printf("fname is NULL, abort ...");
        exit(EXIT_FAILURE);
    }

    fencname = concat(fname, ".enc");
    if (fencname ==  NULL)
    {
        printf("fencname is NULL, abort ...");
        exit(EXIT_FAILURE);
    }
    fdenc = fopen(fencname, "w+");
   
    printf("[DBG] encrypted file: %s\n", fencname);

    // origin char , encrypted char 
    unsigned int orgchar, encchar;
    while(  (orgchar = fgetc(fd)) != EOF )
    {
        if(orgchar >='a' && orgchar <= 'z')
        {
            encchar = (orgchar-'a'+n) % 26 + 'a';
        }
        else if(orgchar >='A' && orgchar <= 'Z')
        {
            encchar = (orgchar-'A'+n) % 26 + 'A';
        }
        else
            encchar = orgchar;

        if (putc(encchar, fdenc) != encchar )
        {
            printf(" fail to write %c \n ", encchar);
            exit(EXIT_FAILURE);
        }
    }

    fclose(fd);
    fclose(fdenc);

    printf("Completed !");
    */
    return 0;
}
