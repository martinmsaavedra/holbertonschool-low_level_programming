#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, l, m;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (l = 48; l <= 57; l++)
{
for (m = 48; m <= 57; m++)
{
if (j < l && j < m && l <= m)
{
putchar(i);
putchar(j);
putchar(32);
putchar(l);
putchar(m);
if (i != 57 || j != 56 || l != 57 || m != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
