#include "holberton.h"
/**
 * cap_string - capitalizes all word of a string
 * @s: the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i] != 0; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		    s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '(' ||
		    s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}') &&
		    (s[i] <= 122 && s[i] >= 97))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
