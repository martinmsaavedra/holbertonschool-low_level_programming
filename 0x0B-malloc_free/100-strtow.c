#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	int i, k, j, largo, palabra;
	char str[] = "      Holberton School         #cisfun      ";
	largo = 0;
	palabra = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
		while (str[i] != ' ')
		{
			i++;
			largo++;
		}
		palabra++;
		largo++;
		}
	}
	char aux[3];
	
	k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
			if (str[i] != ' ')
			{
				while (str[i] != ' ' && str[i] != '\0')
				{
					aux[k] = str[i];
					k++;
					i++;
				}
				aux[k++] = '\n';
			}
		}

printf("%d\n", largo);
printf("%d\n", palabra);
printf("%s", aux);

		int contador = 0;
		int l = 0;
		char *array;

//		array = (char **)malloc(palabra * sizeof(char *) + 1);
//		if (array == NULL)
//		return (NULL);

		for (i = 0; i < palabra; i++)
		{
		}
		
/*
array[i] = (char *)malloc(contador * sizeof(char) + 1);
			if (array[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
				{
					free(array[i]);
				}
				free(array);
			}
			contador = 0;
		}
		for (i = 0; i < palabra; i++)
		{
			for (j = 0; aux[j] != '\0'; j++)
			{
				array[i][j] = aux[j];
			}
		}
		return (array);*/
}
