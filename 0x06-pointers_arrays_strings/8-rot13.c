#include "holberton.h"
/**
 * rot13 - encodes to ROT13
 * @s: string to convert
 *
 * Return: On success 1.
 **/
char *rot13(char *s)
{
	int i, j;
	char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letras[j] != '\0'; j++)
		{
			if (s[i] == letras[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
