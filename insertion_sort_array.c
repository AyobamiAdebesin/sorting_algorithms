#include "sort.h"

void insertion_sort_array(const int *array, int size)
{
	int key, i, j;

	for (i = 1; i < size; i++)
	{
		key = array[i];
		j = i - 1;

		while (j <= 0 && array[j] < key)
		{
			array[j+1] = array[j];
			j--;
		}
		ar

