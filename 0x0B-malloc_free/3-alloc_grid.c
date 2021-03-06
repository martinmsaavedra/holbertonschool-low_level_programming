#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **parray;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
		parray = (int **)malloc(height * sizeof(int *));
		if (parray == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			parray[i] = (int *) malloc(width * sizeof(int));
			if (parray[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
				{
					free(parray[i]);
				}
				free(parray);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				parray[i][j] = 0;
			}
		}
		return (parray);
}
