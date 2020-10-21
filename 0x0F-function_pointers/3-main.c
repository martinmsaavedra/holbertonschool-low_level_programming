#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - calculator
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
