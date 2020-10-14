#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *Return: pointer to newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	int i, j;
	char *parray;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	parray = (char *) malloc(i + j + 1);
	if (parray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < i; a++)
		{
			parray[a] = s1[a];
		}
		for (b = 0; b < j; b++)
		{
			parray[a + b] = s2[b];
		}
		return (parray);
	}
}
