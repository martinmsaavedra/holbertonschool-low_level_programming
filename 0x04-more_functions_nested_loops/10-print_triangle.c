#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - b)
			_putchar(' ');

			else
			_putchar('#');
		}
		_putchar('\n');
}
}
