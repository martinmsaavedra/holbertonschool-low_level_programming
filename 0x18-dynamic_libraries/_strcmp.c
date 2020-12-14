#include "holberton.h"
/**
 * _strcmp -compares two string
 *@s1: string
 *@s2: string to compare
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '0')
	{
		if (s1[a] == s2[a])
		{
			a++;
		}
		else
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
