#include "search_algos.h"
/**
 * linear_search - search in an array to fin the value passed
 * @array: the array to the checked
 * @size: the size of the array
 * @value: the value to be searched
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
