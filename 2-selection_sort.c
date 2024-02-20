#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order *
 * @array: array of integers to be sorted
 * @size: number of integers in array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_indx;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min_indx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_indx])
			min_indx = j;
		}
		if (min_indx != i)
		{
			tmp = array[i];
			array[i] = array[min_indx];
			array[min_indx] = tmp;
			print_array(array, size);
		}
	}
}
