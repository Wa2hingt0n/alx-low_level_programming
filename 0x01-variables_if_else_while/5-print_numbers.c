#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar(10);
	return (0);
}
