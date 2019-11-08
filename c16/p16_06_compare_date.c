
#include <stdio.h>
#include <stdbool.h>

#define FEBRUARY 1

#define EARLIER -1
#define SAME 0
#define LATER 1

struct date {
    int month;
    int day;
    int year;
};

/* Returns -1 if d1 is earlier than d2, 1 if d1 is later than d2,
   or 0 if the same */
int compare_dates(struct date d1, struct date d2)
{
    int comparison;

    /* Compare Years */
    if (d1.year < d2.year)

        comparison = EARLIER;
    else if (d1.year < d2.year)
        comparison = LATER;

    /*Years are the same so compare num day in year */
    else {
        if (d1.month > d2.month)
            comparison = EARLIER;
        else if (d1.month < d2.month)
            comparison = LATER;
        else
        {
            if (d1.day > d2.day)
                comparison = EARLIER;
            else if (d1.day < d2.day)
                comparison = LATER;
            else
                comparison = SAME;
        }

    }

    return comparison;
}

int main(void)
{
    struct date d1 = {3, 12, 2012};
    struct date d2 = {8, 5, 2008};


    return 0;
}

