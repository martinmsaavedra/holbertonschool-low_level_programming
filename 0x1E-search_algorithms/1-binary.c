#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search into array.
 * Return: first index when value is located in array otherwise return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;

	if (!array)
		return (-1);

	return (binary_search_aux(array, value, start, end, size));
}

/**
 * binary_search_aux - searches for a value in an array of integers
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search into array.
 * @start: start to search
 * @end: end to search
 * Return: first index when value is located in array otherwise return -1.
 */

int binary_search_aux(int *array, int value, int start, int end, int size)
{
	int mid = 0, i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		printf(i == end ? "\n" : ", ");
	}
	if (size == 0)
		return (-1);

	mid = start + (end - start) / 2;

	if (array[mid] == value)
		return (mid);
	if (value > array[mid])
		return (binary_search_aux(array,
			value, mid + 1, end, (size - 1) / 2));
	if (value < array[mid])
		return (binary_search_aux(array,
			value, start, mid - 1, (size - 1) / 2));

	return (-1);
}
