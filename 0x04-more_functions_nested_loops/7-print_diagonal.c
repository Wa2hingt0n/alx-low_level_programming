#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Number of times \ should be printed
 *
 * Description: Prints a diagonal line using the \ character n times
 * Return: void
 */

void print_diagonal(int n)
{
	int l, i;

	i = 0;

	for (l = 0; l < n; l++)
	{
		for (i = 0; i < l; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');
}
