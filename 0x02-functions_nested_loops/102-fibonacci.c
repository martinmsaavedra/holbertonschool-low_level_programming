#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	long a, b, f1, f2, fibo;

	f1 = 1;
	f2 = 2;
	printf("%ld, \n", f1);
	printf("%ld, \n", f2);
	for (a = 0; a < 48; a++)
	{
		fibo = f1 + f2;
		printf("%ld, \n", fibo);
		f1 = f2;
		f2 = fibo;
	}
	return (0);
}
