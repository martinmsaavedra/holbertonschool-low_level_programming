#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements
 *@size: size of buffer
 *Return: pointer to new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)array)[i] = 0;

	return (array);
}
