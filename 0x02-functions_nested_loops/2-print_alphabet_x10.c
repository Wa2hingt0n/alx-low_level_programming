#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char c = 'a';

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		i++;

		_putchar('\n');
	}
}
