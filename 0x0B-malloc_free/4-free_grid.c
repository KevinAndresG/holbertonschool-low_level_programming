#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid -  that frees a 2 dimensional grid previously created
 * @grid: a int pointer
 * @height: an int
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	int **q = grid;

	while (height--)
	{
		free(*grid);
		grid++;
	}
	free(q);
}
