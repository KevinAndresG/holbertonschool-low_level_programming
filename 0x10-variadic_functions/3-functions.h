#ifndef _3_FUNCTIONS_H
#define _3_FUNCTIONS_H
#include <stdarg.h>

/**
 * print_char - returns the sum of a and b
 * @count: a va_list
 * Return: return nothing
 */
void print_char(va_list count)
{
	printf("%c", va_arg(count, int));
}

/**
 * print_int - returns the sum of a and b
 * @count: an unsigned int
 * Return: return nothing
 */
void print_int(va_list count)
{
	printf("%d", va_arg(count, int));
}

/**
 * print_float - returns the sum of a and b
 * @count: an unsigned int
 * Return: return nothing
 */
void print_float(va_list count)
{
	printf("%f", va_arg(count, double));
}

/**
 * print_string - returns the sum of a and b
 * @count: an unsigned int
 * Return: return nothing
 */
void print_string(va_list count)
{
	char *k;
	k = va_arg(count, char *);

	if (k == NULL)
	{
		printf("(nil)");
		return;
	}
		else
	{	
		printf("%s", k);
	}
	}

#endif /*_3_FUNCTIONS_H*/