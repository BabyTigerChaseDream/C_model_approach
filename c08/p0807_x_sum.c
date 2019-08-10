#include<stdio.h>

#define QUIZ 5
#define STUD 5

void main(void)
{
    int array[QUIZ][STUD];
    int i,j,d;
    float r_sum=0, c_sum=0, max,min;

    for (i=0; i<QUIZ; i++)
    {
        printf("Enter quiz(%d): ",i);
            scanf("%d %d %d %d %d",
                    &array[i][0],&array[i][1],&array[i][2],&array[i][3],&array[i][4]);
    }


    // display arrays
    for (j=0; j<QUIZ; j++)
    {
        c_sum=0;
        for (i=0; i<STUD; i++)
            printf("==> [%d][%d] %d\n",i,j,array[i][j]);
    }


    // sum
    printf("\nRow Sum: ");
    for (i=0; i<QUIZ; i++)
    {
        r_sum=0;
        for (j=0, max=array[i][0], min=array[i][0]; j<STUD; j++)
        {
            max = max > array[i][j] ? max:array[i][j];
            min = min < array[i][j] ? min:array[i][j];
            r_sum += array[i][j];
        }
        printf("r_sum=%d\n",r_sum);
        //printf("r_sum=%f\n",r_sum);
        printf("\nQUIZ(%d) : average score(%5f)\n", i,r_sum/STUD);
        printf("\n         : max(%5f) min(%5f)\n", max, min);
    }
    
    printf("\nSTUD average score: ");
    for (j=0; j<STUD; j++)
    {
        c_sum=0;
        for (i=0; i<QUIZ; i++)
        {
            c_sum += array[i][j];
        }
        printf("\nSTUD(%d) : average score(%5f)\n", j,c_sum/QUIZ);
    }
}
