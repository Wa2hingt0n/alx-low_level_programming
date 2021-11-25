#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the beginning of the list
 * @index: Index of node to return
 *
 * Return: node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (head != NULL)
	{
		while (tmp)
		{
			if (i == index)
				return (tmp);
			tmp = tmp->next;
			i++;
		}
	}

	return (NULL);
}
