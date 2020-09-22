#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers to 98
 * @n: The base int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}}
	if (n > 98)
	{
		for (; n > 98 ; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
