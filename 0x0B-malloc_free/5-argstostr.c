#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments
 *@ac: arguments count
 *@av: arguments vector
 *Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int l = 0;
	int cont = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cont++;
		}
	}
	cont = cont + ac;
	array = (char  *)malloc(cont * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
		{
			array[l] = av[i][j];
		}
		array[l++] = '\n';
	}
	return (array);
}
