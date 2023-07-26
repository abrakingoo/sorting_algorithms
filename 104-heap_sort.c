#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * sift_down - Move the element at the index `start` down to
 * its proper position in the max heap.
 * @array: The array to be sorted.
 * @start: The index to start sifting down from.
 * @end: The index to stop sifting down at.
 * @size: The size of the array.
 */
void sift_down(int *array, size_t start, size_t end, size_t size)
{
	size_t child, swap_idx,  root = start;
	int tmp;

	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		swap_idx = root;

		if (array[swap_idx] < array[child])
			swap_idx = child;
		if (child + 1 <= end && array[swap_idx] < array[child + 1])
			swap_idx = child + 1;
		if (swap_idx == root)
			return;

		tmp = array[root];
		array[root] = array[swap_idx];
		array[swap_idx] = tmp;
		print_array(array, size);

		root = swap_idx;
	}
}

/**
 * heap_sort - Sorts an array of integers in
 * ascending order using the Heap sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i, end, tmp;

	if (array == NULL || size <= 1)
		return;

	for (i = (size - 2) / 2; i >= 0; i--)
		sift_down(array, i, size - 1, size);

	for (end = size - 1; end > 0; end--)
	{
		tmp = array[end];
		array[end] = array[0];
		array[0] = tmp;
		print_array(array, size);

		sift_down(array, 0, end - 1, size);
	}
}

