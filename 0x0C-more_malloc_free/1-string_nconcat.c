#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that allocates memory using malloc.
 * @s1: a char pointer
 * @s2: a char pointer
 * @n: an unsigned int
 * Return: return a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m = NULL;
	unsigned int k = 0;
	unsigned int p = 0;
	unsigned int conc = 0;
	unsigned int q = 0;

	if (s1 != 0)
	{
	for (k = 0; s1[k] != '\0'; k++)
	{}
	}
	if (s2 != 0)
	{
		for (p = 0; s2[p] != s2[n]; p++)
		{}

	conc = k + p;
	m = malloc(conc * sizeof(char));
	if (m == 0)
	{
		return (0);
	}
	for (q = 0; q < conc; q++)
	{
		if (q < k)
		{
			m[q] = s1[q];
		}
		else
		{
		m[q] = s2[q - k];
		}
	}
}
	return (m);
}
