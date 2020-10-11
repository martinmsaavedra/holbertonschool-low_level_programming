#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimun number of coins to make change
 *@argc: counter of arguments
 *@argv: pointers to arrays to arguments
 *Return: minimun  change
 */
int main(int argc, char *argv[])
{
	int saldo = 0;
	int monedas = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
else
{
	saldo = atoi(argv[1]);
	if (saldo < 0)
		printf("0\n");
	else
	{
	for (; saldo - 25 >= 0; saldo -= 25, monedas++)
	{
	}
	for (; saldo - 10 >= 0; saldo -= 10, monedas++)
	{
	}
	for (; saldo - 5 >= 0; saldo -= 5, monedas++)
	{
	}
	for (; saldo - 2 >= 0; saldo -= 2, monedas++)
	{
	}
	if (saldo == 1)
		monedas++;
	}
	if (monedas >= 1)
		printf("%d\n", monedas);
}
	return (0);
}
