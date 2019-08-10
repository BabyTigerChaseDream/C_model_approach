#include<stdio.h>
#include<ctype.h>
void main(void)
{
   int hour, minute, offset;
   char mode;

   printf("Enter time in 12 hour mode :\n");
   scanf("%d :%d%c",&hour, &minute, &mode);

   offset = (toupper(mode) == 'P') ? 12: 0;
   
   if (hour == 12)
   {
        offset = 0;
   }

   hour += offset;

   printf("Time in 24 hour format is : %2d:%2d", hour,minute);

}
