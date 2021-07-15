#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: a char pointer
 * @height: a char pointer
 * Return: return an int
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int j = 0;
	int k = 0;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
	array[j] = malloc(width * sizeof(int));
		if (array[j] == NULL)
		{
			free(array[j]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}
