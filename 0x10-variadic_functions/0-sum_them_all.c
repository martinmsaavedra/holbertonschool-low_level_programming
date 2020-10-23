#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of parameters
 *Return: sum if n > 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n > 0)
	{
		va_list argumentList;

		va_start(argumentList, n);
		for (i = 0; i < n; i++)
			sum += va_arg(argumentList, int);
		va_end(argumentList);
	}
	return (sum);
}
