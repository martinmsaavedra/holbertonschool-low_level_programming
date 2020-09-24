#include "holberton.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
