#include "main.h"

/**
 * print_square - Prints a square
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
