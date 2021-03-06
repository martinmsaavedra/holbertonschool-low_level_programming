#include "holberton.h"
/**
 * puts_half - writes the half of the string in stdout
 * @str: The string pointer to print
 *
 * Return: Prints in stdout the string
 */

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	i++;
	for (i = (i / 2); str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
