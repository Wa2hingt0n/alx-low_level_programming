#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times the character _ should be printed
 *
 * Desrcription: Prints the character _ n times on the terminal
 * Return: void
 */

void print_line(int n)
{
	int l;

	l = 0;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
