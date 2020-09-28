#include <stdio.h>
/**
 * print_array - prints an array
 * @a: The array to print
 * @n: the length of the array
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for ( ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
