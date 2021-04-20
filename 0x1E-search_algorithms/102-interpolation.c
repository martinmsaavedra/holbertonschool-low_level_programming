#include "search_algos.h"

/**
 * interpolation_search - search an element using int search algorithm
 * @arr: the array
 * @size: the size of the array
 * @value: value to find
 * Return: the index where is founded or -1
 */

int interpolation_search(int *arr, size_t size, int value)
{
	if (arr == NULL || size == 0)
		return (-1);

	return (int_search_aux(arr, 0, size - 1, size, value));
}

/**
 * int_search_aux - search an element using interpolation search algorithm
 * @arr: the array
 * @start: the start of the array or subarray
 * @end: the end of the arr or subarr
 * @size: the size of the array
 * @value: value to find
 * Return: the index where is founded or -1
 */

int int_search_aux(int *arr, int start, int end, size_t size, int value)
{
	size_t pos;

	pos = start + (((double)(end - start) / (arr[end] - arr[start]))
	      * (value - arr[start]));

	if (pos > size)
	{
		printf("Value checked arr[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked arr[%ld] = [%d]\n", pos, arr[pos]);
	if (arr[start] == value)
		return (start);
	if (arr[end] == value)
		return (end);
	if (size == 1 && arr[start] != value)
		return (-1);

	if (arr[pos] < value)
		return (int_search_aux(arr, pos + 1, end, end - pos, value));
	if (arr[pos] > value)
		return (int_search_aux(arr, start, pos - 1, end - start, value));

	return (-1);
}
