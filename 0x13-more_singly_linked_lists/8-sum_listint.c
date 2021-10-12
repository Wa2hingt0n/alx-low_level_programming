#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t list
 * @head: List whose data is to be summed up
 *
 * Return: Sum of all the data in the list
 *         0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	for (i = 0; node != NULL; i++)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
