#include "lists.h"

/**
 * free_dlistint - free list.
 *
 * @head: Head of the list.
 *
 * Return: No return.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
