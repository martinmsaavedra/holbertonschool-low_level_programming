#include "holberton.h"
/**
 *wildcmp -  compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 1 if equals otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (aux2(s1, s2 + 1));

	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
/**
 *aux2 - auxiliary function
 *@s1: pointer of string 1
 *@s2: pointer of string 2
 *Return: pointer
 */
int aux2(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (wildcmp(s1, s2));
	return (aux2(s1 + 1, s2));
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
}
