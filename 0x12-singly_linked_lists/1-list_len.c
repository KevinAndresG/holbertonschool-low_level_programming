#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list
 * @h: list_t type
 * Return: return a size_t
 */

size_t list_len(const list_t *h)
{
	int run = 0;

	while (h != NULL)
	{
		h = h->next;
		run++;
	}
	return (run);
}
