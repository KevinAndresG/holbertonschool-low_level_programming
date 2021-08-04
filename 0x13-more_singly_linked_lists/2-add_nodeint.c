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

	new->n = n;
	new->next = *head;
	*head = new;

	if (*head == NULL)
	{
		return (NULL);
	}
	return (*head);
}
