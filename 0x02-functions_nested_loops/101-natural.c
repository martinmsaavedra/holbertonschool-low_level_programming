#include <stdio.h>
/**
 * main - calculates the sum of the multiples of 3 or 5 until 1024
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int a, total;

	for (a = 0 ; a < 1024 ; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			total += a;
		}
	}
	printf("%d\n", total);
	return (0);
}
