#include "holberton.h"
#include <stdio.h>
/**
 *main - prints number of arguments
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: own name
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
