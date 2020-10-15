#include "holberton.h"
#include <stdlib.h>
/**
 *array_range -  creates an array of integers
 *@min: min value
 *@max: max value
 *Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);
	
	for (i = 0; i <= max; i++, min++)
		array[i] = min;

	return (array);
}
