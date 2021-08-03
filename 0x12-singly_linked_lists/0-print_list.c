#include "lists.h"

/**
 * print_list - function that prints the elements of a list
 * @h: list_t type
 * Return: return a size_t
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
