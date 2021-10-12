#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list and return its data
 * @head: List whose head node is to be deleted
 *
 * Return: Head node's data
 *         0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		data = 0;
	}
	else
	{
		data = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (data);
}
