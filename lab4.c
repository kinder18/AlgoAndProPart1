#include<stdio.h>
#include<stdlib.h>
#define SIZE 20


void ClearArray(int anyname[])
{
	printf("\n================= CLEAR ARRAY ====================\n\n");

	int middle_value = 0, arr_sum = 0, limit_percent = 0;

	for (int index = 0; index < SIZE; index++)
	{
		arr_sum += anyname[index];
	}

	middle_value = arr_sum / SIZE;

	limit_percent = middle_value * 0.1;

	int limit = middle_value + limit_percent;

	printf("LIMIT Middle: %d Percent: %d Limit: %d\n", middle_value, limit_percent, limit);

	int condition_count = 0;

	for (int index = 0; index < SIZE; index++)
	{
		if (anyname[index] <= limit)
			condition_count++;
	}

	printf("LIMIT New Array Size: %d\n\n", condition_count);

	//int *result_arr = malloc(sizeof(int*) * condition_count);
	int *result_arr = malloc(4 * condition_count);

	int result_index = 0;

	for (int index = 0; index < SIZE; index++)
	{
		if (anyname[index] <= limit)
		{
			result_arr[result_index] = anyname[index];
			result_index++;
		}
	}

	for (int index = 0; index < condition_count; index++)
	{
		printf("Index: %d - Value: %d\n", index, result_arr[index]);
	}
}

int main()
{
	int arr[SIZE];

	//int input;

	for (int index = 0; index < SIZE; index++)
	{
		//arr[index] = scanf_s("%d", &input);
		arr[index] = rand()%10;
		printf("Index: %d - Value: %d\n", index, arr[index]);
	}

	printf("\n================= MIN & MAX ====================\n\n");

	//Find and swap MIN/MAX 

	int max = arr[0], min = arr[0];
	int max_index = 0, min_index = 0;

	for (int index = 0; index < SIZE; index++)
	{
		if (arr[index] < min)
		{
			min = arr[index];
			min_index = index;
		}

		if (arr[index] > max)
		{
			max = arr[index];
			max_index = index;
		}
	}

	printf("MIN Index: %d - Value: %d\n", min_index, min);
	printf("MAX Index: %d - Value: %d\n", max_index, max);

	arr[min_index] = max;
	arr[max_index] = min;

	printf("\n================= AFTER SWAP ====================\n\n");

	for (int index = 0; index < SIZE; index++)
	{
		printf("Index: %d - Value: %d\n", index, arr[index]);
	}

	ClearArray(arr);
	
}
