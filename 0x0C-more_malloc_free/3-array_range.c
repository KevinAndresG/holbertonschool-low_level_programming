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
	if (min != 0)
	{
		for (f = 0; f <= min; f++)
		{
		}
	}
	if (max != 0)
	{
		for (g = 0; g <= max; g++)
		{
		}
	}
	f = f + g;
	k = malloc(f);
	if (k == 0)
	{
		return (NULL);
	}
	return (k);
}
