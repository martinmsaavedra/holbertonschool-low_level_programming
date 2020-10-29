#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - prints strings
 *@separator: separator char
 *@n: arguments number
 *Return: prints strings with separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argumentList;
	char *strings;

	va_start(argumentList, n);
	if (separator == NULL)
		separator = "";

		for (i = 0; i < n; i++)
		{
			strings = va_arg(argumentList, char *);

			if (strings == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", strings);
			if (n == i + 1)
				break;
		       printf("%s", separator);
		}
	printf("\n");
	va_end(argumentList);

}
