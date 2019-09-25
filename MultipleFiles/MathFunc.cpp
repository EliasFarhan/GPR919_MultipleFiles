
#include "pch.h"

int max_numbers(int* array, int size)
{
	int index_max_nmb = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[index_max_nmb] < array[i])
		{
			index_max_nmb = i;
		}
	}
	return array[index_max_nmb];
}


int min_numbers(int* array, int size)
{
	int index_max_nmb = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[index_max_nmb] > array[i])
		{
			index_max_nmb = i;
		}
	}
	return array[index_max_nmb];
}