#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of a and b
 * @n: an unsigned int
 * Return: return an int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	int sum = 0;
	unsigned int k;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (k = 0; k < n; k++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);

	return (sum);
}
