#include "lists.h"

/**
 * free_list - function that adds a new node at the end of a list
 * @head: list_t type
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
