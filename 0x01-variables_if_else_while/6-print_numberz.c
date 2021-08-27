#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
