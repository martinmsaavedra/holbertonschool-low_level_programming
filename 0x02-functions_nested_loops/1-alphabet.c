#include "holberton.h"
   /**
   * print_aphabet - print alphabet
   * 
   *
   * Return: On success 1.
   * On error, -1 is returned, and errno is set appropriately.
   */
void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
