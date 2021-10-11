#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements on the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
