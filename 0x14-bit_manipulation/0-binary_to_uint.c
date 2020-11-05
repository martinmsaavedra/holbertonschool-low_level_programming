#include "holberton.h"
/**
 *binary_to_uint - convert binary to integer
*@b:binary number
*Return: number in decimal base
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
	}
