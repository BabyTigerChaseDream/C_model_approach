#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main(void)
{
    FILE *fd;
    int errorcode = 0;

    char *flightfile = "flight.dat";

    if( (fd=fopen(flightfile,"r")) == NULL)
    {
        if ( errorcode = ferror(fd) )
        {
            printf("errorcode: %d\n", errorcode);
            exit(EXIT_FAILURE);
        }
        if( errorcode = feof(fd) )
        {
            printf("EOF reached ");
            return;
        }
    }

    // collect input from user
    unsigned int userhour, usermin;
    unsigned int usertimes = 0;
    printf("PLease input your time[hour:mm]\n>>>");
    scanf("%d:%d", &userhour, &usermin);
    printf("Expect time : [%d:%d]\n\n",userhour,usermin);

    usertimes =  userhour*60+usermin;

    // reading files
    unsigned int dhour, dmin, ahour, amin;
    unsigned int mydhour, mydmin, myahour, myamin;
    unsigned int times = 0, mintime=0;

    bool init = true;

    while( fscanf(fd, "%d:%d %d:%d", &dhour,&dmin,&ahour,&amin) == 4)
    {
        times = dhour *60+dmin;
        printf("Reading : %d:%d | %d:%d\n", dhour,dmin,ahour,amin);
        if(init){
           mintime = abs(times-usertimes); 
           mydhour = dhour;
           mydmin = dmin;
           myahour = ahour;
           myamin = amin;

           init = false;
    
        }else{
            if(mintime<=abs(times-usertimes)) {
                continue;
            } else if(mintime>abs(times-usertimes)) {
               mintime = abs(times-usertimes);
               mydhour = dhour;
               mydmin = dmin;
               myahour = ahour;
               myamin = amin;
            }
        }
    }
    printf(" !!! Final [depart] %d:%d [arrive] %d:%d \n", mydhour, mydmin, myahour,myamin);
}
