#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *Return: nothing
 */
void print_numbers(void)
{
	int numbers = '0';

	for (; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
