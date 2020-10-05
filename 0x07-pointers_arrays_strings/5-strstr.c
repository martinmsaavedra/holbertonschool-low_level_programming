#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: string where find
 *@needle: sting to find
 *Return: pointer were string was founded
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0] && haystack[i] != '\0')
				return (&haystack[i]);
		}
	}
	return (0);
}
