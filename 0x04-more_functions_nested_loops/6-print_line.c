#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: an int
 */
void print_line(int n)
{
	int lines = 0;

	for (; lines <= n; lines++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
