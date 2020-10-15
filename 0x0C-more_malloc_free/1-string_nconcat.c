#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 *string_nconcat - concatenates two strings
 *@s1: string one
 *@s2: string two
 *@n: size of buffer or string two
 *Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int lenght1, lenght2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);
	if (n > lenght2)
		n = lenght2;

	array = malloc(sizeof(char) * (lenght1 + n) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < lenght1; i++)
		array[i] = s1[i];
	for (j = 0; j < n; j++)
		array[i + j] = s2[j];
	array[i + j] ='\0';
	return (array);
}

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
