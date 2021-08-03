#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of list.
 * @head: list_t type
 * @str: const char
 * Return: return a struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int r = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *end = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[r] != '\0')
	{
		r++;
	}
	new_node->str = strdup(str);
	new_node->len = r;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	return (new_node);
}
