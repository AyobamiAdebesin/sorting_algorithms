#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 *@array: Array of integers to be sorted
 *@size: size of @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
		}
	}
}
