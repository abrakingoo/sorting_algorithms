#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *arr, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	bool swap;

	for (i = 0; i < size; i++)
	{
		swap = false;

		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap = true;
				print_array(arr, size);
			}
		}

		if (!swap)
		{
			break;
		}

	}
}
