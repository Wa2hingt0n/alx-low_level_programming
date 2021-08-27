#include <stdlib.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
