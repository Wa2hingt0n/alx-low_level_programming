#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci sequence numbers below 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, j, sum, total;

	i = 0;
	j = 1;
	total = 0;
	sum = 0;

	while (sum < 4000000)
	{
		sum = i + j;
		i = j;
		sum += j;
		j = sum - i;

		if ((sum % 2) == 0)
			total += sum;
	}
	printf("%li\n", total);

	return (0);
}
