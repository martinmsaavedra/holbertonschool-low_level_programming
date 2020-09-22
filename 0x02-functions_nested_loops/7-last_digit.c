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
	int a;
	a = n % 10;

	if (a < 0)
	{
		a = -1 * a;
	}

	_putchar(a + 48);

	return (a);
}
