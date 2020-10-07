#include "holberton.h"

/**
 *auxiliary- aux function
 *@n: the integer
 *@b: result
 *Return: Call aux function
*/

int auxiliary(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0)
		return (0);

	return (auxiliary(n, b - 1));
}

/**
 *is_prime_number - returns if n is a prime number
 *@n: the integer
 *Return: 1 if the imput is prime otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (auxiliary(n, n - 1));
}
