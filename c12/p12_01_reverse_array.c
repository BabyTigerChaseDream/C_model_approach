#include<stdio.h>

#define LEN 80

/* a) use array to track */ 
/*
void main(void)
{
   char message[LEN] , ch;
   int i,j;

   printf("Enter your message >>>");

   // collect message
   for (i=0; i<LEN; i++)
   {
       ch = getchar();
       if (ch != '\n')
           message[i] = ch;
       else
           break;
   }

   // reverse message
   for (j=i; j>=0; j--)
   {
       printf("%c",message[j]);
   }

}
*/

/* b) use array to track */ 
void main(void)
{
   char message[LEN] , *p;
   int i,j;

   printf("Enter your message >>>");

   // collect message
   for (p=message; p<message+LEN; p++)
   {
       *p= getchar();
       if (*p == '\n'){
           p--;
           break;
       }

   }

   // reverse message
   for (; p>=message; p--)
   {
       printf("%c",*p);
   }

}
