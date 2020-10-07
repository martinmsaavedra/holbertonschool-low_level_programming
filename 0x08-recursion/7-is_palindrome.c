#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: the string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}


/**
 *is_palindrome - check if string is palindrome
 *@s: the string
 *Return: return 1 if palindrome otherwise return 0
 *
 */
int is_palindrome(char *s)
{
	int count = 0;
	int len = _strlen_recursion(s);

	return (aux(s, len - 1, count));
}

/**
 *aux - auxiliary function
 *@s: pointer to string
 *@len: pointer to end of string
 *@count: counter from begginig
*Return: 1 if string is palindrome otherwise returns 0
 */

int aux(char *s, int len, int count)
{
	if (count < len && s[count] == s[len])
		return (aux(s, len - 1, count + 1));
	if (count >= len)
		return (1);
	return(0);
}
