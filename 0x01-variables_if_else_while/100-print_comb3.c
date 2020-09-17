#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
if (i < j)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
