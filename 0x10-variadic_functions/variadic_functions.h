#include <stdarg.h>
#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *str, va_list argumentList);
void print_int(char *str, va_list argumentList);
void print_float(char *str, va_list argumentList);
void print_string(char *str, va_list argumentList);
typedef struct op
{
	char *c;
	void (*call_function)();
}op;
#endif
