#include "search_algos.h"

/**
 * binary_search - search in an array binary form
 * @array: the array to the checked
 * @size: the size of the array
 * @value: the value to be searched
 * Return: return the index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l;
	size_t mid;
	size_t i;
	/* size_t r; */

	if (array == NULL)
	{
		return (-1);
	}
	/* r = size - 1; */
	l = 0;

	while (l < size)
	{
		printf("searching in array: ");
		for (i = l; i < size; i++)
		{
			if (i == size - 1)
			{
				printf("%d\n", array[i]);
			}
			else
				printf("%d, ", array[i]);
		}
		mid = (l + (size - 1)) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			size = mid;
		else
			l = mid + 1;
	}
	return (-1);
}
