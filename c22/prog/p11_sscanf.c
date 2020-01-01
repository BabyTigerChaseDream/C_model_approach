#include<stdio.h>
#include<stdlib.h>

#define DATE_LEN 20

char *get_month_str(int month)
{
    switch(month)
    {
        case 1:
            return "Jan";
        case 2:
            return "Feb";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "Sep";
        case 10:
            return "Oct";
        case 11:
            return "Nov";
        case 12:
            return "Dec";
        default:
            return "Unknown";
    }
}


void main(void){
    int year, month, date;
    char *month_str;
    //char *str = malloc(DATE_LEN+1);
    char *str;

    printf("Please input your date:\n>>>");
    fgets(str, DATE_LEN, stdin);
    if(sscanf(str, "%d%*[-/]%d%*[-/]%d", &month,&date,&year)){
        month_str=get_month_str(month);
    }
    /*
    else if(sscanf(str, "%d-%d-%d", &month,&date,&year)){
        month_str=get_month_str(month);
    }
    */
    printf("%s %2d, %4d", month_str,date,year);

}
