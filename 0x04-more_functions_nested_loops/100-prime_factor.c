#include <stdio.h>
#include <math.h>

int main(void)
{
	long long a, maxPrime;
	long long n = 612852475143;

	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	printf("%lld", maxPrime);
}
