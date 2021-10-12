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
	listint_t *node, *tmp = head;

	if (tmp == NULL)
		return (NULL);
	for (node_n = 0; tmp != NULL; node_n++)
	{
		node = tmp;
		tmp = node->next;
		if (node_n == index && node == NULL)
			return (NULL);
		else if (node_n == index && node != NULL)
			break;
	}

	return (node);
}
