#include "sort.h"  


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}



void selection_sort(int *array, size_t size)
{
    size_t i, j, min_index;

    for(i = 0; i < size; i++)
    {
        min_index = i;

        for(j = min_index + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        swap(&array[i], &array[min_index]);
        print_array(array, size);
    }

}
