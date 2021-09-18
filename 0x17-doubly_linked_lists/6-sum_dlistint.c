#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head:
 * Return: an int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}