#include "holberton.h"
/**
 * times_table - writes the tables to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int a, b, res;
for (a = 0; a < 10 ; a++)
{
_putchar('0');
for (b = 1; b < 10 ; b++)
{
res = a * b;
if (res > 9)
{
_putchar(',');
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
 else
{
_putchar(',');
_putchar (' ');
_putchar (' ');
_putchar ('0' + res);
}}
_putchar('\n');
}}
