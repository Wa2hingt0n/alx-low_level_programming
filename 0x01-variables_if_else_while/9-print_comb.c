#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n, c, s;

	n = 48;
	c = 44;
	s = 32;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(c);
			putchar(s);
		}
		n++;
	}
	putchar(10);
	return (0);
}
