B#include "holberton.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	for (; i <= 9 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
