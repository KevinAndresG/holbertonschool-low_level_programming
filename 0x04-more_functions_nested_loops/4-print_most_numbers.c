#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: nothing
 */
void print_most_numbers(void)
{
	int numbers = '0';

	for (; numbers <= '9'; numbers++)
	{
		if (numbers != '2' && numbers != '4')
		{
			_putchar(numbers);
		}
	}
	_putchar('\n');
}
