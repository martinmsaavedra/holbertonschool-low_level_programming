#include <stdio.h>
/**
 * main - return prime factors
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				return (maxFact);
			}
		}
	}
}
