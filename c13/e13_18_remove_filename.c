#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

void remove_filename(char *url)
{
    int len = strlen(url);

    while(len--){
        if( *(url+len) == '/')
        {
            *(url+len) = '\0';
            break;
        }
    }
}


void main(void)
{
    //char *my_str = "http://www.knking.com/index.html";
    char my_str[] = "http://www.knking.com/index.html";

    remove_filename(my_str);
    printf("My string is : %s\n", my_str);
}
