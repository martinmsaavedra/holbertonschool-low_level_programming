#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - print char
 * @argumentList: argumetns list
 */
void print_char(va_list argumentList)
{
	printf("%c", va_arg(argumentList, int));
}
/**
 * print_int - print int
 * @argumentList: argumentList
 */
void print_int(va_list argumentList)
{
	printf("%d", va_arg(argumentList, int));
}

/**
 * print_float - print float
 * @argumentList: arguments list
 */
void print_float(va_list argumentList)
{
	printf("%f", va_arg(argumentList, double));
}
/**
 * print_string - print string
 * @argumentList: arguments list
 */
void print_string(va_list argumentList)
{
	char *str;

	str = va_arg(argumentList, char*);
	printf("%s", str != NULL ? str : "(nil)");
}
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
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
	str = "";

	while (format[i] && format)
	{
		j = 0;
		while (select_option[j].c != NULL)
		{

			if (format[i] == select_option[j].c[0])
			{
				printf("%s", str);
				select_option[j].call_function(argumentList);
				str = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argumentList);
}
