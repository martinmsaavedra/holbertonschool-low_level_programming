#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_int - function to print ints
 * @args: va_list type
 * Return: always successful
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - function to print char
 * @args: va_list type
 * Return: always successful
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_float - function to print floats
 * @args: va_list type
 * Return: always successful
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function to print string
 * @args: va_list type
 * Return: always successful
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

/**
 * print_all - function to print all inputs
 * @format: const pointer to functionof type char
 * Return: always successful
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *seperator;
	op options[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (options[j].c != NULL)
		{
			if (format[i] == options[j].c[0])
			{
				printf("%s", seperator);
				options[j].call_function(args);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
