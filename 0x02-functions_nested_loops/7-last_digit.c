#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: The integer to calculate
 *
 * Return: @a
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar('0' + a);

	return (a);
}
