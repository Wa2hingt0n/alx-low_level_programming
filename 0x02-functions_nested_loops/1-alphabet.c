#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
