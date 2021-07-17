#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory using malloc.
 * @nmemb: an unsigned int
 * @size: an unsigned int
 * Return: return nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	k = malloc(nmemb * size);
	if (k == NULL)
	{
		return (0);
	}
	return (k);
}
