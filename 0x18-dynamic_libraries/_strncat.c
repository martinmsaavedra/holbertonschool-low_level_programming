#include "holberton.h"
/**
 *_strncat - concetenate two strings.
 *@dest: destination string
 *@src: source string
 *@n: byte length
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		x++;
		i++;
	}

	return (dest);
}