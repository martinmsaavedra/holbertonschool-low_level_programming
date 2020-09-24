#include "holberton.h"
/**
 * print_most_numbers - prints most of the numbers
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
