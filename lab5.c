#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 3
#define SIZE2 3
int main()
{
	int array[SIZE][SIZE2];
	srand(time(NULL));
	for (int index = 0; index < SIZE; index++)
	{
		for (int index2 = 0; index2 < SIZE2; index2++)
		{
			array[index][index2] = rand()%10;
			printf("Index:%d Index2:%d\n Value:%d\n ", index, index2, array[index][index2]);
		}
	}
	printf("\n================= MAX ====================\n\n");
	
	int max = array[0][0];
	int max_index, max_index2;
	for (int index = 0; index < SIZE; index++)
	{
		for (int index2 = 0; index2 < SIZE2; index2++)
		{ 
			if (array[index][index2] > max)
			{
				max = array[index][index2];
				max_index = index;
				max_index2 = index2;
		    }
		}
	}
	printf("Max element:%d , Max index:%d , Max index2:%d\n", max, max_index, max_index2);
    printf("\n================= Shuffle in array ====================\n\n");
    
    int new_index, new_index2, new_array;
    for (int index = 0; index < SIZE; index++)
	{
		for (int index2 = 0; index2 < SIZE2; index2++)
		{ 
            new_index = index + max;
            new_index2 = index2 + max;
            new_array = array[index][index2];
            printf("New index:%d , New index2: %d\n New value:%d\n", new_index, new_index, new_array);
		}
	}


}
