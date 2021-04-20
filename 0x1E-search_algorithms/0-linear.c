#include "search_algos.h"

/**
 * linear_search - search an element using linear search algorithm
 * @array: Pointer to the array
 * @size: The size of the array
 * @value: Value to find
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
    
    if (array == NULL || size == 0)
	return (-1);
    
    for (; i < size; i++)
    {
	printf("Value checked array[%li] = [%d]\n", i, array[i]);
	if (array[i] == value)
	    return (i);
    }

    return (-1);
}
