#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: an int
 * Return: nothing
 */
void print_diagonal(int n)
{
	int li = 0, esp = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 0; li < n; li++)
		{
			for (esp = 0; esp <= li; esp++)
			{
				if (esp != li)
				{
					_putchar(' ');
				}
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
