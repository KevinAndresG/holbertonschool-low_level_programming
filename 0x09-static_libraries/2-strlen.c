#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 *@s: a string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int k;
k = 0;

	while (*(s + k) != '\0')
	{
		k++;
	}
	return (k);
}
