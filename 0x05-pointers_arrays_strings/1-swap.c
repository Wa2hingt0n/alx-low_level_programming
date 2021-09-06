#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
