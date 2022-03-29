#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 *
 * Return: - The index where @value is located
 *         - -1 if @array is NULL of @value is not present in @array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t  i, m, L = 0, R = (size - 1);

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i == R)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		m = (L + R) / 2;
		if (array[m] > value)
		{
			R = m - 1;
		}
		else if (array[m] < value)
		{
			L = m + 1;
		}
		else
			return (m);
	}
	return (-1);
}
