#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: an unsigned int
 * Return: return nothing
 */
void *malloc_checked(unsigned int b)
{

	unsigned int *j;

	if (b == 0)
	{
		return (NULL);
	}
	j = malloc(b * 1);
	if (j == 0)
	{
	exit(98);
	}
	return (j);
}
