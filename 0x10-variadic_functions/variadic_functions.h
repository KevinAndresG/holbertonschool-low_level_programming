#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct format
{
	char *save;
	void (*print)(va_list count);
}nmj_f;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/*void print_char(va_list count);
void print_int(va_list count);
void print_float(va_list count);
void print_string(va_list count);*/

#endif /*VARIADIC_FUNCTIONS_H*/
