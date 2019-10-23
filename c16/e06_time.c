#include<stdio.h>

#define HOUR_UNIT 3600
#define MIN_UNIT 60

#define MAX_SECONDS 86400

struct time{
  int  hours;  
  int  minutes;  
  int  seconds;  
};


struct time split_time(long total_seconds)
{
    struct time t;

    int hours, minutes, seconds;
    long seconds_left;
    
    // validate param
    if (total_seconds > MAX_SECONDS)
    {
        printf("Invalid param\n");
        return (struct time) {0,0,0};
    }

    hours = total_seconds / HOUR_UNIT;

    seconds_left = total_seconds % HOUR_UNIT;
    minutes = seconds_left / MIN_UNIT;

    seconds= total_seconds % MIN_UNIT;

    t.hours = hours;
    t.minutes= minutes;
    t.seconds = seconds;

    return t;
}

void main(void)
{

    long my_time = 1314520;
    long her_time = 66419;
    
    struct time t;

    t=split_time(my_time);
    printf("my_time split:\n\t %2d:%2d:%2d \n", t.hours, t.minutes, t.seconds);

    t=split_time(her_time);
    printf("her_time split:\n\t %2d:%2d:%2d \n", t.hours, t.minutes, t.seconds);
}
