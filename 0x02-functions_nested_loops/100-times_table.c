#include "holberton.h"
/**
 * print_times_table - writes the tables to stdout
 * @n - 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
int a, b, res;

if (n < 16 && n >= 0)
{
for (a = 0; a < n + 1 ; a++)
{
_putchar('0');
for (b = 1; b < n + 1 ; b++)
{
res = a * b;
if (res > 9 && res < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
else if (res > 99)
{
_putchar(',');
_putchar(' ');
_putchar(((res / 10) / 10) + '0');
_putchar(((res % 100) / 10) + '0');
_putchar(res % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar ('0' + res);
}}
_putchar('\n');
}}}
