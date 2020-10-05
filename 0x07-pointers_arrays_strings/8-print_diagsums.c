#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 *@a: multidimensional array
 *@size: size of the square
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int diagonal_1 = 0;
	int diagonal_2 = 0;

	for (x = 0; x < size * size ; x += size + 1)
	{
		diagonal_1 += a[x];
	}

	for (y = size - 1; y < size * size - 1 ; y += size - 1)
	{
		diagonal_2 += a[y];
	}

	printf("%d, %d\n", diagonal_1, diagonal_2);

}
