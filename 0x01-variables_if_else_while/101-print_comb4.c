#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, l;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (l = 48; l <= 57; l++)
{
if (i < j && j < l)
{
putchar(i);
putchar(j);
putchar(l);
if (i != 55 || j != 56 || l != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
