#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - object.
 * @size: int
 * @c: char
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	j = malloc(size * sizeof(char));
	if (j == 0)
	{
		return (NULL);
	}
	for (n = 0; n <= size; n++)
	{
	j[n] = c;
	}
return (j);
}
