#include "holberton.h"
/**
 *_strspn - Gets the length of a prefix substring
 *@s: the string
 *@accept: string to control
 *Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}
	if (!(s[i] == accept[j]))
	break;
}
return (count);
}
