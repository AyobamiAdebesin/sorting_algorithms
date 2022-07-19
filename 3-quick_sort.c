#include "sort.h"

/**
 * swap - Swaps two integer pointers
 *
 * @xp: first integer pointer
 * @yp: second integer pointer
 *
 * Return: None
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void quick_sort(int *array, size_t size)
{
	int i; 
	int j = 0;
	size_t pivot = size - 1;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] <= pivot)
		{
			swap(&array[i], &array[j]);
			/**print_array(array, size);**/
			j++;
		}
	}
	swap(&array[j], &array[pivot]);
	/**print_array(array, size);**/
}