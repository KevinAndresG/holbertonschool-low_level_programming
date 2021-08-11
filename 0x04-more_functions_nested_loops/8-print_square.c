#include "main.h"
#include <stdio.h>

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
