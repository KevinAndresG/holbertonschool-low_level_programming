#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: list_t type
 * @str: a const char
 * Return: return a struct
 */

list_t *add_node(list_t **head, const char *str)
{
	int r = 0;
	list_t *first = malloc(sizeof(list_t));

	if (first == NULL)
	{
		return (NULL);
	}
	while (str[r] != '\0')
	{
		r++;
	}
	first->str = strdup(str);
	first->len = r;
	if (head != NULL)
	{
		first->next = (*head);
	}
	(*head) = first;

	return (first);
}
