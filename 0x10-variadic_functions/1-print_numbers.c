#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: separator char
 *@n: arguments number
 *Return: prints numbers with separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	if (n > 0)
	{
		va_list argumentList;

		va_start(argumentList, n);
		for (i = 0; i < n; i++)
		{
			num = va_arg(argumentList, int);
			(separator) ? ((i == n - 1) ? printf("%d", num) :
				       printf("%d%c ", num, *separator)) : printf("%d ", num);
		}
		printf("\n");
		va_end(argumentList);
	}
}
