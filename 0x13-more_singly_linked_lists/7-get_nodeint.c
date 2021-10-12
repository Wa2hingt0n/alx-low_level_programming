#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head node of a linked list
 * @index: nth node
 *
 * Return: nth node of the list
 *         NULL if the nth node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_n;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	for (node_n = 0; node != NULL; node_n++)
	{
		if (node_n == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
