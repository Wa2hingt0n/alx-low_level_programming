#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return: Always 0(success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		if ((c == 'e') || (c == 'q'))
			c++;
	}
	putchar(10);
	return (0);
}
