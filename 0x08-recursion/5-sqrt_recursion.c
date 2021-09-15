#include "main.h"

/**
 * check_sqrt - Checks for a natural square root
 * @square: The number to be checked
 * @root: Square root of the suuare number
 *
 * Return: The square root
 */

int check_sqrt(int square, int root)
{
	if (root * root == square)
		return (root);
	else if (root > square / root)
		return (check_sqrt(square, root - 1));
	else if (root < square / root)
		return (check_sqrt(square, root + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the square root of a number
 * @n: The number to be evaluated for square root
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	int start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_sqrt(n, start));
}
