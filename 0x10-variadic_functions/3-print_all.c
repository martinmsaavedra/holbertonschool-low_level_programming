#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - print char
 * @str: string pointer
 * @argumentList: argumetns list
 */
void print_char(char *str, va_list argumentList)
{
	printf("%s%c", str, va_arg(argumentList, int));
}
/**
 * print_int - print int
 * @str: string pointer
 * @argumentList: argumentList
 */
void print_int(char *str, va_list argumentList)
{
	printf("%s%d", str, va_arg(argumentList, int));
}

/**
 * print_float - print float
 * @str: string pointer
 * @argumentList: arguments list
 */
void print_float(char *str, va_list argumentList)
{
	printf("%s%f", str, va_arg(argumentList, double));
}
/**
 * print_string - print string
 * @str: string pointer
 * @argumentList: arguments list
 */
void print_string(char *str, va_list argumentList)
{
	char *strings = va_arg(argumentList, char*);

	if (!*strings)
		strings = "(nil)";
	printf("%s%s", str, strings);
}
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list argumentList;
	char *str;
	op select_option[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(argumentList, format);
	i = 0;
	j = 0;
	str = "";

	while (format[i] != '\0' && format != NULL)
	{

		while (select_option[j].c != NULL)
		{

			if (format[i] == select_option[j].c[0])
			{
				select_option[j].call_function(str, argumentList);
				str = ", ";
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(argumentList);
}
