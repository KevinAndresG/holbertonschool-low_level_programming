#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square
 * @size: an int
 * Return: nothing
 */
void print_square(int size)
{
	int k = 0;
	int n = 0;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
