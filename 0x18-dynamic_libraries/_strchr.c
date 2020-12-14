#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character to find
 *Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
