#include "search_algos.h"
#include <math.h>

/**
 * print_jump - auxiliary function that helps with printing.
 * @arr:  is a pointer to the first element of the array to search in.
 * @l: is the lower or beginning of the array.
 * @h:is the high part or the end.
 * @size: is the number of elements in array.
 * @value:  is the value to search for.
 * Return: the first index where value is located. or -1
 */

int print_jump(int *arr, int l, int h, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n", l, h);
	if (h >= size)
		h = size - 1;
	for (; l <= h; l++)
	{
		printf("Value checked array[%i] = [%i]\n", l, arr[l]);
		if (arr[l] == value)
			return (l);
	}
	return (-1);
}
/**
 * jump_search - function that searches for a value in a sorted array of \
integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i, l, h;

	if (!array)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			l = i - jump;
			h = i;
			return (print_jump(array, l, h, size, value));
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (print_jump(array, i - jump, i, size, value));
}
