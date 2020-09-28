#include "holberton.h"
/**
 * puts_half - writes the half of the string in stdout
 * @str: The string pointer to print
 *
 * Return: Prints in stdout the string
 */

void puts_half(char *str)
{
	int i, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = (i / 2); j < i; j++)
	{
		_putchar (str[j]);
	}
	_putchar('\n');
}
