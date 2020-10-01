#include "holberton.h"
/**
 * reverse_array - reverses the array
 * @a: The array
 * @n: array length
 * Return: void
 **/
void reverse_array(int *a, int n)
{
	int aux = 0;
	int p = 0;
	int u = (n - 1);

	while (p < u)
	{
		aux = a[p];
		a[p] = a[u];
		a[u] = aux;
		p++;
		u--;
	}
}
