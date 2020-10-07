#include "holberton.h"

/**
 *auxiliary- aux function
 *@n: the integer
 *@b: result
 *Return: Call aux function
*/
int auxiliary(int n, int b)
{
	if (b * b == n)
		return (b);
	if (b * b >= n)
		return (-1);

	return (auxiliary(n, b + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the integer
 *Return: the square root of integer
 */

int _sqrt_recursion(int n)
{
	int b = 2;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (n);
	return (auxiliary(n, b + 1));
}
