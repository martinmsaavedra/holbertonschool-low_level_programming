#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: the string
 *@accept: set of bytes to search in string
 *Return: the pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				char *p = &s[i];

				return (p);
			}
		}
	}
	return (0);
}