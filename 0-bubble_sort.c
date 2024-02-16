#include "sort.h"
/**
 * bubble_sort - sort array lements from small to large value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t x; 
    int index = -1;
    int temp;

	if (array == NULL || size < 2)
		return;
    while (index)
    {
        index = 0;
	    for (x = 0; x < size-1; x++)
	    {   
		    if (array[x] > array[x + 1])
		    {   
			    temp = array[x];
			    array[x] = array[x + 1];
			    array[x + 1] = temp;
                index++;
			    print_array(array, size);
		    }
        }
	}
}
