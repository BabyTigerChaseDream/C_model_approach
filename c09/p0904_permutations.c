#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

void read_word(int counts[26])
{
    char ch;
    int i=0;
    while( (ch=getchar()) != '\n' && i<20 )
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
        {
            counts[tolower(ch)-'a'] ++;
        }
        i++;
    }
}

bool equal_array(int count1[26], int count2[26])
{
    int i;
    for (i=0; i<26;i++)
    {
       if (count1[i] != count2[i])
           return false;
    }
    return true;

}

void main(void)
{
    int std_counter[26] ={0};
    int my_counter[26] ={0};
    bool prematurate;

    printf("Enter standard string:");
    read_word(std_counter);

    printf("Enter my string:");
    read_word(my_counter);

    prematurate = equal_array(std_counter,my_counter);

    if (prematurate == true)
        printf("YES!");
    else 
        printf("NO!");
}

