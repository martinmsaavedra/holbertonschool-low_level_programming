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
	va_list argumentList;

	if (separator == NULL)
		separator = "";

	va_start(argumentList, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(argumentList, int);
			printf("%d", num);
			if (i == n - 1)
			{
				break;
			}
			printf("%s", separator);
		}
		printf("\n");
		va_end(argumentList);
}
