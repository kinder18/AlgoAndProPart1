#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int SIZE1, SIZE2, i, j;
    printf("Give me a number of rows:");
    scanf("%d", &SIZE1);
    printf("Give me a number of columns:");
    scanf("%d", &SIZE2);
    int arr[SIZE1][SIZE2];
    printf("Array:\n");
    srand(time(NULL));
    for(i=0; i < SIZE1; i++)
    {
        for(j=0; j < SIZE2; j++)
        {
            arr[i][j] = rand()%10;
            printf(" %d", arr[i][j]);
        } 
        printf("\n");
    }
    int integer, integer2, k;
    printf("Give me 2 integers:");
    scanf("%d", &integer);
    scanf("%d", &integer2);
    for(i=0; i < SIZE1; i++)
    {
        if(arr[i][0] == integer || arr[i][1] == integer || arr[i][2] == integer)
        {
            if(arr[i][0] == integer2 || arr[i][1] == integer2 || arr[i][2] == integer2)
            {
                for(k=i; k < SIZE1-1; k++)
                {
                    for(j=0; j < SIZE2; j++)
                    {
                        arr[k][j] = arr[k+1][j];
                    }
                }
            i--;
            SIZE1--;
            }
        }   
    }     
    printf("New array:\n");
    for(i=0; i < SIZE1; i++)
    {
        for(j=0; j < SIZE2; j++)
        {
            printf(" %d", arr[i][j]);
        } 
        printf("\n");
    }
}
