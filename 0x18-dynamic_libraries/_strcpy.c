#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src, to dest
 * @src: Source of the string to copy
 * @dest: destintation
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		count++;
	}
	dest[count] = src[count];
	return (dest);
}