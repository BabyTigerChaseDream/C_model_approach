#include<stdio.h>

void main(void)
{
    int n, i, j, num=1;

    printf("Enter array size: ");
    scanf("%d",&n);

    int array[n][n];

    printf("num size %d\n",n);
    
    // init clean array 
    for (i=0; i<n; i++)
    {
        //printf("i init array \n");
        for (j=0; j<n; j++)
        {
            array[i][j] = 0;
            //printf(" j init array \n");
        }
    }

    // put numer in array 
    for(i=0, j=(n-1)/2, num=1; num <=n*n; num++)
    {
        //printf("put number ....\n");
        array[i][j] = num;
        // increase number per rule 
        i--;
        j++;
        // row boundary check 
        if (i<0)
            i = n+i;
        if (i>=n)
        {
            i = i-n;      
            printf("should Never hit\n");
        }

        // col boundary check 
        if (j>=n)
            j = j-n;      
        if (j<0)
        {
            j = n+j;
            printf("should Never hit\n");
        }

        if(array[i][j] != 0)
        {
            i++;
            /*
            if (i>n)
                i = i-n;
            */
        }

    }

    // printf array  
    for (i=0; i<n; i++)
    {
    //printf("display number ....\n");
        for (j=0; j<n; j++)
        {
            printf(" %5d ",array[i][j]);
        }
        printf("\n");
    }
}
