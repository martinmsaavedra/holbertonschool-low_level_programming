#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character to find
 *Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
