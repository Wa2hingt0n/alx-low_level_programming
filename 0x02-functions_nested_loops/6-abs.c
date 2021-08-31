#include "main.h"

/**
 * _abs - Prints absoulte value of a number
 * @a: Integer to be checked
 *
 * Return: absolute value
 */

int _abs(int a)
{
	int absolute;

	if (a < 0)
		absolute = -a;
	else if (a == 0)
		absolute = 0;
	else
		absolute = a;

	return (absolute);
}
