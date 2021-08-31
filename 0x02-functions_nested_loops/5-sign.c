#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if number is positive, 0 if number is zero and -1 if number is -ve
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else
	{
		_putchar('-');
		sign = -1;
	}

	return (sign);
}
