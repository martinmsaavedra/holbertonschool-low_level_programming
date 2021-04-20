#include "search_algos.h"

/**
 * linear_search - function to search for a given value in an array
 * @array: pointer to the array to search
 * @size: size of the array
 * @value: value to search for
 * Return: the index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
