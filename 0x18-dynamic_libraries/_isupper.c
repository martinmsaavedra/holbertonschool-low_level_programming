#include "holberton.h"
/**
 * _isupper - checks if character c is uppercase
 * @c: The character to check
 *
 * Return: On success 1.
 * If not uppercase, returns 0 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}