#include<stdio.h>

/*
 * fgets() man: 
 * reads characters from stream and stores them as a C string into str until (num-1) characters 
 * have been read or either a newline or the end-of-file is reached, whichever happens first.
 * A newline character makes fgets stop reading, but it is considered a valid character 
 * by the function and included in the string copied to str.
 */

char *my_fgets(char *s, int size, FILE *stream)
{
    int i=0;
    int ch;
    
    while(i<size-1){
        if( (ch = getc(stream)) != EOF ){
            s[i++] = ch;
            if(ch == '\n')
                break;
        } else {
            // i=0 : when nothing read
            // ferror(stream) : when real error there
            if( (i==0) || ferror(stream) )
                return NULL;
            // it comes to break, if it does reach eof of FILE 
            // needs to add "\0" to string and return
            break;
        }
    }
    s[i] = '\0';
    return s;
}


/*
 * fputs() man: 
 */

/* my flawed version below .... ing
 *
char *my_fputs(const char *s, FILE *stream)
{
    int len=0;
    int ch;
    
    while( len <= strlen(s) ){
        if ( putc(ch, stream) != EOF){
            len++;
        } else {
            // ferror(stream) : when real error there
            if( ferror(stream) )
                return EOF;
            // real EOF there
            break;
        }
    }
    return len;
}
*/

int fput_string(const char *s, FILE *stream)
{
  int len = 0;

  while (*s != '\0') {
      if (putc(*s, stream) == EOF)
        return EOF;
      s++;
      // len++; 
    }
  return 0;
  // return len; 
}
