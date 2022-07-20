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

/**
 * selection_sort - sorts an array by holding the righmost value
 * and swaping with the least value in the rest of the array.
 *
 * @array: Array of integer to be sorted
 * @size: size of @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
