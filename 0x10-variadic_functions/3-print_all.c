#include "variadic_functions.h"
#include "3-functions.h"
/**
 * print_all - returns the sum of a and b
 * @format: an unsigned int
 * Return: return nothing
 */

void print_all(const char *const format, ...)
{
	va_list count;
	int j = 0;
	char *sep = "";

	nmj_f nmjm[] = {
	    {"c", print_char},
	    {"i", print_int},
	    {"f", print_float},
	    {"s", print_string},
	    {NULL, NULL},
	};

	va_start(count, format);

	while (format[j] != '\0')
	{
		int o = 0;

		while (nmjm[o].save != NULL)
		{
			if (format[j] == *(nmjm[o].save))
			{
				printf("%s", sep);
				nmjm[o].print(count);
				sep = ", ";
			}
		o++;
		}
		j++;
	}
	va_end(count);
	printf("\n");
}
