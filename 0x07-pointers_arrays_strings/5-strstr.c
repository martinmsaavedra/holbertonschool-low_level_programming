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

	if (needle == NULL)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (!(needle[j] == haystack[i + j]))
				{
					break;
				}
			return (&haystack[i]);
			}
		}
	}
	return (0);
}
