#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
		result = 1;
	else
		result = 0;

	return (result);
}
