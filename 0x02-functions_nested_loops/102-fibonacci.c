#include <stdio.h>

/**
 * fibo - prints the first 50 fibonacci numbers
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void fibo(void)
{
	int a, b, f1, f2, fibo;

	f1 = 1;
	f2 = 2;
	printf("%d, ", f1);
	printf("%d, ", f2);
	for (a = 0; a < 48; a++)
	{
		fibo = f1 + f2;
		printf("%d, ", fibo);
		f1 = f2;
		f2 = fibo;
	}
}
