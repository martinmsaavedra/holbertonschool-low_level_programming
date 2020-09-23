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
	long f1, f2, fibo;

	f1 = 1;
	f2 = 2;
	for (a = 0; a < 98; a++)
	{
		printf("%lo", f1);
		if (a != 97)
		{
			printf(", ");
		}
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
	return (0);
}
