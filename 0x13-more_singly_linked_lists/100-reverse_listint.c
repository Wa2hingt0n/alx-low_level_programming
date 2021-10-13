#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the list to be reversed
 *
 * Return: Pointer to the first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
