#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a doubly linked list
 * @head: Pointer to the beginning of the list
 *
 * Return: Sum of all the data
 *         0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
