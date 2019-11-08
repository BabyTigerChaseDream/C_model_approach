#include<stdio.h>
#include<stdbool.h>

bool search(const int a[], int n, int key);

void main(void)
{
   const int a[10] = {1,2,3,4,5,6,7,8,9,10};

   bool is;
   is= search(a, 10, 20);
   printf("is 20 is %d:",is);
   is= search(a, 10, 10);
   printf("is 10 is %d:",is);

}

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p=&a[0]; p<a+n; p++)
    {
        if (*p == key )
            return true;
    }
    return false;
}

/*

#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
    // compound literals : chapter 9.3
    // array build based on compound literals: chapter 12.01                     
    printf("%d\n", search((int []){1, 2, 3, 4, 5}, 5, 9));
    return 0;
}

bool search(const int a[], int n, int key)
{
    const int *p = a;

    while (p < a + n) {
        if (key == *p++)
            return true;
    }
    return false;
}

   */
