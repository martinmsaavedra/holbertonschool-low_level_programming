#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a value using jump
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	if (array[0] > value)
		return (-1);
	if (array[0] == value)
		return (0);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			for (j = (i - jump); j <= i; j++)
			{
				printf("Value checked array [%ld]: [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		else
			printf("Value checked array [%ld]: [%d]\n", i, array[i]);
	}
	if (array[size - 1] < value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
		printf("Value checked array [%ld]: [%d]\n", i - jump, array[i - jump]);
	}
	return (-1);
}
