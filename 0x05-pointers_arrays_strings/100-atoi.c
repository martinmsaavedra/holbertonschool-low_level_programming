#include "holberton.h"
int _atoi(char *s)
{
	int i, res = 0;
	int sing = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
			break;
		}
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			if (s[i] == ' ')
				break;
		}
	}

	return (res * sign);
}
