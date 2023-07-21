#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @arr: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *arr, size_t size)
{
	size_t i;
	size_t j;
	int temp;
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
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
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
