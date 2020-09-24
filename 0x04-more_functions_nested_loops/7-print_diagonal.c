#include "holberton.h"
/**
 * print_diagonal - prints a diagonal of n length to stdout
 * @n: diagonal lenght
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				if (a == b)
				{
					_putchar(92);
					break;
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
