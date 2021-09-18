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
	if (head != NULL)
	{
		while (head != NULL)
		{
			head = head->prev;
			free(head);
		}
		free(head);
	}
}
