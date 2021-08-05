#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: listint_t type
 * @n: a constant int
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;

	return (new);
}
