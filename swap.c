#include "sort.h"
/**
 * swap - Swaps two integer pointers
 * @xp: Pointer to first integer
 * @yp: Pointer to second integer
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
