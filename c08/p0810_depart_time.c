#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    /* Populate departure times of flights*/
    int departure_times[8] = {8 * 60,
                              9 * 60 + 45,
                             11 * 60 + 19,
                             12 * 60 + 47,
                             14 * 60,
                             15 * 60 + 45,
                             19 * 60,
                             21 * 60 + 45};

    /* Populate arrival times of flights*/
    int arrival_times[8] = { 10 * 60 + 16,
                             11 * 60 + 52,
                             13 * 60 + 31,
                             15 * 60,
                             16 * 60 + 8,
                             17 * 60 + 55,
                             21 * 60 + 20,
                             23 * 60 + 58};    

    int delta_array[8];
    int hour, min, my_times;
    int i , closest;

    printf("Enter your time: (hh:mm) in 24 hour format");
    scanf("%2d:%2d",&hour,&min);
    
    my_times = hour*60+min;
   
    for (i=0; i<8;i++){
        delta_array[i] = abs(departure_times[i]-my_times);
    }
    
    closest = 0;
    for (i=1; i<8;i++){
        closest = delta_array[closest] < delta_array[i] ? closest:i ;   
    }

    printf("Closet time : %.2d:%.2d", departure_times[closest]/60, departure_times[closest]%60);
}
