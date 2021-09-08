#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements to be reversed
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int count, l_index, r_index, half;

	count = 0;
	half = n / 2;
	n = n - 1;

	while (count < half)
	{
		l_index = *(a + (n - count));
		r_index = *(a + count);
		a[count] = l_index;
		a[n - count] = r_index;
		count++;
	}
}
