#include "holberton.h"
/**
 * swap_int - swaps int a to b and b to a
 * @a: pointer to a
 * @b: pointer to b
 *
 *
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
