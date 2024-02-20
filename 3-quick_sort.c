#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition - Implement the quicksort algorithm through recursion.
 * @array: An array of integers
 * @size: array size
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 * Return: Final partition index
 */
int partition(int *array, size_t size, int low, int high)
{
	int *pivot, a, b;

	pivot = array + high;
	for (a = b = low; b < high; b++)
	{
		if (array[b] < *pivot)
		{
			if (a < b)
			{
				swap(array + b, array + a);
				print_array(array, size);
			}
			a++;
		}
	}
	if (array[a] > *pivot)
	{
		swap(array + a, pivot);
		print_array(array, size);
	}
	return (a);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 * @size: array size
 *
 * Description: Uses the Lomuto partition scheme.
 */

void lomuto_sort(int *array, size_t size, int low, int high)
{
	int pivot_indx;

	if (high - low > 0)
	{
		pivot_indx = partition(array, size, low, high);
		lomuto_sort(array, size, low, pivot_indx - 1);
		lomuto_sort(array, size, pivot_indx + 1, high);
	}
}

/**
 * quick_sort - quicksort algorithm through recursion.
 * @array: An array of integers
 * @size: The size of the array..
 */

void quick_sort(int *array, size_t size)
{
	lomuto_sort(array, size, 0, size - 1);
}
