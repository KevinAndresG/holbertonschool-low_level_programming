#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node
 * @h: pointer
 * @idx: the index to insert
 * @n: an int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *new = NULL;
		unsigned int run = 0;
	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (aux == NULL)
	{
		return (NULL);
	}
	else
	{
		while (aux != NULL)
		{
			if (run == idx - 1)
			{
				new->next = aux->next;
				new->prev = aux->prev;
				aux->next = new;
				return (new);
			}
			aux = aux->next;
			run++;
		}
	}
	return (NULL);
}
