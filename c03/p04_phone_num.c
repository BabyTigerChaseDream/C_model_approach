#include<stdio.h>
void main(void)
{   int head, mid,end;
    printf("Enter Phone in (xxx) xxx-xxxx format:");
    scanf("(%d) %d - %d",&head,&mid,&end);
    printf("%.3d.%.3d.%.4d",head,mid,end);
}
