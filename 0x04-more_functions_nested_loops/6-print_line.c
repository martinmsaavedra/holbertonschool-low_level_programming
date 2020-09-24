#include "holberton.h"
/**
 * print_line - print lines of n lenght
 * @n: lenght of line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int a;

	for (a = 0 ; a < n ; a++)
	{
		if (n != 0 || n < 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
