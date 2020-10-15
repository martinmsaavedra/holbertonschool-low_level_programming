#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: position of memory
 *@old_size: old size of buffer
 *@new_size: new size of buffer
 *Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;
	unsigned int i;
	char *optr = ptr;

	if (new_size == old_size)
		return (optr);
	if (optr == NULL)
	{
		array = malloc(new_size);
		if (!array)
			return (NULL);
		return (array);
	}
	if (new_size == 0)
	{
		free(optr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		array = malloc(new_size);
		if (!array)
			return (NULL);

		for (i = 0; i < old_size; i++)
			array[i] = optr[i];
		free(optr);
	}
	return (array);
}
