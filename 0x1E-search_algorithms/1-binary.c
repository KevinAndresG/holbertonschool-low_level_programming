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
	size_t l = 0;
	size_t r = size - 1;
	int mid = 0;
	int *array2 = array;

	if (size == 0)
	{
		return (-1);
	}
	while (l <= r)
	{
		size_t i = 0;

		printf("searching in array: ");

		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d\n", array2[i]);
			}
			else
				printf("%d, ", array2[i]);
		}
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
