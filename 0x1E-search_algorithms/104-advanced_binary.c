#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search into array.
 * Return: first index when value is located in array otherwise return -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;

	if (!array)
		return (-1);

	return (advanced_binary_aux(array, value, start, end));
}

/**
 * advanced_binary_aux - searches for a value in an array of integers
 * @array: array to search.
 * @value: value to search into array.
 * @start: start to search
 * @end: end to search
 * Return: first index when value is located in array otherwise return -1.
 */

int advanced_binary_aux(int *array, int value, int start, int end)
{
	int mid = 0, i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		printf(i == end ? "\n" : ", ");
	}
	if (end < start)
		return (-1);
	mid = start + (end - start) / 2;
	if (array[mid] == value && (mid == start || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_aux(array, value, start, mid));
	if (array[mid] < value)
		return (advanced_binary_aux(array, value, mid + 1, end));
	return (-1);
}
