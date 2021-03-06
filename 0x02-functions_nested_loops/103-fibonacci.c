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
	int a;
	long f1, f2, fibo, total;

	total = 0;
	f1 = 1;
	f2 = 2;
	for (a = 1 ; a < 34 ; a++)
	{
		if (f1 % 2 == 0)
		{
			total += f1;
		}
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
	}
	printf("%ld", total);
	printf("\n");
	return (0);
}
