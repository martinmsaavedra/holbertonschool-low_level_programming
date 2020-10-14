#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: string
 *Return: pointer to string or 0 if size is 0
 */

char *_strdup(char *str)
{
	int i;
	char *parray;
	int size = 0;
	int j = 0;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
	{
		size++;
		j++;
	}
		parray = (char *)malloc(sizeof(char) * size + 1);
	if (parray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		parray[i] = str[i];
	}
	return (parray);
	}
}
