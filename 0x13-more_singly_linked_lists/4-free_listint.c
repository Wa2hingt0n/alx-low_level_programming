#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: List to be freed
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
