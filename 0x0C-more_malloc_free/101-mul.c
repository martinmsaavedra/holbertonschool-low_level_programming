#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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

/**
 * print_number - Prints integers.
 * @n: Integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 *main - multiplies two numbers
 *@argc: arg count
 *@argv: arg vector
 *Return: zero
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, mul;


	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	if (num1 == 0 && *argv[1] != 48)
		printf("Error\n");
	num2 = _atoi(argv[2]);
	if (num2 == 0 && *argv[2] != 48)
		printf("Error\n");
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
