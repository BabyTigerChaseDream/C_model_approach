#include<stdio.h>
// enum can have same value 
enum suit {CLUS=1,DIA=2,HEAR=1};

void main(void)
{
   printf("CLUS is %d\n",CLUS); 
   printf("DIA is %d\n",DIA); 
   printf("HEAR is %d\n",HEAR); 
}
