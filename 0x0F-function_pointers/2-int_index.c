#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that executes a function given as a parameter
 * @array: a int pointer
 * @size: var int type
 * @cmp: the function that call another function
 * Return: return an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k, res;
	
	if (size <= 0)
	{
		return (-1);
	}
	if (array != 0 && cmp != 0)
	{
		for (k = 0; k < size; k++)
		{
			res = cmp(array[k]);
			if (res == 1)
			{
				return (k);
			}
		}
	}
	return (-1);
}
