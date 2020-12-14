#include "holberton.h"
/**
 * _strlen - calculate the length of a string
 * @s: pointer of string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int contador = 0;
	int total = 0;

	while (*(s + contador) != '\0')
	{
		contador++;
		total++;
	}
	return (total);
}