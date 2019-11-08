#include <stdio.h>
#include <stdlib.h>

#define HOUR 60

typedef struct _ftime{
   int depart_time;
   int arr_time;
} ftime;

ftime flights[] =
    {
    /*     Departures           Arrivals     */
        {      8 * HOUR,    10 * HOUR + 16},
        { 9 * HOUR + 43,    11 * HOUR + 52},
        {11 * HOUR + 19,    13 * HOUR + 31},
        {12 * HOUR + 47,         15 * HOUR},
        {     14 * HOUR,    16 * HOUR +  8},
        {15 * HOUR + 45,    17 * HOUR + 55},
        {     19 * HOUR,    21 * HOUR + 20},
        {21 * HOUR + 45,    23 * HOUR + 58},        
    };

int main(void)
{
    int hour, minute, mins_since_midnight, depart_mins;
    int i, num_flight = 0;

    ftime min = {0,0};

    printf("Please enter a time(hh:mm): ");
    scanf("%2d :%2d", &hour, &minute);
    mins_since_midnight = (hour * 60) + minute;

    num_flight = sizeof(flights) / sizeof(ftime);
    
    depart_mins = abs(mins_since_midnight - flights[0].depart_time);
    min=flights[0];

    for (i=1; i<num_flight; i++)
    { 
        if (depart_mins > abs(mins_since_midnight - flights[i].depart_time))
        {
            depart_mins = abs(mins_since_midnight - flights[i].depart_time);
            min =  flights[i];
        }
    }

    printf("Min time is : Depart(%2.2d:%2.2d) | Arrive(%2.2d:%2.2d) \n",
            min.depart_time / 60, min.depart_time % 60, 
            min.arr_time / 60, min.arr_time % 60 
            ) ;
    return 0;
}
