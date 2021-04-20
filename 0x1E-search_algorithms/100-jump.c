#include "search_algos.h"
#include <math.h>

/**
 * print_jump - auxiliary function that helps with printing.
 * @arr:  pointer to the first element of the array to search in.
 * @start: start of the array.
 * @end: end of the arraty.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the first index where value is located. or -1
 */

int print_jump(int *arr, int start, int end, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (; start <= end; start++)
	{
		printf("Value checked array[%i] = [%i]\n", start, arr[start]);
		if (arr[start] == value)
			return (start);
	}
	return (-1);
}
/**
 * jump_search - function that searches for a value in a sorted array of \
integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: size  in array.
 * @value: value to search for.
 * Return: the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i, start, end;

	if (!array)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			start = i - jump;
			end = i;
			return (print_jump(array, start, end, size, value));
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (print_jump(array, i - jump, i, size, value));
}
