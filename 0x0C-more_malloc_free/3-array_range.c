#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that allocates memory using malloc.
 * @min: an int
 * @max: an int
 * Return: return an int
 */
int *array_range(int min, int max)
{
	int *k = NULL, f = 0, g = 0;

	if (min > max)
	{
		return (NULL);
	}

	g = max - min;
	g++;

	k = malloc(g * sizeof(int));
	if (k == 0)
	{
		return (NULL);
	}
	for (f = 0; f < g; f++)
	{
		if (min <= max)
		{
			k[f] = min;
			min++;
		}
	}

	return (k);
}
