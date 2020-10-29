#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list argumentList);
void print_int(va_list argumentList);
void print_float(va_list argumentList);
void print_string(va_list argumentList);

/**
 *struct op - struct op
 *@c: string
 *@call_function: pointer to function
 */
typedef struct op
{
	char *c;
	void (*call_function)();
} op;
#endif
