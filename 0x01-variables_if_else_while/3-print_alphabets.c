#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (n = 65; n <= 90; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
