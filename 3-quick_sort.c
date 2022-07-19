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

