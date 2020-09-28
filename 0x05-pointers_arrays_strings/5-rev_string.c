#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: The string to print
 *
 * Return: Prints in stdout the string
 */
void rev_string(char *s)
{
	char aux;
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
			}
	i--;
	for (j = 0; j < i; j++)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		i--;
	}

}
