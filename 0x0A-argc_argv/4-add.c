#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - print result of addtion
 *@argc: arguments counter
 *@argv: arguments vector
 *Return: own name
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
	int error = 0;
	(void)argc;

	if (argv[1] != '\0')
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) < 48 || *(argv[i] + j) > 59)
				{
					printf("Error\n");
					error = 1;
				}
			}
			sum += atoi(argv[i]);
		}
		if (error == 0)
		{
			printf("%d\n", sum);
			return (0);
		}
	}
	else
	{
		printf("0\n");
		return (1);
	}
	return (0);
}
