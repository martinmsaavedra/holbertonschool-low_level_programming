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
	char letras[] = "aAeEoOtTlL";
	char numeros[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letras[j] != '\0'; j++)
		{
			if (s[i] == letras[j])
			{
				s[i] = numeros[j];
			}
		}
	}
	return (s);
}
