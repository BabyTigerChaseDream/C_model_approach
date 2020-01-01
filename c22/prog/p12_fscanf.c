#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    //char *fname = "price.list";
    char *fname = "fscanf.txt";
    char item[20], things[20];
    //int item;
    //float price;
    int price;
    int mm,dd,yyyy;

    int num=0;

    FILE *pname = fopen(fname, "r");
    if (pname == NULL)
    {
        printf("Failed to open file\n");
        exit(EXIT_FAILURE);
    }
    
    /*
    //while( (num=fscanf(pname, "%s,%f,%2d/%2d/%4d", item, &price, &mm, &dd, &yyyy)) != -1) 
    while( num=fscanf(pname, "%d,%f,%2d/%2d/%4d", &item, &price, &mm, &dd, &yyyy)) 
    {
       printf("[num] %d\n", num); 
       //printf("%10s   $%10.5f %2d/%2d/%4d\n", item, price,mm,dd,yyyy);
       printf("%8d   $%10.5f %2d/%2d/%4d\n", item, price,mm,dd,yyyy);
    }
    */

    while( (num=fscanf(pname, "%d %s %d %s", &price, item, &yyyy, things)) != -1) 
    {
       printf("[num] %d\n", num); 
       printf("%d %s %d %s \n", price, item, yyyy, things);
    }
}
