#include <stdio.h>

/**
 * main - Prints sum of natural numbers
 *
 * Description: Prints the sum of all natural numbers below 1024 that are
 * multiples of 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int a, sum, n;

	sum = 0;

	for (n = 3; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			a = n;

			sum += a;
		}
	}
	printf("%d\n", sum);

	return (0);
}
