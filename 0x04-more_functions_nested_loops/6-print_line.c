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
	for (; lines <= n; lines++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
