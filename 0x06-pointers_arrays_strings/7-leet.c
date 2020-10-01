#include "holberton.h"
/**
 * leet - encodes a string to 1337
 * @s: string to convert
 *
 * Return: On success 1.
 **/
char *leet(char *s)
{
	int i, j;
	char letras[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numumeros[11] = {"4", "4", "3", "3", "0", "0", "7", "7", "1", "1"};

	for (i = 0; s[0] != '\0'; i++)
	{
		for (j = 0; s[0] != '\0'; j++)
		{
			if (s[j] == letras[i])
				s[j] == numeros[i]
					}
	}
	return (s)
}
