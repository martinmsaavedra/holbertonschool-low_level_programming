#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *Return: pointer to newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int c1 = 0;
	int c2 = 0;
	int i = 0;
	int j = 0;
	char *parray;

	if (s1[0] == '\0')
		s1 = " ";
	if (s2[0] == '\0')
		s2 = " ";
	while (s1[i] != '\0')
	{
		c1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		c2++;
		j++;
	}
	parray = (char *) malloc((c1 + c2 + 2));
	if (parray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < c1; i++)
			parray[i] = s1[i];

		for (j = 0; j < c2; j++)
		{
			parray[i] = s2[j];
			i++;
		}
		return (parray);
	}
}
