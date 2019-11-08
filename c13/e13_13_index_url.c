#include<stdio.h>
#include<string.h>

#define MAXLEN 60

void build_index_url(const char *domain, char *index_url)
{
    /*
    char *header = "http://www.";
    char *postfix = "/index.html";
    */

    strcpy(index_url,"http://www.");
    strcat(index_url,domain);
    strcat(index_url,"/index.html");
}

void main(void)
{
    char index_url[MAXLEN];

    const char *my_domain = "knking.com";

    build_index_url(my_domain,index_url);

    printf("my domain: %s\n",index_url);
}
