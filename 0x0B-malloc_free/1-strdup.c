#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - calculate the length of a string
 * @s: pointer of string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int contador = 0;
	int total = 0;

	while (*(s + contador) != '\0')
	{
		contador++;
		total++;
	}
	return (total);
}


/**
 *_strdup - duplicates a string
 *@str: size of array
 *Return: pointer to string or 0 if size is 0
 */

char *_strdup(char *str)
{
	int i;
	char *parray;
	int size;

	size = _strlen(str);

	if (size == 0)
		return (NULL);
	parray = (char *)malloc(sizeof(char) * size + 1);
	if (parray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		parray[i] = str[i];
	return (parray);
}
