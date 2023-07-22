#include "sort.h"

/**
 * swap_values - swaps 2 values
 * @xp: first value
 * @yp: second value
 */

void swap_values(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @arr: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *arr, size_t size)
{
	size_t i;
	size_t j;
	int swap;

	if (!arr || size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		swap = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap_values(&arr[j], &arr[j + 1]);
				swap = 1;
				print_array(arr, size);
			}
		}

		if (!swap)
		{
			break;
		}

	}
}
