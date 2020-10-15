#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of buffer
 *Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
