#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char mystr[100];
char *line = NULL;

int line_length(const char *filename, int n);
//int mystr_length(const char *filename, int n)

void main(void)
{
	int length;
	length=line_length("line_length.txt",1);
	//printf("[1] Got length: %d\n",length);
	
	length=line_length("line_length.txt",2);
	//printf("[2] Got length: %d\n",length);

	length=line_length("line_length.txt",3);
	//printf("[3] Got length: %d\n",length);

	length=line_length("line_length.txt",4);
	//printf("[3] Got length: %d\n",length);
	length=line_length("line_length.txt",5);
	length=line_length("line_length.txt",6);
}
/*
int mystr_length(const char *filename, int n)
{
	// log current line
	int cur = 1, length=0;
	FILE *fp;

	if(n < cur)
		return 0;
	// open file
	if( (fp=fopen(filename, "r")) != NULL ){
		while( (fgets(mystr, sizeof(mystr),fp) != NULL) )
			if (cur++==n){
				length = sizeof(mystr);
				return length;
			}
	}
	else{
		printf("Cannot open file %s\n",filename);
		exit(EXIT_FAILURE);
	}
}
*/


int line_length(const char *filename, int n)
{
	// log current line
	int cur = 1;
        size_t length=9, rt_len;

	FILE *fp;

	if(n < cur)
		return 0;
	// open file
	if( (fp=fopen(filename, "r")) != NULL ){
		//while( (fgets(mystr, sizeof(mystr),fp) != NULL) )
		while( ( (rt_len=getline(&line, &length,fp)) != -1) ){
			printf("\n[line] %s: [strlen]%ld",line,strlen(line));
			printf("\n[rt_len] %ld\n",rt_len);
			printf("\n[length] %ld\n",length);
			if (cur++==n){
				return length;
			}
		}
	}
	else{
		printf("Cannot open file %s\n",filename);
		exit(EXIT_FAILURE);
	}
}
