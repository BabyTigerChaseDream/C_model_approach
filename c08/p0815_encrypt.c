#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, mystring[80]="" , encryptstring[80]="";
    int n, i=0, length;
    
    printf("Enter message to be encrypted :");
    while( ((ch=getchar()) != '\n') && i<80)
    {
       mystring[i++] =  ch; 
    }

    length = i;
    
    printf("Enter shift amount:");
    scanf("%d",&n);

    for(i=0; i<length; i++)
    {
        ch = mystring[i];
        if(ch >='a' && ch <= 'z')
        {
            mystring[i] = (ch-'a'+n) % 26 + 'a';
        }
        else if(ch >='A' && ch <= 'Z')
        {
            mystring[i] = (ch-'A'+n) % 26 + 'A';
        }
        else
            continue;
    }

    printf("Encrypted string :\n");
    for(i=0; i<length; i++)
    {
        printf("%c",mystring[i]);
    }
    printf("\n");

    return 0;
}
