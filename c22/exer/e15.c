#include<stdio.h>

#define BYTE_SIZE 64L

fseek(fd, n*BYTE_SIZE, SEEK_SET);
fseek(fd, 0*BYTE_SIZE, SEEK_END);
fseek(fd, 1*BYTE_SIZE, SEEK_CUR);
fseek(fd, -2*BYTE_SIZE, SEEK_CUR);

