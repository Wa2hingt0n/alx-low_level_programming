#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar(10);
	return (0);
}
