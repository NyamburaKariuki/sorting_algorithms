#include "sort.h"
/**
 * bubble_sort - sort array lements from small to large value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, index, temp = 0;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < ize; x++)
	{
		if (array[index] > array[index + 1] && array[index + 1])
		{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			print_array(array, size);
		}
	}
}
