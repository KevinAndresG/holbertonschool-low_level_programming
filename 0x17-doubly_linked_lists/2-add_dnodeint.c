#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning
 *
 * @n: an struct
 * @head: the head to the list
 * Return: a size_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
