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
	unsigned int k = 0, p = 0, conc = 0, q = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != 0)
	{
		k = strlen(s1);
	}
	if (s2 != 0)
	{
		p = strlen(s2);
		if (n > p)
		{
			n = p;
		}
		conc = k + n;
		m = malloc((1 + conc) * sizeof(char));
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
		m[q] = '\0';
	}
	return (m);
}
