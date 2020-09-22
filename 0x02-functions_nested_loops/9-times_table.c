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
if(a != 0)
{
_putchar('0');
_putchar(',');
}
for (b = 0; b < 10 ; b++)
{
res = a * b;
if (res > 9)
{
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
if (b != 9)
{
_putchar(',');
}}
else if (a > 0 && b > 0)
{
_putchar (' ');
_putchar (' ');
_putchar ('0' + res);
if (b != 9)
{
_putchar(',');
}}}
if (a != 0)
{
_putchar('\n');
}}}
