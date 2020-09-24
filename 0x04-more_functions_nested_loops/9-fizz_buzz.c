#include <stdio.h>
/**
 * main - writes buzz of multiples of 3, fizz of multiples of 5
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int a;

	for (a = 1 ; a < 101 ; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
