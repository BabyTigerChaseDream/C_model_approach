#include <stdio.h>
#include <stdlib.h>

struct person
{
    char* name;
    int age;
};

int main(void)
{
    struct person p1 = {"John", 25};
    struct person *ptrout=malloc(sizeof(struct person) + 1);
    char* testfile = "test_fwrite.txt";

    printf("%s\n", p1.name);

    FILE *fp = fopen(testfile, "w");
    fwrite(&p1, sizeof(struct person), 1, fp);
    fclose(fp);

    //char buffer[20];
    fp = fopen(testfile, "r");
    fread(ptrout, sizeof(struct person), 1, fp);
    fclose(fp);

    printf("The stored name is: %s\n", ptrout->name);

    return 0;
}
