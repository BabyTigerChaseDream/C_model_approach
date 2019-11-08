#include<stdio.h>
#include<string.h>

void get_extension(const char *file_name, char *extension)
{
    while(*file_name)
    {
        if (*file_name == '.'){
            strcpy(extension, file_name+1);
            return;
        }
        file_name ++;
    }

    strcpy(extension, "NA");
}

void main(void){
    char * python = "python.py";
    char * c= "my_c.c";
    char * na= "nana";

    char ext[10];
    
    get_extension(python,ext);
    printf("python ext: %s\n",ext);

    get_extension(c,ext);
    printf("c ext: %s\n",ext);

    get_extension(na,ext);
    printf("na ext: %s\n",ext);
}
