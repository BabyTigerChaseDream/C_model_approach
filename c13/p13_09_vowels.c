#include<stdio.h>

int compute_vowel_count(const char *sentense)
{
   char ch;
   int sum = 0;

    while (ch=*sentense ++)
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum += 1;
            break;
        }
    }  

    return sum;
}

void main(int argc, char ** argv)
{
    int sum = 0, i = 1;
    for (i=1; i < argc; i++)
    {
       sum = compute_vowel_count(argv[i]); 
        printf("Total vowels in %s : %d\n", argv[i],sum);
    }

}
