#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
	int numbs = 0, nm = 0;

	for (numbs = 0; numbs <= 9; numbs++)
	{
		for (nm = 0; nm <= 14; nm++)
		{
			if (nm > 9)
			{
				_putchar((nm / 10) + '0');
			}
			_putchar((nm % 10) + '0');
		}
		_putchar('\n');
	}
}
