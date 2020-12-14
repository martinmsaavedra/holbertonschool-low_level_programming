#include "holberton.h"
/**
 * _strcat - concatenate two strings.
 *@dest: string destination
 *@src: string source
 * Return: strcat.
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
