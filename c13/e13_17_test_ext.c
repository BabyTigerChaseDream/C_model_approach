#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

bool test_extension(const char *file_name,
                    const char *extension)
{
    char m_ext[5];

    while(*file_name){
        if(*file_name++ == '.'){
            strcpy(m_ext,file_name);
            break;
        }
    }
    /*
    while( *m_ext){
        *m_ext= tolower(*m_ext++);
    }
    */
    if (!strcmp(m_ext,extension))
        return true;
    else 
        return false ;
}

void main(void)
{
    if (test_extension("memo.txat", "btxt") )
        printf("match !\n");
    else
        printf("NOT match !\n");
}
