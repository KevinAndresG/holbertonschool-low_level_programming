#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: listint_t type
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{

size_t n = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	n++;
}
return (n);
}
