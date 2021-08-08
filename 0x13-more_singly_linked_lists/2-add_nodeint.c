#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: listint_t type
 * @n: a constant int
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}