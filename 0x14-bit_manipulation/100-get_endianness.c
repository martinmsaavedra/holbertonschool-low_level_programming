#include "holberton.h"
/**
 *get_endianness - function that checks the endianness
 *Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
