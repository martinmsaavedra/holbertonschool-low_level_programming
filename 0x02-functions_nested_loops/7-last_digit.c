#include "holberton.h"
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = (n * -1);
	}
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
