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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);	
	}
	else
	{
		
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
