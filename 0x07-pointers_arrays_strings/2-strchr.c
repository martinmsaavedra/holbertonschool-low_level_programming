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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			char *p = &s[i];

			return (p);
		}
		return (0);
	}
}
