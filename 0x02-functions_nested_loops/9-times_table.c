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
int a, b, primer_digito, segundo_digito, res;
for (a = 0; a < 10 ; a++)
{
for (b = 0; b < 10 ; b++)
{
res = a * b;
if (res == 0 && a == 0 && b == 0)
{
_putchar('0');

_putchar(',');
}
if (res == 0 && a == 0 && b != 0)
{
_putchar(' ');
_putchar(' ');
_putchar('0');
_putchar(',');
}
if (res == 0 && a != 0)
{
_putchar('0');
_putchar(',');
}
if (res > 9)
{
primer_digito = res / 10;
segundo_digito = res % 10;
_putchar(' ');
_putchar(primer_digito + '0');
_putchar(segundo_digito + '0');
 if (b != 9)
   {
_putchar(',');
   }}
if (res < 10 && res != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
 if(b != 9)
   {
_putchar(',');
   }}}
_putchar('\n');
}}
