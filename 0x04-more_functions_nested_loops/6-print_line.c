#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: an int
 */
void print_line(int n)
{
	int lines = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
