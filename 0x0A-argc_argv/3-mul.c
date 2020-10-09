#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result of the multiplication
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: own name
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	(void)argc;

	if (argv[1] != '\0')
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
