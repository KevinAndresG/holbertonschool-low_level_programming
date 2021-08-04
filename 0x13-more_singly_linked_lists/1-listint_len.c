#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: listint_t type
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
