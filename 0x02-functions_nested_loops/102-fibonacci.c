#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void main(void)
{
	int a;
	long f1, f2, fibo;

	f1 = 1;
	f2 = 2;
	for (a = 0; a < 50; a++)
	{
		printf("%ld, ", f1);
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
}
