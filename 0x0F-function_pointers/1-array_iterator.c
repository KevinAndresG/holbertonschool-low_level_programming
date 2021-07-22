#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: a char pointer
 * @size: the function to save the other function
 * @action: the function that call another function
 * Return: return nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array != 0 && action != 0)
	{
		for (k = 0; k < size; k++)
		{
			action(array[k]);
		}
	}

}
