#include<stdio.h>
void find_closet_flight(int desired_time, int *depart_time, int *arv_time);

int main(void)
{
    int hour, minute, mins_since_midnight, d_time, a_time;
    printf("Please enter a time(hh:mm): ");
    scanf("%2d :%2d", &hour, &minute);

    mins_since_midnight = (hour * 60) + minute;

    find_closet_flight(mins_since_midnight, &d_time, &a_time);

    printf("Closest time is:\n");
    printf(" depart time %2d:%2d \n",d_time/60, d_time%60);
    printf(" arrive time %2d:%2d \n", a_time/60, a_time % 60);

    return 0;
}    
   
void find_closet_flight(int desired_time, int *depart_time, int *arv_time)
{
    
    if (desired_time <= (8 * 60) )
    {
        *depart_time = 8 * 60;
        *arv_time = 10 *60 + 16;
    }
    else if (desired_time < ((9 * 60) + 43) )
    {
        *depart_time = (9 * 60) + 43;
        *arv_time = (11 * 60) + 52;
    }
    else if (desired_time < ((11 * 60) + 19) ) 
    {
        *depart_time = (11 * 60) + 19;
        *arv_time = (13 * 60) + 31;
    }
    else if (desired_time <= ((12 * 60) + 47) )
    {
        *depart_time = (12 * 60) + 47;
        *arv_time = 15*60;
    }
    else if (desired_time <= (14 * 60))
    {
        *depart_time = (14 * 60);
        *arv_time = (16 * 60)+8;
    }
    else if (desired_time <= (15 * 60) + 45)
    {
        *depart_time = (15 * 60) + 45;
        *arv_time = (17 * 60) + 55;
    }
    else if (desired_time <= (19 * 60))
    {
        *depart_time = (19 * 60);
        *arv_time = (21 * 60)+20;
    }
    else 
    {
        *depart_time = (21 * 60)+45;
        *arv_time = (23 * 60) + 58 ;
    }

}
