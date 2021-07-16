#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: an unsigned int
 * Return: return nothing
 */
void *malloc_checked(unsigned int b)
{
	char *k = NULL;
	unsigned int j;
	if (b == 0)
	{
		return (NULL);
	}
	k = malloc(b * sizeof(int));
	if (k == 0)
	{
		return (NULL);
	}
	for (j = 0; j <= b; j++)
	{
		k[j] = b;
	}
	return (k);
}
