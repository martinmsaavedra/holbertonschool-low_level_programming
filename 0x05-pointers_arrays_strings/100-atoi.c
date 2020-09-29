#include "holberton.h"

/**
 *_atoi - Convert a string to integer
 *@s: the string to convert
 *Return: integer
 **/

int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{

		res = (res * 10) - (s[i++] - '0');
	}

	return (res * sign);
}
