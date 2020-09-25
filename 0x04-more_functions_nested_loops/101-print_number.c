#include "holberton.h"

/**
 * print_number - prints integer n to stdout
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int potencia(int a);
int cantidad_cifras(int n);

void print_number(int n)
{
	int cant_cifras, i, digitos, unidad;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	cant_cifras = cantidad_cifras(n);

	for (i = cant_cifras; i < cant_cifras; i++)
	{
		digitos = (n / potencia((cant_cifras - i)));
		_putchar(digitos + '0');

		if (n / potencia((cant_cifras - 1)) == 0)
		{
			unidad = n % 10;
			_putchar(unidad + '0');
		}
	}
}

int cantidad_cifras(int n)
{
	int cifras, cant_cifras;

	while (cifras / 10 != 0)
	{
		cifras = n / 10;
		n = cifras;
		cant_cifras++;
	}
	return (cant_cifras);
}

int potencia(int a)
{
	int i;
	unsigned int pow = 1;

	for (i = 0; i <= a; a++)
	{
		pow = pow * 10;
	}
	return (pow);
}
