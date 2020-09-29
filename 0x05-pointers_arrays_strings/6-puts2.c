#include "holberton.h"
/**
 * puts2 - writes a string in stdout
 * @str: The string pointer to print
 *
 * Return: Prints in stdout the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(i % 2 == 0)
		{
			_putchar (str[i]);
		}
		i++;
	}
	_putchar('\n');
}
