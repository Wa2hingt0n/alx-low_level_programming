#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Integer to be tested
 *
 * Return: final
 */

int print_last_digit(int n)
{
	int final;

	final = n % 10;
	if (final < 0)
		final = -final;

	_putchar(final + '0');

	return (final);
}
