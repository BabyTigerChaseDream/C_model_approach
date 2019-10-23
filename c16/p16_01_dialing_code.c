#include<stdio.h>

struct dialing_code{
    char *country;
    int code;
};

const struct dialing_code country_code[] = 
{
    {"Argentina", 54},
    {"Brazil", 55},
    {"China", 86},
    {"Congo", 243},
    {"Germany", 49},
    {"Iran", 98},
    {"Russia", 7},
    {"Sudan", 249},
    {"US",1},
    {"Iran",98},
} ;

void main(void)
{
    int code;
    int len;

    len =  sizeof(country_code) / sizeof(struct dialing_code);
    printf("Database len : %d\n",len);

    printf("Please enter code >>> ");
    scanf("%d", &code);

    printf("Code is %d\n",code);

    while(len>=0)
    {
        if(country_code[len].code == code)
        {
            printf("The country is %s\n",country_code[len].country);
            return;
        }
        len --;
    }

    printf(" [Warning] no match \n");
}
