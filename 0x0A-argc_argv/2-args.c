#include "holberton.h"
#include <stdio.h>
/**
 *main - prints all arguments it recives
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: own name
 */

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	(void)argv;
	for (; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
