#include "sort.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * partition - Implement the quicksort algorithm through recursion.
 * @array: An array of integers
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 *
 */ 
int partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array + low, high - low + 1);
        }
    }
    swap(&array[i + 1], &array[high]);
    print_array(array + low, high - low + 1);
    return (i + 1);
}
/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array, int low, int high)
{
    int pivot_indx;

    if (low < high)
    {
        pivot_indx = partition(array, low, high);
        lomuto_sort(array, low, pivot_indx - 1);
        lomuto_sort(array, pivot_indx + 1, high);
    }
}

/**
 * quick_sort - quicksort algorithm through recursion.
 * @array: An array of integers
 * @size: The size of the array..
 */

void quick_sort(int *array, size_t size)
{
    lomuto_sort(array, 0, size - 1);
}
