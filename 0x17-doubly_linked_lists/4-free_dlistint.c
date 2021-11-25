#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head node of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head != NULL)
	{
		while (tmp)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
