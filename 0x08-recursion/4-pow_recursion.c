#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: value
 *@y: exponent
 *Return: value of x raised to power y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (_pow_recursion(x, y - 1) * x);
}
