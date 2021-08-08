#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to int
 * @b: a constant char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != 48 && b[j] != 49)
		{
			return (0);
		}
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		n <<= 1;
		if (b[j] == 49)
		{
			n += 1;
		}
	}
	return (n);
}
