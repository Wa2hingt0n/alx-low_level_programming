#include <stdlib.h>
#include <stdio.h>

/**
 *main - Program entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char d, c;

	d = '0';
	c = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
