#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the list
 * @index: the index to print
 * Return:  a dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int run = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (run == index)
		{
			return (head);
		}
		head = head->next;
		run++;
	}
	return (NULL);
}
