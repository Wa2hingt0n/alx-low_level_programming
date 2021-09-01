#include <stdio.h>

/**
 * main - Prints the first 98 numbers of the fibonacci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	unsigned long i, j, sum;

	i = 1;
	j = 2;
	sum = i + j;

	printf("1, 2");

	for (n = 1; n <= 98; n++)
	{
		printf(", %lu", sum);

		i = j;
		sum += j;
		j = sum - i;
	}
	printf("\n");

	return (0);
}
