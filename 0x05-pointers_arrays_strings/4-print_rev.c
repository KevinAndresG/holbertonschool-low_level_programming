#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 *@s: char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = i; j >= 0; j--)
	{
		_putchar (s[j]);
	}
	_putchar ('\n');
}
