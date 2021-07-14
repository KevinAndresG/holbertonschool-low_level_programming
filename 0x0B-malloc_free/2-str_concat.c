#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -  returns a pointer to a newly allocated space in memory
 * @s1: a char pointer
 * @s2: a char pointer
 * Return: return a char
 */
	char *str_concat(char *s1, char *s2)
	{
	char *k;
	int m = 0;
	int n = 0;
	int o;
	int p;

	if (s1 != NULL)
	{
	for (m = 0; s1[m] != '\0'; m++)
	{}
	}
	if (s2 != NULL)
	{
	for (n = 0; s2[n] != '\0'; n++)
	{}
	}
	p = m + n;
	k = malloc((p + 1) * sizeof(char));
	if (k == 0)
	{
		return (0);
	}
	for (o = 0; o < p; o++)
	{
		if (o < m)
		{
		k[o] = s1[o];
	}
	else
	{
		k[o] = s2[o - m];
	}
	}
	return (k);
	}
