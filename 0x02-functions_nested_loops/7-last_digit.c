#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: The integer to calculate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -n;
	}
	ld = n % 10;
	_putchar(ld + '0');

	return (ld);
}
