#include "holberton.h"
/**
 * print_sign - print absolute value of n to stdout
 * @n: The int to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
return (0);
}
