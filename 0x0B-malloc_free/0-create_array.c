#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: size of array
 *@c: char
 *Return: pointer to array or 0 if size is 0
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *parray;

	if (size != 0)
	{
		parray = (char *)malloc(sizeof(char) * size);
		if (parray != NULL)
		{
			for (i = 0; i < (int)size; i++)
				parray[i] = c;
			return (parray);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
